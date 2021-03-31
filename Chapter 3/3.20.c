/*
	Name: 		  3.20.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 20:52
	Description:  (Salary Calculator) Develop a program that will determine the gross pay for each of several
				  employees. The company pays “straight time” for the first 40 hours worked by each employee and
				  pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees of the company, the number of 
				  hours each employee worked last week and the hourly rate of
				  each employee. Your program should input this information for each employee and should determine and display the employee's gross pay.
*/

#include<stdio.h>

int main(void){
	
	float work_hours,price,salary;
	
	puts("Enter how many hours of worked (-1 to end): ");
	scanf("%f",&work_hours);
	
	while(work_hours!=-1){
		puts("Enter hourly rate of the worker: ");
		scanf("%f",&price);
		
		
		work_hours<=40?salary=work_hours*price:(salary=40*price+(work_hours-40)*price*1.5);//calculate salary of worker and assigning to salary
		printf("%s%.2f\n","Salary = ",salary);
		
		puts("Enter how many hours of worked (-1 to end): ");
		scanf("%f",&work_hours);
	}

	return 0;
}
