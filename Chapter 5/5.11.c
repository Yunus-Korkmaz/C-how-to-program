/*
	Name: 		  5.11.c
	Author:       Yunus Korkmaz
	Date: 		  26.06.20 12:31
	Description:  (Rounding Numbers) Function floor may be used to round a number to a specific decimal
					place. The statement
							y = floor( x * 10 + .5 ) / 10;
					rounds x to the tenths position (the first position to the right of the decimal point). The statement
							y = floor( x * 100 + .5 ) / 100;
					rounds x to the hundredths position (the second position to the right of the decimal point). Write
							a program that defines four functions to round a number x in various ways
							a) roundToInteger( number )
							b) roundToTenths( number )
							c) roundToHundreths( number )
							d) roundToThousandths( number )
							
							For each value read, your program should print the original value, the number rounded to the
							nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest 
							hundredth, and the number rounded to the nearest thousandth. 
*/

#include<stdio.h>
#include<math.h>

double roundToInteger(double x);
double roundToTenths(double x);
double roundToHundreths(double x);
double roundToThousandths(double x);

int main(void){
	
	unsigned int i;
	double number;
	for(i=0;i<5;i++){
		
		puts("Please enter a decimal number");
		scanf("%lf",&number);
		printf("%-20s%-20s%-20s%-20s","Nearest Integer","Nearest Tenth","Nearest Hundredth","Nearest Thousandth");
		puts("");
		printf("%-20.4lf",roundToInteger(number));
		printf("%-20.4lf",roundToTenths(number));
		printf("%-20.4lf",roundToHundreths(number));
		printf("%-20.4lf",roundToThousandths(number));

		puts("\n");
	}
	
	return 0;
}
double roundToInteger(double x){
	
	return (floor(x+0.5));
	
}
double roundToTenths(double x){
	
	return (floor(x*10+0.5)/10);
	
}
double roundToHundreths(double x){
	
	return (floor(x*100+0.5)/100);
	
}
double roundToThousandths(double x){
	
	return (floor(x*1000+0.5)/1000);
}
