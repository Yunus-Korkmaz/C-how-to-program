/*
	Name: 		  4.17.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 13:13
	Description:  (Calculating Credit Limits) Collecting money becomes increasingly difficult during periods of recession, so companies 
					may tighten their credit limits to prevent their accounts receivable
					(money owed to them) from becoming too large. In response to a prolonged recession, one company
					has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
					it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that
					analyzes the credit status of three customers of this company. For each customer you’re given:
							a) The customer’s account number
							b) The customer’s credit limit before the recession
							c) The customer’s current balance (i.e., the amount the customer owes the company).
					Your program should calculate and print the new credit limit for each customer and should
					determine (and print) which customers have current balances that exceed their new credit limits.
*/

#include<stdio.h>

int main(void){
	
	
	int account_number, credit_limit, balance;
	
	int i;
	for(i=1;i<=3;i++){
		
	puts("Please enter account number");
	 
	scanf("%d",&account_number);
	puts("Please enter credit limit before the recession :");
	
	scanf("%d",&credit_limit);
	puts("Please enter current balance: ");
	
	scanf("%d",&balance);
	
	printf("%s%d","Account -> ",account_number);
	puts("");
	printf("%s%d","New credit limit ",credit_limit/2);
	
	if(credit_limit/2>balance){
		puts("");
		printf("%s","Credit limit higher than balance");
	}
	puts("\n");
	
		}
		
	return 0;
}
