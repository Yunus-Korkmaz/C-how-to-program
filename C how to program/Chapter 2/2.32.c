/*
	Name: 		  2.32.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 21:10
	Description:  (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in
			  	  Exercise 1.14. The formulas for calculating BMI are	
					BMI = weightInPounds × 703 / heightInInches × heightInInches 	  
					or
					BMI = weightInKilograms / heightInMeters × heightInMeters
					
					Create a BMI calculator application that reads the user’s weight in pounds and height in inches
					(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
					the user’s body mass index. Also, the application should display the following information from
					the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
					
					BMI VALUES
					Underweight: less than 18.5
					Normal: between 18.5 and 24.9
					Overweight: between 25 and 29.9
					Obese: 30 or greater
*/

#include<stdio.h>

int main(void){
	
	puts("Enter your weight by kg : ");
	double weight;
	scanf("%lf",&weight);
	puts("Enter your higth by cm : ");
	double higth;
	scanf("%lf",&higth);
	
	double BMI=weight/(higth*higth);
	printf("%s%lf\n","your BMI = ",BMI);
	
	return 0;
}
