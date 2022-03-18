/*
	Name:		  (Calculator Using Function Pointers)
	Author:       Yunus Korkmaz
	Date:
	Description:  Using the techniques you learned in Fig. 7.28, create
					a text-based, menu-driven program that allows the user to choose whether to add, subtract, multiply
					or divide two numbers. The program should then input two double values from the user, perform
					the appropriate calculation and display the result. Use an array of function pointers in which each
					pointer represents a function that returns void and receives two double parameters. 
					The corresponding functions should each display messages indicating which calculation was performed, the
					values of the parameters and the result of the calculation.
*/
#include<stdio.h>
#include<stdlib.h>

void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main(void){
	
	char *Menu={
				"***************************************\n"
				"***            Calculator           ***\n"
				"***************************************\n"
				"*** 1: Plus                         ***\n"
				"*** 2: Subtract                     ***\n"
				"*** 3: Multiply                     ***\n"
				"*** 4: Divide                       ***\n"
				"*** 0: EXIT                         ***\n"
				"***************************************\n"
				"Enter choice ? "	
	};
	
	double a,b;
	int c;
	void (*calculator[])(double,double)={add,subtract,multiply,divide};

	do {
		
		printf("%s",Menu);
		
		scanf("%d",&c);
		if(c>=1 && c<=4){
			
			printf("\nEnter First Number ? ");
			scanf("%lf",&a);
			
			printf("\nEnter Second Number ? ");
			scanf("%lf",&b);
			
			calculator[c-1](a,b);
			
		}
		
		puts("\n");	
		
	}while(c!=0);
}
void add(double a, double b){
	
	printf("%.2lf + %.2lf = %.2lf",a,b,a+b);
}
void subtract(double a, double b){
	
	printf("%.2lf - %.2lf = %.2lf",a,b,a-b);
}
void multiply(double a, double b){
	
	printf("%.2lf x %.2lf = %.2lf",a,b,a*b);
}
void divide(double a, double b){
	
	printf("%.2lf / %.2lf = %.2lf",a,b,a/b);
}

