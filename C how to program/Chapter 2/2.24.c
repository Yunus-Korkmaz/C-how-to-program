/*
	Name: 		  2.24.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:16
	Description:  (Odd or Even) Write a program that reads an integer and determines and prints whether
				   it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. 
				   Any multiple of two leaves a remainder of zero when divided by 2.]		  
*/

#include<stdio.h>

int main(void){	

	puts("Enter an integer : ");
	int a;
	scanf("%d",&a);
	
	if(a%2==0)
		printf("%d%s",a," is even");
	
	if(a%2!=0)
		printf("%d%s",a," is odd");
		
		return 0;
}
