/*
	Name: 		  4.10.c
	Author:       Yunus Korkmaz
	Date: 		  11.06.20 21:02
	Description:  (Average a Sequence of Integers) Write a program that calculates and prints the average of
					several integers. Assume the last value read with scanf is the sentinel 9999. A typical input sequence
					might be
					10 8 11 7 9 9999
*/

#include<stdio.h>

int main(void){
	
	puts("Please enter integers (end for enter 9999):");
	
	int x=0;
	int sum=0;
	int i;
	
	for(i=0;x!=9999;++i){
		
		sum+=x;
		scanf("%d",&x);
	}
	
	printf("%s%d%s%d","Average of ",i-1," integers is ",sum/(i-1));
	
	return 0;
}
