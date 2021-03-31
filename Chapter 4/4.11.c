/*
	Name: 		  4.11.c
	Author:       Yunus Korkmaz
	Date: 		  11.06.20 21:31
	Description:  (Find the Smallest) Write a program that finds the smallest of several integers. Assume that
					the first value read specifies the number of values remaining.
*/

#include<stdio.h>

int main(void){
	
	puts("Please enter integers  first integer the number of values remaining :");
	int i;
	scanf("%d",&i);
	
	int x;
	scanf("%d",&x);
	int max=x;
	
	for(i;i-1>=1;i--){
		
		scanf("%d",&x);
		if(x>max)
			max=x;
			
	}
	
	printf("%s%d","max value is ",max);
	
	return 0;
}
