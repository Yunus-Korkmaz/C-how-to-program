/*
	Name: 		  2.20.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 19:40
	Description:  (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different
				  integers from the keyboard, then prints the sum, the average, the product, the smallest and 
				  the largest of these numbers. Use only the single-selection form of the if statement you learned 
				  in this chapter. The screen dialogue should appear as follows:
*/

#include<stdio.h>

int main(void){
	
	puts("enter radius of circle : ");
	float r;
	scanf("%f",&r);
	float pi=3.14159;
	printf("%s%f\n","diameter = ",2*r);
	printf("%s%f\n","circumference = ",2*pi*r);
	printf("%s%f","area of circle = ",pi*r*r);
	
	return 0;
}
