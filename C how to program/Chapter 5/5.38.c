/*
	Name:		  5.38.c
	Author:       Yunus Korkmaz
	Date:		  12.07.20 21:12
	Description:  (Visualizing Recursion) It’s interesting to watch recursion “in action.” Modify the factorial
					function of Fig. 5.18 to print its local variable and recursive call parameter. For each recursive call,
					display the outputs on a separate line and add a level of indentation. Do your utmost to make the
					outputs clear, interesting and meaningful. Your goal here is to design and implement an output format 
					that helps a person understand recursion better. You may want to add such display capabilities
					to the many other recursion examples and exercises throughout the text.
*/

#include <stdio.h>

unsigned long long int factorial( unsigned int number );


int main( void )
{
   unsigned int i; 

   for ( i = 0; i <= 21; ++i ) {
   	printf("================== %d! ====================\n",i);
      printf( "\n%u! = %llu\n", i, factorial( i ) );
      printf("%s","\n===========================================\n\n\n");
   } 
} 

  
unsigned long long int factorial( unsigned int number )
{          
	unsigned long long int result;                                            
       	printf("\nfactorial(%d) = ",number);
		                                  
   if ( number <= 1 ) {                                
      printf("%s"," 1\n");
      result=1;
      printf("%s","\n***** Now turn back *****\n");
      printf("\nfactorial(%d) = %u",number,result); 
	  return result ;                                        
   }                                       
   else {    
   printf(" %d * factorial(%d) ",number,number-1) ;        
   
   		result=  ( number * factorial( number - 1 ) );     
	printf("\nfactorial(%d) = %u",number,result);      
   		return  result;    
   }                                       
} 



