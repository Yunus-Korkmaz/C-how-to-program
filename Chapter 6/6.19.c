/*
	Name:		  6.19.c
	Author:       Yunus Korkmaz
	Date:		  20.07.20 22:30
	Description:  (Dice Rolling) Write a program that simulates the rolling of two dice. The program should
					use rand twice to roll the first die and second die, respectively. The sum of the two values should
					then be calculated. [Note: Because each die can show an integer value from 1 to 6, then the sum of
					the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least
					frequent sums.] Figure 6.24 shows the 36 possible combinations of the two dice. Your program
					should roll the two dice 36,000 times. Use a single-subscripted array to tally the numbers of times
					each possible sum appears. Print the results in a tabular format. Also, determine if the totals are 
					reasonable; i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7.
					
					    1  2  3  4  5  6		    
					1   2  3  4  5  6  7
					2   3  4  5  6  7  8
					3   4  5  6  7  8  9
					4   5  6  7  8  9  10
					5   6  7  8  9  10 11
					6   7  8  9  10 11 12
					
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	
	srand(time(NULL));
	
	int dice1,dice2,i;
	int sum_of_dice[12]={0};
	
	for(i=0;i<36000;i++){
		
		dice1=1+rand()%6;
		dice2=1+rand()%6;
		sum_of_dice[dice1+dice2]++;
	}
	
	printf("%-13s%10s","Sum of Dice","Times");
	puts("");
	
	for(i=2;i<=12;i++){
		
		printf("%-18d",i);
		printf("%-5d%s%.2f",sum_of_dice[i]," %",(double)sum_of_dice[i]/36000*100);
		puts("");
	}
}
