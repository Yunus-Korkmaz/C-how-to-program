/*
	Name: 		  4.30_b.c
	Author:       Yunus Korkmaz
	Date: 		  14.06.20 00:43
	Description:  (Replacing switch with if…else) Rewrite the program of Fig. 4.7 by replacing the switch
					statement with a nested if…else statement; be careful to deal with the default case properly. Then
					rewrite this new version by replacing the nested if…else statement with a series of if statements;
					here, too, be careful to deal with the default case properly (this is more difficult than in the nested
					if…else version). This exercise demonstrates that switch is a convenience and that any switch
					statement can be written with only single-selection statements.
*/

#include <stdio.h>

int main( void )
{
   int grade; 
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0; 
   unsigned int fCount = 0; 

   puts( "Enter the letter grades."  );
   puts( "Enter the EOF character to end input."  );
   
   while ( ( grade = getchar() ) != EOF ) {
      
        if(grade=='A'||grade=='a'){
            ++aCount; 
            continue;
        }
		
        if(grade=='B'||grade=='b'){
            ++bCount; 
		    continue;
        }
        if(grade=='C'||grade=='c'){
            ++cCount;
		    continue;
        }
        if(grade=='D'||grade=='d'){
            ++dCount;
		    continue;
        }
        if(grade=='F'||grade=='f'){
            ++fCount; 
            continue;
        }
        
	    if(grade=='\n'||grade=='\t'||grade==' ')	
		 	continue;
		 	
            printf( "%s", "Incorrect letter grade entered." ); 
            puts( " Enter a new grade." );  		 	
        

   } 
   
   puts( "\nTotals for each letter grade are:" );
   printf( "A: %u\n", aCount ); // display number of A grades
   printf( "B: %u\n", bCount ); // display number of B grades
   printf( "C: %u\n", cCount ); // display number of C grades
   printf( "D: %u\n", dCount ); // display number of D grades
   printf( "F: %u\n", fCount ); // display number of F grades
   
   return 0;
} 
