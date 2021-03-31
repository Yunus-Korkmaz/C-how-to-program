/*
	Name: 		  3.43.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 17:00
	Description:  (Sides of a Triangle) Write a program that reads three nonzero integer values and determines 
				  and prints whether they could represent the sides of a triangle.
*/

#include<stdio.h>

int main(void){
	
	unsigned int edge1,edge2,edge3;
	
	puts("Enter first edge :");
	scanf("%u",&edge1);
	puts("Enter second edge :");
	scanf("%u",&edge2);
	puts("Enter third edge :");
	scanf("%u",&edge3);
	
	if(edge1+edge2>edge3) //a
		if(edge2+edge3>edge1) //b
			if(edge3+edge1>edge2) //c 
				printf("%s","It can be a triangular");
				
			else //c
			printf("%s","It can not be a triangular");
		else //b
			printf("%s","It can be not a triangular");
	else //a
		printf("%s","It can be a not triangular");
		
	return 0;	
}
