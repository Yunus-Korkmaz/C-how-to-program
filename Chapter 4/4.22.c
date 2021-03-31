/*
	Name: 		  4.22.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 15:26
	Description:  (Average Grade) Modify the program of Fig. 4.7 so that it calculates the average grade for
					the class.
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
      
      
      switch ( grade ) { 

         case 'A':
         case 'a': 
            ++aCount; 
            break; 

         case 'B': 
         case 'b': 
            ++bCount; 
            break; 

         case 'C': 
         case 'c': 
            ++cCount; 
            break; 

         case 'D': 
         case 'd': 
            ++dCount; 
            break; 

         case 'F': 
         case 'f': 
            ++fCount; 
            break; 

         case '\n': 
         case '\t': 
         case ' ': 
            break; 

         default: 
            printf( "%s", "Incorrect letter grade entered." ); 
            puts( " Enter a new grade." ); 
            break; 
      } 
   } 
   
   puts( "\nTotals for each letter grade are:" );
   printf( "A: %u\n", aCount );
   printf( "B: %u\n", bCount );
   printf( "C: %u\n", cCount );
   printf( "D: %u\n", dCount );
   printf( "F: %u\n", fCount );
	
	int upper_boundof_grades=(aCount*100+bCount*89+cCount*79+dCount*69+fCount*60)/(aCount+bCount+cCount+dCount+fCount);
	int lower_boundof_grades=(aCount*90+bCount*80+cCount*70+dCount*60+fCount*0)/(aCount+bCount+cCount+dCount+fCount);

	printf("%s%d%s%d","Average grades range is ",lower_boundof_grades,"<average grades<",upper_boundof_grades);
	
	return 0;
}
