/*
	Name: 		  4.37.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 20:41
	Description:  Describe in general how you would remove any continue statement from a 
					loop in a program and replace that statement with some structured equivalent. 
					Use the technique you developed
					here to remove the continue statement from the program of Fig. 4.12. 
*/

#include <stdio.h>

int main( void )
{
   unsigned int x; 

   for ( x = 1; x <= 10; ++x ) {

      if ( x == 5 ) {   
         x++; 	
      }

      printf( "%u ", x );
   }
   
   puts( "\nUsed continue to skip printing the value 5" );
   
   return 0;
} 
