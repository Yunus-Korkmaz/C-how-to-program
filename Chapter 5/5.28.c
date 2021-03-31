/*
	Name:		  5.25.c
	Author:       Yunus Korkmaz
	Date:		  04.07.20 21:14
	Description:  (Reversing Digits) Write a function that takes an integer value and returns the number with
					its digits reversed. For example, given the number 7631, the function should return 1367.
*/

#include<stdio.h>

int reverse_number(int num);

int main(void){
	
	int number;
	
	puts("Please enter a number : ");
	scanf("%d",&number);
	
	printf("%s%d","revers of this number is ",reverse_number(number));
	
	return 0;	
}
int reverse_number(int num){
	
	int result=0;
	while(num>0){
		
		result=result*10+num%10;
		num/=10;
	}
	
	return result;
}
