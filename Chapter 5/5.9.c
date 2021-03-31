/*
	Name: 		  5.9.c
	Author:       Yunus Korkmaz
	Date: 		  25.06.20 23:23
	Description:  (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three
					hours and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum
					charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours
					at a time. Write a program that will calculate and print the parking charges for each of three customers 
					who parked their cars in this garage yesterday. You should enter the hours parked for each
					customer. Your program should print the results in a tabular format, and should calculate and print
					the total of yesterday's receipts. The program should use the function calculateCharges to determine the 
					charge for each customer. Your outputs should appear in the following format:
					CARS      HOURS     PRICE
					1         1.50      2.00
					2         4.00      2.50
					3         24.00     10.00
					TOTAL     29.50     14.50
*/

#include<stdio.h>
#include<math.h>

float calculateCharges(float hour);

int main(void){

	float h_car1,h_car2,h_car3,total_price=0;
	puts("Please enter enter the hours parked for car1 :");
	scanf("%f",&h_car1);
	puts("Please enter enter the hours parked for car2 :");
	scanf("%f",&h_car2);
	puts("Please enter enter the hours parked for car3 :");
	scanf("%f",&h_car3);
	
	printf("%-10s%-10s%-10s","CARS","HOURS","PRICE");
	puts("");
	
	float temp;
	
	temp=calculateCharges(h_car1);
	total_price+=temp;
	printf("%-10d%-10.2f%-10.2f",1,h_car1,temp);
	puts("");
	
	temp=calculateCharges(h_car2);
	total_price+=temp;
	printf("%-10d%-10.2f%-10.2f",2,h_car2,temp);
	puts("");
	
	temp=calculateCharges(h_car3);
	total_price+=temp;
	printf("%-10d%-10.2f%-10.2f",3,h_car3,temp);
	puts("");
	
	
	printf("%-10s%-10.2f%-10.2f","TOTAL",h_car1+h_car2+h_car3,total_price);
	
	return 0;
}
float calculateCharges(float hour){
	
	if(fmod(hour,1)!=0) 		// I understand that in question every part of over three hours is cost 0.50 dollar it means 4.3 hour = 4.5 hour = 5 hour 
		hour=ceil(hour);		// so I change hours with their ceils 4.3=5 ,4.5=5 	
								// if i misunderstood you can delete first if part 
	if(hour<=3)
		return 2;
	else
		return 2+(hour-3)*0.5>10?10:2+(hour-3)*0.5;
	
}

