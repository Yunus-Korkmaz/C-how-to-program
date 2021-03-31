/*
	Name: 		  3.37.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 15:31
	Description:  (Detecting Multiples of 10) Write a program that prints 100 asterisks, one at a time. After
				  every tenth asterisk, your program should print a newline character. [Hint: Count from 1 to 100.
				  Use the remainder operator to recognize each time the counter reaches a multiple of 10.]
*/

#include<stdio.h>

int main(void){
	
	int i=1;
	while(i<=100){
		
		printf("*");
		if(i%10==0)
			puts("");
			
		i++;
	}
	
	return 0;
}
