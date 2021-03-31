/*
	Name: 		  3.19.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 16:22
	Description:  (Interest Calculator) The simple interest on a loan is calculated by the formula
				  interest = principal * rate * days / 365;
				  The preceding formula assumes that rate is the annual interest rate, and therefore includes the
				  division by 365 (days). Develop a program that will input principal, rate and days for several
				  loans, and will calculate and display the simple interest for each loan, using the preceding formula.
*/

#include<stdio.h>

int main(void){
	
	float loan_principal,interest_rate,loan_days;
	
	puts("Enter loan principal (-1 to end): ");
	scanf("%f",&loan_principal);
	
	while(loan_principal!=-1){
		puts("Enter interest rate: ");
		scanf("%f",&interest_rate);
		puts("Enter term of the loan in days:");
		scanf("%f",&loan_days);
		
		printf("%s%.2f","The interest charge is ",loan_principal*interest_rate*loan_days/365);
		
		puts("\n\nEnter loan principal (-1 to end): ");
		scanf("%f",&loan_principal);
	}
	
	return 0;
}
