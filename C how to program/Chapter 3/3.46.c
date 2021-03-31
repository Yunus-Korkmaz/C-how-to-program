/*
	Name: 		  3.46.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 19:27
	Description:  (World-Population-Growth Calculator) Use the web to determine the current world population and the annual world population growth rate. 
				  Write an application that inputs these values,
				  then displays the estimated world population after one, two, three, four and five years. 
*/

#include<stdio.h>

int main(void){
	
	float growth_rate;
	unsigned long long int population;
	
	puts("Enter current world population (2020):");
	scanf("%llu",&population);
	puts("Enter current growth_rate %:");
	scanf("%f",&growth_rate);
	
	
	int i=1;
	while(i<=5){
		
		population*=growth_rate;
		printf("%d%s%llu\n",2020+i," estimated population is ",population);
		i++;
		
	}
	
	return 0;
}
