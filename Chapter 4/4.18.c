/*
	Name: 		  4.18.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 13:22
	Description:  (Bar Chart Printing Program) One interesting application of computers is drawing graphs
					and bar charts (sometimes called “histograms”). Write a program that reads five numbers (each between 1 and 30). For each number read, your program should print a line containing that number
					of adjacent asterisks. For example, if your program reads the number seven, it should print *******
*/

#include<stdio.h>

int main(void){
	
	
	puts("Enter 5 integer one by one [1-30] :");
	int i,k;
	for(i=1;i<=5;i++){
		
		scanf("%d",&k);		
		for(k;k>=1;k--)
			printf("%s","*");
			puts("");
			
	}
	
	return 0;
}
