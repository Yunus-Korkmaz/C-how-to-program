/*
	Name:		  5.45.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 11:08
	Description:  (Testing Math Library Functions) Write a program that tests the math library functions in
					Fig. 5.2. Exercise each of these functions by having your program print out tables of return values
					for a diversity of argument values. 
*/

#include<stdio.h>
#include<math.h>

int main(void){
	
	double number1=4.7,number2=9.002;
	int i;
	
	for(i=1;i<=13;i++){
	switch(i){
		
		case 1:
			printf("%s%lf%s%lf","The square of ",number2," = ",sqrt(number2));
			puts("");
			break;
			
		case 2:
			printf("%s%lf%s%lf","The cub square of ",number2," = ",cbrt(number2));
			puts("");
			break;
		
		case 3:
			printf("%s%lf%s%lf","e power ",number2," = ",exp(number2));
			puts("");
			break;
			
		case 4:
			printf("%s%lf%s%lf","log ",number2," = ",log(number2));
			puts("");
			break;
			
		case 5:
			printf("%s%lf%s%lf","log10 ",number2," = ",log10(number2));
			puts("");
			break;
			
		case 6:
			printf("%s%lf%s%lf","Absolute value of ",number2," = ",fabs(number2));
			puts("");
			break;		
		
		case 7:
			printf("%s%lf%s%lf","ceil ",number2," = ",ceil(number2));
			puts("");
			break;	
			
		case 8:
			printf("%s%lf%s%lf","floor ",number2," = ",floor(number2));
			puts("");
			break;
			
		case 9:
			printf("%lf%s%lf%s%lf",number2," power ",number1," = ",pow(number2,number1));
			puts("");
			break;
		
		case 10:
			printf("%lf%s%lf%s%lf",number2," mod ",number1," = ",fmod(number2,number1));
			puts("");
			break;	
		
		case 11:
			printf("%s%lf%s%lf","sin ",number2," = ",ceil(number2));
			puts("");
			break;	
			
		case 12:
			printf("%s%lf%s%lf","cos ",number2," = ",ceil(number2));
			puts("");
			break;
		
		case 13:
			printf("%s%lf%s%lf","tan ",number2," = ",ceil(number2));
			puts("");
			break;
		}
	}
	
	return 0;
}
