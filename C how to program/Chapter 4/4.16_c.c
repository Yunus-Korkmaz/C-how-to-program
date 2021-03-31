/*
	Name: 		  4.16_c.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 12:57
	Description:  (Triangle-Printing Program) Write a program that prints the following patterns separately,
					one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a
					single printf statement of the form printf( "%s", "*" ); (this causes the asterisks to print side by
					side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.]
					**********
					 *********
					  ********
					   *******
					    ******
					     *****
					      ****
					       ***
					        **
					         *
*/

#include<stdio.h>

int main(void){
	
	int i,k,j;	
	
	for(i=10;i>=1;i--){
		
		for(j=i;j<10;j++)
			printf("%s"," ");
			
		for(k=1;k<=i;k++)
			printf("%s","*");
			
		puts("");
	}
	
	return 0;
}
