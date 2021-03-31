/*
	Name: 		  3.45_c.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 17:47
	Description:  (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
					and is defined as follows:
					n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
					and
					n! = 1 (for n = 0).
					For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. 
					c) Write a program that computes the value of e x by using the 
					formula	:	e^x = 1 + x/1! +x^2/2! + x^3/3! + ...
*/

#include<stdio.h>

int main(void){
	
	unsigned int number,factorial,powerof_x;
	float epower_x=0;
	puts("Enter an pozitive number:(max 5) ");// max 5 because of 6^12 higher than unsgined int limit
	scanf("%u",&number);
	
	int i=0;
	int k;
	
	while(i<=12){//max 12 because of 13! factorial higher than unsgined int limit
		
		k=1;
		factorial=1;
		powerof_x=1;
		while(k<=i){
			factorial*=k;
			powerof_x*=number;
			k++;
		}
		
		printf("%d %d\n",factorial,powerof_x);
		epower_x+=(float)powerof_x/factorial;
		i++;
	}
	
	printf("%s%u%s%f","e power ",number," = ",epower_x);
	
	return 0;
	
}
