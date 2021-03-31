/*
	Name: 		  3.7.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 14:38
	Description:  Write a C program that uses the statements in Exercise 3.6 to calculate x raised to the y
				  power. The program should have a while repetition control statement
*/

#include<stdio.h>

int main(void){
	
	unsigned int x,y;
	int power=1;
	puts("Enter an number : ");
	scanf("%u",&x);
	puts("Enter esceptid power of number : ");
	scanf("%u",&y);
	
	int i=1;
	while(i<=y){
		power*=x;
		i++;
	}	
	
	printf("%u%s%u%s%d",x," power ",y," = ",power);
	
	return 0;
}
