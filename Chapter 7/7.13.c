/*
	Name:		  7.13.c
	Author:       Yunus Korkmaz
	Date:		  29.12.20 12:17
	Description:  (Project: Card Shuffling and Dealing) Use the functions developed in Exercise 7.12 to
					write a program that deals two five-card poker hands, evaluates each, and determines which is the
					better hand.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
											// I didn't change the code too much in 7.12.c
											// shuffle and deal nearly same just has litle modifications
#define SUITS 4								// and I add same functions controll hand					
#define FACES 13
#define CARDS 52

// prototypes
void shuffle( unsigned int wDeck[][ FACES ] ); // shuffling modifies wDeck

void deal( unsigned int wDeck[][ FACES ], const char *wFace[],const char *wSuit[],int (*hand)[FACES]);

int check(int (*hand)[FACES],int (*f)(int (*hand)[FACES]));
int hasTwoPair(int (*hand)[FACES]);
int hasPair(int (*hand)[FACES]);
int hasThreeKind(int (*hand)[FACES]);
int hasFourKind(int (*hand)[FACES]);
int isFlush(int (*hand)[FACES]);
int isStraight(int (*hand)[FACES]);

	// initialize suit array                       
   const char *suit[ SUITS ] =            
      { "Hearts", "Diamonds", "Clubs", "Spades" };
   
   // initialize face array                   
   const char *face[ FACES ] =
      { "Ace", "Deuce", "Three", "Four",         
        "Five", "Six", "Seven", "Eight",         
        "Nine", "Ten", "Jack", "Queen", "King" };

	// initialize deck array
   unsigned int deck[ SUITS ][ FACES ] = { 0 };

int main( void ){
   
   srand( time( NULL ) ); // seed random-number generator

   shuffle( deck ); // shuffle the deck
   // deal the deck
   
    int hand1[ SUITS ][ FACES ] = { 0 }; // create a 2 ddimensional for keep the hand 
    									// we sing the card in hand like what we do in deck array
    									// for examle card 1 is Eight of Diamonds than we need to sing to hand[1][7]
    int hand2[ SUITS ][ FACES ] = { 0 };
    
   
   	// I take all functions in a pointer array if you dont want to do that you can write all of them separately 		
    int (*functions[6])(int (*hand)[FACES])={ hasPair,hasTwoPair,hasThreeKind
											 ,hasFourKind,isFlush,isStraight  };	
    
    // I take hands in a pointer array if you dont want to do that you can create loop for each hand
    int (*hands[2])[FACES]={hand1,hand2}; 
    
    compareHands(hands,functions);
   
} // end main

// shuffle cards in deck
void shuffle( unsigned int wDeck[][ FACES ] )
{
   size_t row; // row number
   size_t column; // column number
   size_t card; // counter

   // for each of the cards, choose slot of deck randomly
   for ( card = 1; card <= 10; ++card ) {						          // no need to shuffle all card just 10 card enought for 2 hand

      // choose new random location until unoccupied slot found
      do {                                                        
         row = rand() % SUITS;                                   
         column = rand() % FACES;                             
      } while( wDeck[ row ][ column ] != 0 ); // end do...while

      // place card number in chosen slot of deck
      wDeck[ row ][ column ] = card;
   } // end for
} // end function shuffle

// deal cards in deck and take 5 card for hand 
void deal( unsigned int wDeck[][ FACES ], const char *wFace[],
   const char *wSuit[],int (*hand)[FACES])
{    
   static size_t card=1; // counter
   size_t row; // row counter
   size_t column; // column counter
	
   size_t i=card+4;
	
   // deal each of the cards
   for ( card; card <= i; ++card ) {                                     // no need to deal all card just 5 card enought for 1 hand
      // loop through rows of wDeck
      for ( row = 0; row < SUITS; ++row ) {
         // loop through columns of wDeck for current row
         for ( column = 0; column < FACES; ++column ) {
            // if slot contains current card, display card
            if ( wDeck[ row ][ column ] == card ) {
               printf( "%5s of %-8s%c", wFace[ column ], wSuit[ row ],
                  card % 2 == 0 ? '\n' : '\t' ); // 2-column format
                  
                  *(*(hand+row)+column)=card;		// take the card to our 2 dimensional array 
				                    
            } 
         } 
      } 
   } 
} 

// compare two hands
int compareHands(int (*hands[2])[FACES],int (*functions[6])(int (*hand)[FACES])){ 
	
	size_t i,j; 
    
    int handLevels[2]={0};
    
    for(j=0;j<2;j++){
    	
    	printf("%s%d%s","------------------HAND ",j+1,"------------------------");
    	puts("");
    	
    	deal( deck, face, suit,hands[j]);	// deal the cards and take 5 card in hand1	
    	puts("\n");
    	
  	  for(i=0;i<6;i++){	// call all functions which we use to determine hand statue
    
			if(check(hands[j],(*functions[i]))==1)
				handLevels[j]=i+1;
		}
   
  	puts("");
   	printf("%s%d%s%d","Hand ",j+1," level = ",handLevels[j]);
   	puts("\n");
   	
   }
   
   puts("**************");
   
   if(handLevels[0]>handLevels[1])
   		puts("Winner is Hand 1");
   else if(handLevels[0]==handLevels[1])
   		puts("The game is a draw");
   else 
   		puts("Winner is Hand 2");
   		
	puts("**************");
}

// call the functions and evaluate them
int check(int (*hand)[FACES],int (*f)(int (*hand)[FACES])){  // 
	
	if((*f)(hand)==1){
		printf("%10s","YES");
		puts("");
		return 1;
	}
		
		printf("%10s","NO");
		puts("");
		return 0;
		
}

// this functions take the faces of cards for operating more easly in fuctions
void takeFaces(int (*hand)[FACES],int *faces){ 
	
	size_t row;
	size_t column;
	size_t count=0;
	
	for(row=0;row<SUITS;row++)							// we use very similar code in dealing 
		for(column=0;column<FACES;column++){	        // check all row and column and take face(column) values of cards
				
			if( *(*(hand+row)+column) != 0 ){
			faces[count]=column;
			count++;	
			}
			
		}	
}
// this functions take the suits of cards for operating more easly in fuctions
void takeSuits(int (*hand)[FACES],int *suits){
	
	size_t row;
	size_t column;
	size_t count=0;
	
	for(row=0;row<SUITS;row++)
		for(column=0;column<FACES;column++){			// we use very similar code in dealing 
														 // check all row and column and take suits(row) values of cards
			if( *(*(hand+row)+column) != 0 ){
			suits[count]=row;
			count++;	
			}
			
		}
	
}
// check the hand for pair
int hasPair(int (*hand)[FACES]){
	
	printf("%-25s","Hand has Pair?");
	
	int faces[5]={0};			// create an array to keep faces 
											
	takeFaces(hand,faces); 		// take faces on array
	
	size_t i,j;

	int temp;
	
	for(j=0;j<4;j++){		// take a card and compare them with others until you find same a same card
		
		for(i=j+1;i<5;i++)
			if(faces[j]==faces[i])
				return 1;
	
	}
	
	
	return 0;
	
}
// check the hand for 2 pair
int  hasTwoPair(int (*hand)[FACES]){
	
	printf("%-25s","Hand has two pair?");
	
	int faces[5]={0};			 // create an array to keep faces 
		
	takeFaces(hand,faces);      // take faces on array
	
	size_t i,j;
	
	int counter=0;
	
	for(j=0;j<4;j++){         					// take a card and start to compare them with others 
												// if you find same cards delete them ( I sing them with -1 )
		while(faces[j]==-1 && j<4){				// until compare fourth element with fifth element
			j++;
		}	
		
		if(j==4)		// break j==4 , means j is fifth element no need to continue the loop 
			break;		// you cant compare fifth element with sixth element because last element ist five
		
		
		
		for(i=j+1;i<5;i++){				// control for same cards		
			if(faces[j]==faces[i]){			
				
				faces[i]=-1;		// if cards are same delete them
				faces[j]=-1;
				counter++;			// and increase the pair counter
				break;
			}
	}
	
	}
	
	if(counter>=2)  	// if  we have 2 counter return 1
		return 1;
	
	return 0;
}
// check card for 3 same face
int hasThreeKind(int (*hand)[FACES]){
	
	printf("%-25s","Hand has three of a kind?");
	
	int faces[5]={0};
		
	takeFaces(hand,faces);
	
	size_t i,j;
	
	int threeCounter=0;
	
	for(j=0;j<3;j++){
		

		for(i=j+1;i<5;i++){
			if(faces[j]==faces[i]){   // nearly same with previous code but now we dont delete when we find same faces 
				
				threeCounter++;
			}
			if(threeCounter>=2)		// if we find same 2 card with which wwe keep than returrn 1
				return 1;
	}
	
	threeCounter=0;
	
	}
	
	return 0;
}
// check card for 4 same face
int hasFourKind(int (*hand)[FACES]){
	
	printf("%-25s","Hand has four of a king");
	
	int faces[5]={0};
		
	takeFaces(hand,faces);
	
	size_t i,j;
	
	int fourCounter=0;
	
	for(j=0;j<2;j++){

		for(i=j+1;i<5;i++){
			if(faces[j]==faces[i]){
				
				fourCounter++;
			}
			if(fourCounter>=3)		// same code with previous one one differances is count for 3
				return 1;
	}
	
	fourCounter=0;
	}
	
	return 0;
	
}

// check the hand for 5 card which has same suit 
int isFlush(int (*hand)[FACES]){
	
	printf("%-25s","Hand has flush?");
	
	int suits[5]={0};	// crate an array for keep suits
	
	takeSuits(hand,suits);		// take the suits in array
	
	size_t i,j;
	
	int flushCounter=0;
	
	j=0;
	i=1;
		for(i=1;i<5;i++){  // compare the first card with all other cards
			
			if(suits[j]==suits[i]){		
				
				flushCounter++;
			}
			
			if(flushCounter>=4)
				return 1;
	
	
	}
	
	
	return 0;
	
}
// check the hand for all cards are consecutive
int isStraight(int (*hand)[FACES]){
	
	printf("%-25s","Hand has straight?");
	
	int faces[5]={0};
		
	takeFaces(hand,faces);
	
	size_t i,j;
	
	int temp;
	
	for(i=0;i<5;i++)						// sort faces using bubble sort
		for(j=0;j<4;j++){
			if(faces[j]>faces[j+1]){
				temp=faces[j];
				faces[j]=faces[j+1];
				faces[j+1]=temp;
			}
				
		}
				
	for(i=0;i<4;i++){					// check faces is there consecutive
		if(faces[i]+1!=faces[i+1])
			return -1;
	}	
	
	return 1;
}


