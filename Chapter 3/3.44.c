/*
	Name: 		  3.44.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 17:13
	Description:  (Sides of a Right Triangle) Write a program that reads three nonzero integers and determines and 
				  prints whether they could be the sides of a right triangle.
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
	
	//a^2+b^2=c^2;
	
	if(edge1*edge1+edge2*edge2==edge3*edge3)
		printf("%s","It can be a right triangle");
		else if(edge2*edge2+edge3*edge3==edge1*edge1)
			printf("%s","It can be a right triangle");
			 else if(edge3*edge3+edge1*edge1==edge2*edge2)
				printf("%s","It can be a right triangle");
			
				
			else 
				printf("%s","It can not be a right triangle");
		
	return 0;	
}
