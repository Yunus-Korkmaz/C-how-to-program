/*
	Name: 		  5.10.c
	Author:       Yunus Korkmaz
	Date: 		  26.06.20 12:06
	Description:  (Rounding Numbers) An application of function floor is rounding a value to the nearest
					integer. The statement
					y = floor( x + .5 );
					will round the number x to the nearest integer and assign the result to y. Write a program that reads
					several numbers and uses the preceding statement to round each of these numbers to the nearest
					integer. For each number processed, print both the original number and the rounded number.
*/

#include<stdio.h>
#include<math.h>

int main(void){
	
	unsigned int i;
	double number;
	for(i=1;i<=5;i++){
		
		puts("Please enter an decimal number :");
		scanf("%lf",&number);
		printf("%s%.2lf","Nearest integer is ",floor(number+0.5));
		puts("");
		
	}
	
	return 0;
}
