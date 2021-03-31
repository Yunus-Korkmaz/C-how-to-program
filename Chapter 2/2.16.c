/*
	Name: 		  2.16.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:44
	Description:  (Arithmetic) Write a program that asks the user to enter two numbers, obtains them from
				  the user and prints their sum, product, difference, quotient and remainder
*/
#include<stdio.h>

int main(void){
	
	printf("Enter two enteger : ");
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("a*b = %d\na/b = %d\na-b = %d\na+b = %d",a*b,a/b,a-b,a+b);
	
	return 0;
}
