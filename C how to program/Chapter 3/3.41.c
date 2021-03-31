/*
	Name: 		  3.41.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 16:46
	Description:  (Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a
				  circle (as a float value) and computes and prints the diameter, the circumference and the area. Use
				  the value 3.14159 for ?.
*/

#include<stdio.h>

int main(void){
	
	puts("Enter radius of circle");
	float r;
	scanf("%f",&r);
	
	float pi=3.14159;
	
	printf("%s%.2f","diameter = ",2*r);
	puts("");
	printf("%s%.2f","area of circle = ",pi*r*r);
	puts("");
	printf("%s%.2f","circumference of the circle = ",2*pi*r);
	
	return 0;
}
