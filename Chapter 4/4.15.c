/*
	Name: 		  4.15.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 12:42
	Description:  (Modified Compound-Interest Program) Modify the compound-interest program of
					Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop
					to vary the interest rate.
*/

#include<stdio.h>

int main(void){
	
	puts("Please enter amount of pirincipal money :");
	float money;
	scanf("%f",&money);
	puts("Please enter how many year money stay in bank");
	int year;
	scanf("%d",&year);
	puts("Please enter interest rate (100/?):");
	float rate;
	scanf("%f",&rate);

	
	int i;
	for(i=1;i<=year;i++){
		
		money+=money*rate/100;
		
	}
	
	printf("%s%.2f","Last money is ",money);
	
	return 0;
}
