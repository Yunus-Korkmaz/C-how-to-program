/*
	Name:	      5.43.c
	Author:       Yunus Korkmaz
	Date:		  12.07.20 22:07
	Description:  What does the following program do?
*/

#include<stdio.h>

unsigned int mystery(unsigned int a, unsigned int b);

int main(void){
	
	unsigned int x;
	unsigned int y;
	
	printf("%s","Enter two positive integers: ");
	scanf("%u%u",&x,&y);
	
	printf("%s%u","the result is ",mystery(x,y));
	
	return 0;
}
unsigned int mystery(unsigned int a, unsigned int b){
	
	if(1 == b){
		return a;
	}
	else {
		return a+ mystery(a,b-1);
	}
}
