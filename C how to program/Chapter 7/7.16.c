/*
	Name:		  7.16.c
	Author:       Yunus Korkmaz
	Date:		  29.12.20 19:4629.12.20 12:17
	Description:  (Card Shuffling and Dealing Modification) In the card shuffling and dealing program of
					Fig. 7.24, we intentionally used an inefficient shuffling algorithm that introduced the possibility of
					indefinite postponement. In this problem, you’ll create a high-performance shuffling algorithm that
					avoids indefinite postponement.
					Modify the program of Fig. 7.24 as follows. Begin by initializing the deck array as shown in
					Fig. 7.29. Modify the shuffle function to loop row-by-row and column-by-column through the
					array, touching every element once. Each element should be swapped with a randomly selected element of the array.
					Print the resulting array to determine whether the deck is satisfactorily shuffled
					(as in Fig. 7.30, for example). You may want your program to call the shuffle function several
					times to ensure a satisfactory shuffle.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle( unsigned int wDeck[][ FACES ] ); // shuffling modifies wDeck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[], 
   const char *wSuit[] ); // dealing doesn't modify the arrays

int main( void )
{
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

   srand( time( NULL ) ); // seed random-number generator

   shuffle( deck ); // shuffle the deck
   deal( deck, face, suit ); // deal the deck
} // end main

// shuffle cards in deck
void shuffle( unsigned int wDeck[][ FACES ] )
{
   size_t row; // row number
   size_t column; // column number
   size_t card; // counter
   
   puts("Normal Card deck");
   for(row=0;row<SUITS;row++){					// initilaze the card 1 to 52
   	puts("");
   		for(column=0;column<FACES;column++){
   				wDeck[row][column]= row*FACES+column+1;	 // you can use a onether variable to watch numbers(1 to 52) or use that row*FACES+column+1
   				printf("%-3d",wDeck[row][column]);	
		   }
   }
   
   
   int tempCardNo;  // temporary items
   int tempRow;
   int tempColumn;

   // for each of the cards, choose slot of deck randomly
   for(row=0;row<SUITS;row++){
   	
   		for(column=0;column<FACES;column++){
   				
   				tempCardNo=wDeck[row][column];	  // take the card value 
   				tempRow=rand() % SUITS;			  // create a random row and column and keep them
   				tempColumn=rand() % FACES;
   				
   				wDeck[row][column]=wDeck[tempRow][tempColumn];  // swap card with a random card 
   				wDeck[tempRow][tempColumn]=tempCardNo;
   				
		   }
   }
   

   puts("\n\nShuffled Card deck");
    for(row=0;row<SUITS;row++){    // print the shuffled deck
    	puts("");
   		for(column=0;column<FACES;column++){
   				printf("%-3d",wDeck[row][column]);
		   }
   }
   	puts("\n");
} // end function shuffle

// deal cards in deck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[],
   const char *wSuit[] )
{
   size_t card; // card counter
   size_t row; // row counter
   size_t column; // column counter
   
   int flag=0;

   // deal each of the cards
   for ( card = 1; card <= CARDS; ++card ) {

      // loop through rows of wDeck
      for ( row = 0; row < SUITS; ++row ) {
         // loop through columns of wDeck for current row
         for ( column = 0; column < FACES; ++column ) {
            // if slot contains current card, display card
            if ( wDeck[ row ][ column ] == card ) {
            	
               printf( "%5s of %-8s%c", wFace[ column ], wSuit[ row ],
                  card % 2 == 0 ? '\n' : '\t' ); // 2-column format
                  	
                 row=SUITS;													// when you find the card sett the row and column and finish the both 2 loop
                 column=FACES;												// not so efficent way but her job
            } // end if
            
         } // end for
      } // end for
  }
} // end function deal


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

