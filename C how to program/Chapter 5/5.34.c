/*
	Name:		  5.34.c
	Author:       Yunus Korkmaz
	Date:		  05.07.20 13:13
	Description:  (Recursive Exponentiation) Write a recursive function power( base, exponent ) that when
					invoked returns
						base^exponent
					For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal
					to 1. Hint: The recursion step would use the relationship
					baseexponent = base * baseexponent–1
					and the terminating condition occurs when exponent is equal to 1 because
					base^1 = base
*/

#include<stdio.h>

double power(double base,int exponent);

int main(void){
	
	printf("%.2lf",power(4,3));
	puts("");
	printf("%.2lf",power(1,5));
	puts("");
	printf("%.2lf",power(0,10));
	puts("");
	printf("%.2lf",power(6,0));
	puts("");
	printf("%.2lf",power(8,4));
	puts("");
	printf("%.2lf",power(0,0));
	puts("");
	
}
double power(double base,int exponent){
	
	if(exponent==0) 	// if we use 1 to return base 
		return base;	// we can't calculate base^0 
	
	return base * power(base,--exponent); 
}
