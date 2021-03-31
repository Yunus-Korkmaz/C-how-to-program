/*
	Name: 		  3.26.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 23:00
	Description:  (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find the two
				  largest values of the 10 numbers. [Note: You may input each number only once.]
*/

#include<stdio.h>

int main(void){
	
	int number,largest,second_largest;
	int i=1;
	
	puts("1.)Enter an integer :");
	scanf("%d",&number);
	largest=number;
	i++;
	
	puts("2.)Enter an integer :");
	scanf("%d",&number);
	
	if(number>largest){
		
		second_largest=largest;
		largest=number;
	}
	else
		second_largest=number;
	i++;	
			
	while(i<=10){
		
		printf("%d%s",i,".) Enter an integer :\n");
		scanf("%d",&number);
		
		if(number>largest){
		
			second_largest=largest;
			largest=number;
		}
		else if(number>second_largest)
			second_largest=number;
		
		i++;
	}
	
	printf("%s%d%s%d","Largest = ",largest,", Second largest = ",second_largest);
	
	return 0;
}
