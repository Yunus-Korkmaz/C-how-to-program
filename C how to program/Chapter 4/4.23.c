/*
	Name: 		  4.23.c
	Author:       Yunus Korkmaz
	Date: 		  14.06.20 15:29
	Description:  (Calculating the Compound Interest with Integers) Modify the program of Fig. 4.6 so that
					it uses only integers to calculate the compound interest. [Hint: Treat all monetary amounts as integral numbers of pennies. Then “break” the result into its dollar portion and cents portion by using
					the division and remainder operations, respectively. Insert a period.]
*/


// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

// function main begins program execution
int main( void )
{
   int amount; // amount on deposit
   int principal = 1000; // starting principal
   double rate = 5; // annual interest rate
   unsigned int year; // year counter

   // output table column heads
   printf( "%4s%21s\n", "Year", "Amount on deposit" );

   // calculate amount on deposit for each of ten years
   for ( year = 1; year <= 10; ++year ) {

      // calculate new amount for specified year
      amount = principal * pow( rate, year );

      // output one table row
      int print=amount%1000;
      for(;amount>0;amount/=1000){
      	printf( "%4u%21d\n", year, print );  
      	print=amount%1000;
	  }
       
   } // end for
   
   return 0;
} // end function main



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
