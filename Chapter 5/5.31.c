/*
	Name:		  5.31.c
	Author:       Yunus Korkmaz
	Date:	      04.07.20 21:53
	Description:  (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the
					program should print Heads or Tails. Let the program toss the coin 100 times, and count the number
					of times each side of the coin appears. Print the results. The program should call a separate function 
					flip that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program
					realistically simulates the coin tossing, then each side of the coin should appear approximately half
					the time for a total of approximately 50 heads and 50 tails.]
*/

#include<stdio.h>
#include<stdlib.h>

int flip();

int main(void){
	
	int i,heads=0,tails=0;
	
	for(i=0;i<100;i++){
		
		if(flip()==1)
			heads++;
		else 
			tails++;
	}
	
		printf("%s%d%s%d","Heads = ",heads," Tails = ",tails);
	return 0;
}
int flip(void){
	
	return rand()%2;
}

