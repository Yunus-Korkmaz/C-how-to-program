/*
	Name: 		  4.13.c
	Author:       Yunus Korkmaz
	Date: 		  11.06.20 21:41
	Description:  (Calculating the Product of Odd Integers) Write a program that calculates and prints the
					product of the odd integers from 1 to 15.
*/

#include<stdio.h>

int main(void){
	
	int i,product=1;
	for(i=1;i<=15;i+=2)
		product*=i;
		
	printf("%s%d","Product of odd numbers 1-15 is ",product);
	
	return 0;
}
