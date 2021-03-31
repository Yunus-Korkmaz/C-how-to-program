/*
	Name: 		  4.14.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 12:23
	Description:  (Factorials) The factorial function is used frequently in probability problems. The factorial of
					a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive
					integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5. Print the
					results in tabular format. What difficulty might prevent you from calculating the factorial of 20?
*/

#include<stdio.h>

int main(void){
	
	int i,k;
	int factorial;
	
	for(i=1;i<=5;i++){
		
		printf("%d%s",i,"     ");
			k=i;
			factorial=1;
			for(k;k>0;k--)
			factorial*=k;
			
		printf("%d",factorial);
		puts("");
		
	}
	// we cant calculate 20! because of int limits
	return 0;
}
