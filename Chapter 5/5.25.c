/*
	Name:		  5.25.c
	Author:       Yunus Korkmaz
	Date:		  04.07.20 20:26
	Description:  (Find the Minimum) Write a function that returns the smallest of three floating-point
					numbers.
*/

#include<stdio.h>

float smallest(float num1,float num2,float num3);

int main(void){
	
	float number1,number2,number3;
	
	int i;
	
	for(i=0;i<3;i++){
		
	puts("Please enter three float number : ");
	scanf("%f%f%f",&number1,&number2,&number3);
	
	printf("%s%f","Smallest number is ",smallest(number1,number2,number3));
	
	puts("");
	}

	return 0;
}
float smallest(float num1,float num2,float num3){
	
	float smallest_number=num1;
	
	if(num2<smallest_number)
		smallest_number=num2;
		
	if(num3<smallest_number)
		smallest_number=num3;
		
	return smallest_number; 
}
