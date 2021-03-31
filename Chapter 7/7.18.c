/*
	Name:		  7.18.c
	Author:       Yunus Korkmaz
	Date:		  03.01.21 19:41
	Description:  (Card Shuffling and Dealing Modification) Modify the card shuffling and dealing program
					of Fig. 7.24 so the shuffling and dealing operations are performed by the same function (shuffleAndDeal). 
					The function should contain one nested looping structure that’s similar to function shuffle in Fig. 7.24. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void dealAndShuffle( unsigned int wDeck[][ FACES ], const char *wFace[],    const char *wSuit[]); // shuffling modifies wDeck

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

   dealAndShuffle( deck,face, suit ); // deal and shuffle the deck
   
} // end main

// shuffle cards in deck
void dealAndShuffle( unsigned int wDeck[][ FACES ],const char *wFace[],const char *wSuit[] )
{
   size_t row; // row number
   size_t column; // column number
   size_t card; // counter

   // for each of the cards, choose slot of deck randomly
   for ( card = 1; card <= CARDS; ++card ) {

      // choose new random location until unoccupied slot found
      do {                                                        
         row = rand() % SUITS;                                   
         column = rand() % FACES;                             
      } while( wDeck[ row ][ column ] != 0 ); // end do...while

      // place card number in chosen slot of deck
      wDeck[ row ][ column ] = card;
      
      printf( "%5s of %-8s%c", wFace[ column ], wSuit[ row ],			// add this statement from deal functions that all
                  card % 2 == 0 ? '\n' : '\t' );
   } // end for
} // end function shuffle


