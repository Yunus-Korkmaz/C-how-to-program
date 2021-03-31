/*
	Name:		  5.23.c
	Author:       Yunus Korkmaz
	Date:		  04.07.20 19:40
	Description:  (Time in Seconds) Write a function that takes the time as three integer arguments (for
					hours, minutes, and seconds) and returns the number of seconds since the last time the clock “struck
					12.” Use this function to calculate the amount of time in seconds between two times, both of which
					are within one 12-hour cycle of the clock.
*/

#include<stdio.h>

int calculate_the_seconds(int hour,int minute,int second);

int main(void){
	
	int hour,minute,second;
	puts("Please enter time (hh mm ss) :");
	scanf("%d%d%d",&hour,&minute,&second);
	
	printf("%d%s",calculate_the_seconds(hour,minute,second)," seconds");
	
		

	return 0;
}
int calculate_the_seconds(int hour,int minute,int second){
	
	int target_hour,target_minute,target_second;
	target_hour = 24;								// you can change target time or 
	target_minute = 0;								// take parameter of a function from user
	target_second = 0;
	
	int result=0;
	
	if(target_second-second<0){
		
		result+=target_second+60-second;
		target_minute--;
	}
	else
		result=target_second-second;
		
	if(target_minute-minute<0){
		
		result+=60*(target_minute+60-minute);
		target_hour--;
	}
	else
		result+=60*(target_minute-minute);
		
	if(target_hour-hour<0){
		
		puts("time higher than target time ");
		return -1;
	}
	else 
		result+=3600*(target_hour-hour);
		
	return result;
}
