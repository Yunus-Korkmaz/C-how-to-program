/*
	Name: 		  3.32.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 23:58
	Description:  (Square of Asterisks) Write a program that reads in the side of a square and then prints that
				  square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
				  example, if your program reads a size of 4, it should print
				  ****
				  ****
				  ****
				  ****
*/

#include<stdio.h>

int main(void){
	
	unsigned int side;
	
	puts("Enter one side of squares :");
	scanf("%u",&side);
	
	int i=1;
	int k;
	while(i<=side){
		k=1;
		while(k<=side){
			printf("%s","*");
			k++;
		}
		i++;
		puts("");
	}
	
	return 0;
}
