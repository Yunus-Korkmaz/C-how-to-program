/*
	Name: 		  2.5.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:23
	Description:  Using the statements you wrote in Exercise 2.4, write a complete program that calculates
				  the product of three integers.. 
*/
#include<stdio.h>

int main(){//this program calculate multiple of 3 number

	int x,y,z;
	int result;
	
	printf("Enter three integer \n");
	scanf("%d%d%d",&x,&y,&z);
	
	result = x*y*z;
	
	printf("result = %d",result);
	
	return 0;
}
