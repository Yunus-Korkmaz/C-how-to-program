/*
	Name: 		  4.35.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 20:28
	Description:  A criticism of the break statement and the continue statement is that each is unstructured.
					Actually, break statements and continue statements can always be replaced by structured statements, 
					although doing so can be awkward. Describe in general how you would remove any break
					statement from a loop in a program and replace that statement with some structured equivalent.
					[Hint: The break statement leaves a loop from within the body of the loop. The other way to leave
					is by failing the loop-continuation test. Consider using in the loop-continuation test a second test
					that indicates “early exit because of a ‘break’ condition.”] Use the technique you developed here to
					remove the break statement from the program of Fig. 4.11.
*/

#include <stdio.h>

int main( void )
{
   int x; 
   int flag=0;

   for ( x = 1; x <= 10 && flag!=1; ++x ) {

      if ( x == 5 ) {
         flag=1;						// we used a variable to control if x==5 or not 
         x-=1;							// if x==5 than flag=1 and loop will stop
      } 								// but increament procces still working and x will be 6
										// we estimated that and we decrease x before control

      printf( "%d ", x ); 
   } 
   
   printf( "\nBroke out of loop at x == %d\n", x );
   
   return 0;
} 

