/*
	Name: 		  3.45_a.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 17:29
	Description:  (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
					and is defined as follows:
					n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
					and
					n! = 1 (for n = 0).
					For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. 
					a) Write a program that reads a nonnegative integer and computes and prints its factorial.
*/

#include<stdio.h>

int main(void){
	
	unsigned int number,factorial;
	puts("Enter an pozitive number:(max 12) ");//max 12 because of 13! factorial higher than unsgined int limit
	scanf("%u",&number);
	
	int i=1;
	factorial=1;
	while(i<=number){
		factorial*=i;
		i++;
	}
	
	printf("%s%u%s%u","Factorial ",number," = ",factorial);
	
	return 0;
}
