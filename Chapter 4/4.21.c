/*
	Name: 		  4.21.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 15:10
	Description:  Rewrite the program of Fig. 4.2 so that the initialization of the variable counter is done in
					the definition rather than in the for statement
*/

#include <stdio.h>

int main( void )
{
   unsigned int counter=1;

   for ( ; counter <= 10; ++counter ) {
      printf( "%u\n", counter );
   }
   
   return 0;
} 

