/*
	Name: 		  4.28.c
	Author:       Yunus Korkmaz
	Date: 		  16.06.20 23:39
	Description:  (Calculating Weekly Pay) A company pays its employees as managers (who receive a fixed
					weekly salary), hourly workers (who receive a fixed hourly wage for up to the first 40 hours they
					work and “time-and-a-half”—i.e., 1.5 times their hourly wage—for overtime hours worked), commission workers 
					(who receive $250 plus 5.7% of their gross weekly sales), or pieceworkers (who receive a fixed amount of money 
					for each of the items they produce—each pieceworker in this
					company works on only one type of item). Write a program to compute the weekly pay for each
					employee. You do not know the number of employees in advance. Each type of employee has its
					own pay code: Managers have paycode 1, hourly workers have code 2, commission workers have
					code 3 and pieceworkers have code 4. Use a switch to compute each employee’s pay based on that
					employee’s paycode. Within the switch, prompt the user (i.e., the payroll clerk) to enter the 
					appropriate facts your program needs to calculate each employee’s pay based on that employee’s paycode.
					[Note: You can input values of type double using the conversion specifier %lf with scanf.]
*/

#include<stdio.h>

int main(void){
	
	int i;
	double hourly_price,hours;
	double weekly_sales;
	double money,quantity;
	do{
	printf("%s","\n\nEnter 1 for hourly workers: \n");
	printf("%s","Enter 2 for commission workers:\n");
	printf("%s","Enter 3 for pieceworkers:\n");
	printf("%s","Enter -1 for exit\n");
	scanf("%d",&i);
	switch(i){
		
		case 1:
			puts("Please enter hourly price:");
				scanf("%lf",&hourly_price);
			puts("Please enter how many hours you work:");
				scanf("%lf",&hours);
			printf("%s %.2lf","Salary is ",hours>40?40*hourly_price+(hours-40)*hourly_price*1.5:hours*hourly_price);
			break;
		case 2:
			puts("Please enter weekly sales :");
				scanf("%lf",&weekly_sales);
			printf("%s%.2lf","Salary is ",250+weekly_sales*0.057);
			break;
		case 3:
			puts("Please enter  amount of money which you produced :");
			scanf("%lf",&money);
			puts("Please enter quantity of item which you produced :");
			scanf("%lf",&quantity);
			printf("%s%.2lf","Salary is ",money*quantity);
			break;		
		case -1:
			break;
		default:
			puts("Please enter [1-3]");
	}
	}while(i!=-1);
	
	return 0;
}	
