/*
	Name: 		  2.4.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:21
	Description:  Write a statement (or comment) to accomplish each of the following:
				  a) State that a program will calculate the product of three integers.
				  b) Define the variables x, y, z and result to be of type int.
				  c) Prompt the user to enter three integers.
				  d) Read three integers from the keyboard and store them in the variables x, y and z.
				  e) Compute the product of the three integers contained in variables x, y and z, and assign
				  the result to the variable result.
				  f) Print "The product is" followed by the value of the integer variable result. 
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
