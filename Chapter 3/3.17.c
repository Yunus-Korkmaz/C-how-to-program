/*
	Name: 		  3.17.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 15:44
	Description:  (Credit Limit Calculator) Develop a C program that will determine if a department store
				  customer has exceeded the credit limit on a charge account. For each customer, the following facts
				  are available:
				  a) Account number
				  b) Balance at the beginning of the month
				  c) Total of all items charged by this customer this month
				  d) Total of all credits applied to this customer's account this month
				  e) Allowed credit limit
				  The program should input each fact, calculate the new balance (= beginning balance +
				  charges – credits), and determine whether the new balance exceeds the customer's credit limit. For
				  those customers whose credit limit is exceeded, the program should display the customer's account
				  number, credit limit, new balance and the message “Credit limit exceeded.”
*/

#include<stdio.h>

int main(void){
	
	unsigned int account_number;
	float begining_balance,consumption,deposit,credit;
	float new_balance;
	puts("Enter account number (enter -1 for end): ");
	scanf("%u",&account_number);
	
	while(account_number!=-1){
		
		puts("Enter begining balance : ");
		scanf("%f",&begining_balance);		
		puts("Enter total consumption : ");
		scanf("%f",&consumption);
		puts("Enter total deposit : ");
		scanf("%f",&deposit);
		puts("Enter credit limit : ");
		scanf("%f",&credit);
		
		new_balance=begining_balance+consumption-deposit;
		
		if(new_balance>credit){
			printf("%s%u\n","Account : ",account_number);
			printf("%s%.2f\n","Credit limit = ",credit);
			printf("%s%.2f\n","Balance = ",new_balance);
			puts("Credit limit exceeded !");
		}
	
	puts("Enter account number (enter -1 for end): ");
	scanf("%u",&account_number);	
	
	}
	
	return 0;
}
