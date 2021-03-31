/*
	Name: 		  3.34.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 14:36
	Description:  (Palindrome Tester) A palindrome is a number or a text phrase that reads the same backward as forward. 
				  For example, each of the following five-digit integers is a palindrome: 12321,
				  55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
				  or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number
				  into its individual digits.]
*/

#include<stdio.h>

int main(void){
	
	int number;
	puts("Enter an five digit number :");//only work for 5 digit number otherway progrsm give eror
	scanf("%d",&number);
	
	unsigned int first_digit,second_digit,fourth_digit,fifth_digit;
	
	// for example 52481 first digit =5,last digit =1
	first_digit=number/10000;
	second_digit=number/1000%10;
	
	fourth_digit=number%100/10;
	fifth_digit=number%10;
	
	if(first_digit==fifth_digit){
		if(second_digit==fourth_digit)
			printf("%d%s",number," is polidromic number");
			}
		else 
			printf("%d%s",number," is not polidromic number");
	
	// we make more useful program in next topics 
	
	return 0;
}
