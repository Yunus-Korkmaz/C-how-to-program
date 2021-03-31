/*
	Name: 		  2.23.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:13
	Description:  (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius
				  of a circle and prints the circle’s diameter, circumference and area. Use the constant value 3.14159
				  for ?. Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f. 
				  [Note: In this chapter, we’ve discussed only integer constants and variables. In Chapter 3
				  we’ll discuss floating-point numbers, i.e., values that can have decimal points.]			  
*/

#include<stdio.h>

int main(void){
	
	printf("Enter three different integer: ");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	int largest=a;
	
	if(b>largest)
		largest=b;
	if(c>largest)
		largest=c;
	printf("%s%d\n","largest is = ",largest);
	
	int smallest=a;
	
	if(b<smallest)
		smallest=b;
	if(c<smallest)
		smallest=c;
		
	printf("%s%d","smallest is ",smallest);
	
	return 0;
}
