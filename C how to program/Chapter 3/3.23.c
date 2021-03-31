/*
	Name: 		  3.23.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 22:35
	Description:  (Find the Largest Number) The process of finding the largest number (i.e., the maximum
				  of a group of numbers) is used frequently in computer applications. For example, a program that
				  determines the winner of a sales contest would input the number of units sold by each salesperson.
				  The salesperson who sells the most units wins the contest. Write a pseudocode program and then a
				  program that inputs a series of 10 non-negative numbers and determines and prints the largest of
				  the numbers. Hint: Your program should use three variables as follows:
				  counter: A counter to count to 10 (i.e., to keep track of how many numbers have
				  been input and to determine when all 10 numbers have been processed)
				  number: The current number input to the program
				  largest: The largest number found so far
*/

#include<stdio.h>

int main(void){
	
	unsigned int counter,number,largest;
	
	counter=1;
	puts("1.)Enter total selling :");
		scanf("%u",&number);
		largest=number;
		counter++;
	while(counter<=10){
		
		printf("%u%s",counter,".)Enter total selling\n");
		scanf("%u",&number);
		
		if(number>largest)
			largest=number;
			
		counter++;
	}
	printf("%s%d%s","Largest selling is ",largest," dollars");
	
	return 0;
}
