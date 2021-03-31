/*
	Name: 		  2.33.c
	Author:       Yunus Korkmaz
	Date: 		  5.06.20 17:20
	Description:  (Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
				  that calculates your daily driving cost, so that you can estimate how much money could be saved by
				  car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
				  congestion. The application should input the following information and display the user’s cost per
				  day of driving to work:
				  a) Total miles driven per day.
				  b) Cost per gallon of gasoline.
				  c) Average miles per gallon.
				  d) Parking fees per day.
				  e) Tolls per day.		  
*/

#include<stdio.h>

int main(void){
	
	float road,gasoline,fuel,park,passing,total;
	
	puts("Daily driving road (km)? : ");
	scanf("%f",&road);
	
	puts("Price of one lt of gasoline ? : ");
	scanf("%f",&gasoline);
	
	puts("Avrage consiming fuel (in one km) ? :");
	scanf("%f",&fuel);
	
	puts("Daily parking fee ? : ");
	scanf("%f",&park);
	
	puts("Daily road passing preice ? : ");
	scanf("%f",&passing);
	
    total=road*fuel*gasoline+park+passing;
	
	printf("%s%.2f%s","Your daily cost of driving to work is ",total," dollar");
	
	return 0;
}
