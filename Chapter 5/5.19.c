/*
	Name:		  5.19.c
	Author:       Yunus Korkmaz
	Date:		  02.07.20 11:32
	Description:  (Square of Asterisks) Write a function that displays a solid square of asterisks whose side is
					specified in integer parameter side. For example, if side is 4, the function displays:	
					****
					****
					****
					****
*/

#include<stdio.h>

int main(void){
	
	unsigned int side;
	puts("Please enter side value :");
	scanf("%u",&side);
	
	int i,k;
	for(i=0;i<side;i++){
	
		for(k=0;k<side;k++)
		printf("%s","*");
			
		puts("");
		
	}
	
	puts("\n");
	
	for(i=1;i<=side*side;i++){		// this loop do same job with previus for loop 
									// but it is only use one variable 
			printf("%s","*");
			
		if(i%side==0)
			puts("");	
			
		}
	
	return 0;
}


