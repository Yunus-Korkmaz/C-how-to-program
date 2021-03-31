/*
	Name: 		  5.16.c
	Author:       Yunus Korkmaz
	Date: 		  27.06.20 14:15
	Description:  (Exponentiation) Write a function integerPower(base, exponent) that returns the value of
							base^exponent
					For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero
					integer, and base is an integer. Function integerPower should use for to control the calculation.
					Do not use any math library functions.
*/

#include<stdio.h>

int integerPower(int base,int exponent);

int main(void){
	
	int number,power;
	
	puts("Please enter base number  ");
	scanf("%d",&number);
	puts("Please enter exponent number ");
	scanf("%d",&power);
	
	printf("%s%d","Result = ",integerPower(number,power));
	
	return 0;
}
int integerPower(int base,int exponent){
	
	int result=1;
	
	for(;exponent>0;exponent--)
		result*=base;
		
		return result;
}
