/*
	Name:	      5.29.c
	Author:       Yunus Korkmaz
	Date:         04.07.20 21:32
	Description:  (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest
					integer that evenly divides each of the two numbers. Write function gcd that returns the greatest
					common divisor of two integers.
*/

#include<stdio.h>

int gcd(int num1,int num2);

int main(void){
	
	int number1,number2;
	
	puts("Please enter 2 integer :");
	scanf("%d%d",&number1,&number2);
	
	printf("%s%d","Greatest Common Divisor is ",gcd(number1,number2));
	
	return 0;
}
int gcd(int num1,int num2){
	
	int result;
	int i;
	i=num1>num2?num2:num1;
	
	for(i;i>0;i--){
		
		if(num1%i==0 && num2%i==0)
			return i;
	}
	
	
}
