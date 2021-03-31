/*
	Name:		  5.24.c	
	Author:       Yunus Korkmaz
	Date:    	  04.07.20 20:10
	Description:  (Temperature Conversions) Implement the following integer functions:
					a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
					b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
					c) Use these functions to write a program that prints charts showing the Fahrenheit 
					equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents 
					ofall Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular format 
					that minimizes the number of lines of output while remaining readable.
*/

#include<stdio.h>

float celcius(float fah);
float fahrenheit(float cel);

int main(void){
	
	int i,j;
		for(i=0;i<4;i++){
		printf("%-10s%-15s","Celcius","Fahrenheit");
	}
	puts("");
	
	for(j=4,i=0;i<=100;i++){
		
		if(i == j){
			puts("");	
			j+=4;
		}
		printf("%-10d%-15.2f",i,fahrenheit(i));
		
	}
	
	puts("");
	
	for(i=0;i<4;i++){
		printf("%-15s%-10s","Fahrenheit","Celcius");
	}
	puts("");
	
	for(j=4,i=32;i<=212;i++){
		
		if((i-32) == j){
			puts("");	
			j+=4;
		}
		printf("%-15d%-10.2f",i,celcius(i));
		
	}
	
	return 0;
}
float celcius(float fah){
	
	return (fah - 32) / 1.8;
}
float fahrenheit(float cel){
	
	return cel * 1.8 + 32;
}
