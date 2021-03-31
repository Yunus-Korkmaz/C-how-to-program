/*
	Name:		  6.20.c
	Author:       Yunus Korkmaz
	Date:		  23.07.20 14:58
	Description:  (Game of Craps) Write a program that runs 1000 games of craps (without human intervention) and answers each of the following questions:
					a) How many games are won on the first roll, second roll, …, twentieth roll and after the
					twentieth roll?
					b) How many games are lost on the first roll, second roll, …, twentieth roll and after the
					twentieth roll?
					c) What are the chances of winning at craps? [Note: You should discover that craps is one
					of the fairest casino games. What do you suppose this means?]
					d) What’s the average length of a game of craps?
					e) Do the chances of winning improve with the length of the game?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time
#define SIZE 100000											// Define how many time game will be played

// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };

int rounds=0;	// a use global variable because we use in different functions

int rollDice( void ); // function prototype

// function main begins program execution
int main( void ){
	
	// randomize random number generator using current time
   srand( time( NULL ) );
	
	int won=0,lose=0;	// to calculate all winning percentange
	int rounds_won[21]={0},rounds_lose[21]={0};  // to take lose and wons in different round size (1-20 for round and 0 for 20+ rounds so tolat size 21)
	int total_rounds[21]={0}; //to number of round for each different lenght
	int average_length=0; // to calculate average length of rounds
	size_t k; // a counter for arrays
	int i;	
	int test;	// to take barbut game return value 
	
	for(i=0;i<SIZE;i++){
		test=barbut_game();
		
		// if 'rounds' bigger than 20 it takes total_rounds[0] other cases it takes own places
		rounds>20?total_rounds[0]++:total_rounds[rounds]++; 
		
		if(test==1){
			won++;
			rounds>20?rounds_won[0]++:rounds_won[rounds]++;

		}
		else {
			lose++;
			rounds>20?rounds_lose[0]++:rounds_lose[rounds]++;
			
		}
		rounds=0;
		
	}
	puts("");
	printf("%-10s%-10s%-10s%-10s%s","rounds","TOTAL","WIN","LOSE","Percentage of Winning(%)");
	puts("");
	for(k=1;k<=20;k++){
		printf("%-10d%-10d%-10d%-10d%",k,total_rounds[k],rounds_won[k],rounds_lose[k]);
		
		printf("%-10.2f",total_rounds[k]==0?0:(float)rounds_won[k]/total_rounds[k]*100); // we control the number of rounds ,must be greater than zero
		
		average_length+=total_rounds[k]*k;
		
		puts("");
	}
	printf("%-10s%-10d%-10d%-10d%","20+",total_rounds[0],rounds_won[0],rounds_lose[0]);
	printf("%-10.2f",total_rounds[0]==0?0:(float)rounds_won[0]/total_rounds[0]*100);
	puts("");
	
	printf("%-10s%-10d%-10d%-10d%-10.2f","ALL",SIZE,won,lose,(float)won/SIZE*100);
	puts("\n");
	
	printf("%s%.2f%s","Average length of game is ",(float)average_length/SIZE," rounds");
	puts("\n");
	puts("We have nearly %66 win chance in first round and in other rounds chance will be ");
	puts("nearly %40 if you play more time like 100000, you can see the percentages more clearly");
}

int barbut_game(void){																		// barbut game from Fig. 5.14: fig05_14.c
																							// I close the comment lines (103, 125, 129, 147)
   int sum; // sum of rolled dice															// replace the srand() function and add round counter
   int myPoint; // player must make this point to win										// and I add the return values 1 for wins -1 for loses

   enum Status gameStatus; // can contain CONTINUE, WON, or LOST

   

   sum = rollDice(); // first roll of the dice

   // determine game status based on sum of dice
   switch( sum ) {

      // win on first roll
      case 7: // 7 is a winner
      case 11: // 11 is a winner          
         gameStatus = WON; // game has been won
         break;

      // lose on first roll
      case 2: // 2 is a loser
      case 3: // 3 is a loser
      case 12: // 12 is a loser
         gameStatus = LOST; // game has been lost
         break;

      // remember point
      default:                  
         gameStatus = CONTINUE; // player should keep rolling
         myPoint = sum; // remember the point
      //   printf( "Point is %d\n", myPoint );
         break; // optional
   } // end switch

   // while game not complete
   while ( CONTINUE == gameStatus ) { // player should keep rolling
      sum = rollDice(); // roll dice again
      
      // determine game status
      if ( sum == myPoint ) { // win by making point
         gameStatus = WON; // game over, player won
         
      } // end if
      else {
         if ( 7 == sum ) { // lose by rolling 7
            gameStatus = LOST; // game over, player lost
         } // end if
      } // end else
   } // end while

   // display won or lost message
   if ( WON == gameStatus ) { // did player win?
      //puts( "Player wins" );
      return 1;
   } // end if
   else { // player lost
     // puts( "Player loses" );
      return -1;
   } // end else
   
} 

// roll dice, calculate sum and display results
int rollDice( void )
{
   int die1; // first die
   int die2; // second die
   int workSum; // sum of dice

   die1 = 1 + ( rand() % 6 ); // pick random die1 value
   die2 = 1 + ( rand() % 6 ); // pick random die2 value
   workSum = die1 + die2; // sum die1 and die2

   // display results of this roll
  // printf( "Player rolled %d + %d = %d\n", die1, die2, workSum );
   rounds++;
   return workSum; // return sum of dice
} // end function rollRice

