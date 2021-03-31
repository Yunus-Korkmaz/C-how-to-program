/*
	Name: 		  3.47.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 23:58
	Description:  (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see
					that your heart rate stays within a safe range suggested by your trainers and doctors. According to
					the American Heart Association (AHA), the formula for calculating your maximum heart rate in
					beats per minute is 220 minus your age in years. Your target heart rate is a range that’s 50–85% of
					your maximum heart rate. [Note: These formulas are estimates provided by the AHA. Maximum
					and target heart rates may vary based on the health, fitness and gender of the individual. Always consult a physician or qualified health care professional before beginning or modifying an exercise program.]
					Create a program that reads the user’s birthday and the current day (each consisting of the month,
					day and year). Your program should calculate and display the person’s age (in years), the person’s
					maximum heart rate and the person’s target-heart-rate range.
*/

#include<stdio.h>

int main(void){
	
	int b_day,b_month,b_year;
	printf("%s","Please enter your bird date with one space (dd mm yyyy):");
	scanf("%d%d%d",&b_day,&b_month,&b_year);

	int c_day,c_month,c_year;
	printf("%s","Please enter current day date with one space (dd mm yyyy):");
	scanf("%d%d%d",&c_day,&c_month,&c_year);
	
	int age_day,age_month,age_year;	
	if(c_day-b_day<0){
		age_day=c_day+30-b_day;
		c_month--;		
	}
	else
		age_day=c_day-b_day;
		
		if (c_month- b_month< 0){
		age_month=c_month+12-b_month;
		c_year--;
	}	
	else
		age_month=c_month-b_month;
	
	age_year=c_year-b_year;
			
	puts("");
	printf("%s%d%s%d%s%d%s","Your age ",age_year," years ",age_month," mount ",age_day," days");
	puts("");
	printf("%s%d","Your maximum heart rate ",220-age_year);
	puts("");
	printf("%s%.2f%s%.2f","Your target-heart-rate range is ",(220-(float)age_year)*0.5," to ",(220-(float)age_year)*0.85);
	
	return 0;
}
