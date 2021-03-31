/*
	Name:		  6.11_b.c
	Author:       Yunus Korkmaz
	Date:		  19.07.20 22:33
	Description:  (Bubble Sort) The bubble sort presented in Fig. 6.15 is inefficient for large arrays. Make the following simple modifications to improve its performance.
						b) The data in the array may already be in the proper or near-proper order, so why make
							nine passes if fewer will suffice? Modify the sort to check at the end of each pass whether
							any swaps have been made. If none has been made, then the data must already be in the
							proper order, so the program should terminate. If swaps have been made, then at least
							one more pass is needed.
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
   int flag=0; // to determnie the if block (32-37) worked or not 
   
   puts( "Data items in original order" );
   
   // output original array
   for ( i = 0; i < SIZE; ++i ) {
      printf( "%4d", a[ i ] );
   } // end for

   // bubble sort                                         
   // loop to control number of passes                    
   for ( pass = 1; pass < SIZE; ++pass ) {                   
              flag=0;                                               
      // loop to control number of comparisons per pass   
      for ( i = 0; i < SIZE - 1; ++i ) {                     
                                                             
         // compare adjacent elements and swap them if first 
         // element is greater than second element           
         if ( a[ i ] > a[ i + 1 ] ) {     
		 	flag=1;                   
            hold = a[ i ];                                   
            a[ i ] = a[ i + 1 ];                             
            a[ i + 1 ] = hold;                               
         } // end if                                      
      } // end inner for   
	  
	  if(flag==0)	// if no number has changed finish the loop
	  	break;
	                                 
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

