/*
	Name: 		  3.5.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 14:30
	Description:  Combine the statements that you wrote in Exercise 3.4 into a program that calculates the
 				  sum of the integers from 1 to 10. Use the while statement to loop through the calculation and increment statements. 
				  The loop should terminate when the value of x becomes 11.
*/

#include<stdio.h>

int main(void){
	
	int sum=0;
	int i=1;
	
	while(i<11){
		sum+=i;
		i++;
	}
		
	printf("%s%d","sum of 1-10 = ",sum);
	
	return 0;
}
