/*
	Name: 		  3.45_b.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 17:36
	Description:  (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
					and is defined as follows:
					n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
					and
					n! = 1 (for n = 0).
					For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. 
					b) Write a program that estimates the value of the mathematical constant e by using the
					formula	:	e = 1 + 1/1! +1/2! + 1/3! + ...
*/

#include<stdio.h>

int main(void){
	
	unsigned int factorial;
	float number_e;
	
	int i=0;
	number_e=0;
	int k;
	
	while(i<=12){//max 12 because of 13! factorial higher than unsgined int limit
		
		k=1;
		factorial=1;
		while(k<=i){
			
			factorial*=k;
			k++;
		}
		number_e+=(1/(float)factorial);
		i++;
	}
	
	printf("%s%f","e = ",number_e);
	
	return 0;
}
