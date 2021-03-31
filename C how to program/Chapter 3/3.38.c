/*
	Name: 		  3.38.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 15:36
	Description:  (Counting 7s) Write a program that reads an integer (5 digits or fewer) and determines and
				  prints how many digits in the integer are 7s.
*/

#include<stdio.h>

int main(void){
	
	int number;
	puts("Enter a number (5 digit or less):");
	scanf("%d",&number);
	
	unsigned int digit,counter=0;
	int i=1;
	while(i<=5){
		
		digit=number%10;
		number/=10;
		if(digit==7)
			counter++;
		
		i++;
	}
		printf("%u%s",counter," digit has 7 value ");
		
	return 0;
}
