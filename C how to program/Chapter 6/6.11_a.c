/*
	Name:		  6.11_a.c
	Author:       Yunus Korkmaz
	Date:		  19.07.20 22:31
	Description:  (Bubble Sort) The bubble sort presented in Fig. 6.15 is inefficient for large arrays. Make the following simple modifications to improve its performance.
						a) After the first pass, the largest number is guaranteed to be in the highest-numbered 
							element of the array; after the second pass, the two highest numbers are �in place,� and
							so on. Instead of making nine comparisons on every pass, modify the bubble sort to
							make eight comparisons on the second pass, seven on the third pass and so on.
*/

// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main( void ) 
{   
   // initialize a
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 }; 
   int pass; // passes counter
   size_t i; // comparisons counter
   int hold; // temporary location used to swap array elements
   
   puts( "Data items in original order" );
   
   // output original array
   for ( i = 0; i < SIZE; ++i ) {
      printf( "%4d", a[ i ] );
   } // end for

   // bubble sort                                         
   // loop to control number of passes                    
   for ( pass = 1; pass < SIZE; ++pass ) {                   
                                                             
      // loop to control number of comparisons per pass   
      for ( i = 0; i < SIZE - pass; ++i ) {            // We just change this statement for ( i = 0; i < SIZE - 1; ++i ) to ,for ( i = 0; i < SIZE - pass; ++i )  
                                                             
         // compare adjacent elements and swap them if first 
         // element is greater than second element           
         if ( a[ i ] > a[ i + 1 ] ) {                        
            hold = a[ i ];                                   
            a[ i ] = a[ i + 1 ];                             
            a[ i + 1 ] = hold;                               
         } // end if                                      
      } // end inner for                                  
   } // end outer for                                     

   puts( "\nData items in ascending order" );

   // output sorted array
   for ( i = 0; i < SIZE; ++i ) {
      printf( "%4d", a[ i ] );
   } // end for

   puts( "" );
} // end main



/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
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

