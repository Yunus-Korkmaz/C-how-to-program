/*
	Name: 		  4.9.c
	Author:       Yunus Korkmaz
	Date: 		  11.06.20 20:56
	Description:  (Sum a Sequence of Integers) Write a program that sums a sequence of integers. Assume that
					the first integer read with scanf specifies the number of values remaining to be entered. 
					Your program should read only one value each time scanf is executed. A typical input sequence might be
					5 100 200 300 400 500
*/

#include<stdio.h>

int main(void){
	
	puts("Enter integers first inter is amount of the intergers whic will be entered:");
	int x;
	scanf("%d",&x);
	
	int i;
	int y;
	int sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&y);
		sum+=y;
	}
	
	printf("%s%d%s%d","Sum of ",x," integers is ",sum);
	
	return 0;
}
