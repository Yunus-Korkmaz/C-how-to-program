/*
	Name: 		  4.39.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 21:29
	Description:  (World Population Growth) World population has grown considerably over the centuries.
					Continued growth could eventually challenge the limits of breathable air, drinkable water, arable
					cropland and other limited resources. There’s evidence that growth has been slowing in recent years
					and that world population could peak some time this century, then start to decline.
					For this exercise, research world population growth issues online. Be sure to investigate various
					viewpoints. Get estimates for the current world population and its growth rate (the percentage by
					which it’s likely to increase this year). Write a program that calculates world population growth
					each year for the next 75 years, using the simplifying assumption that the current growth rate will stay
					constant. Print the results in a table. The first column should display the year from year 1 to year
					75. The second column should display the anticipated world population at the end of that year.
					The third column should display the numerical increase in the world population that would occur
					that year. Using your results, determine the year in which the population would be double what it
					is today, if this year’s growth rate were to persist. 
*/

#include<stdio.h>

int main(void){
	
	double growth_rate=0.3058 ;// from https://data.worldbank.org/indicator/NY.GDP.MKTP.KD.ZG (2018 )
	double current_population=759288680 ;//https://data.worldbank.org/indicator/sp.pop.totl (2018 )
	

	int i;
	printf("%-10s%-25s%s","Year","Estimated population","Population growth\n");
	for(i=1;i<=75;i++){
		printf("%-10d",i+2018);
		printf("%-25.0lf",current_population*(growth_rate+1));
		printf("%-.0lf",current_population*(growth_rate+1)-current_population);
		current_population*=(growth_rate+1);
		puts("");
	}
	
	return 0;
}
