/*
	Name: 		  4.12.c
	Author:       Yunus Korkmaz
	Date: 		  11.06.20 21:34
	Description:  (Calculating the Sum of Even Integers) Write a program that calculates and prints the sum
					even integers from 2 to 30.
*/

#include<stdio.h>

int main(void){
	
	int i,sum=0;
	for(i=2;i<=30;i+=2)
	sum+=i;
	
	printf("%s%d","Sum of even numbers 2-30 is ",sum);
	
	return 0;
}
