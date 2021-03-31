/*
	Name: 		  3.27.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 23.16
	Description:  (Validating User Input) Modify the program in Figure 3.10 to validate its inputs. On any
				  input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.
*/

#include <stdio.h>

int main( void )
{

   unsigned int passes = 0; 
   unsigned int failures = 0; 
   unsigned int student = 1;    
   int result; 

   while ( student <= 10 ) {

      printf( "%s", "Enter result ( 1=pass,2=fail ): " );
      scanf( "%d", &result );
	if(result==1){
      if ( result == 1 ) {     
         passes = passes + 1;
      } 
      else { 
         failures = failures + 1;
      } 

      student = student + 1; 
		
	}
	else if(result==2){ 
      if ( result == 1 ) {     
         passes = passes + 1;
      } 
      else {
         failures = failures + 1;
      }

      student = student + 1; 
	}
	else 
		puts("Enter just 1 or 2");
     
   } 
 
   printf( "Passed %u\n", passes );
   printf( "Failed %u\n", failures );


   if ( passes > 8 ) {
      puts( "Bonus to instructor!" );
   } 
   
   return 0;
} 

