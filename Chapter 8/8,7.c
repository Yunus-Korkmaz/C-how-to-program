/*
	Name:		  Converting Strings to Integers for Calculations
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs four strings
					that represent integers, converts the strings to integers, sums the values and prints the total of the
					four values.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(void){
	
	char num1[10],num2[10],num3[10],num4[10];
	puts("Pls enter 4 number : ");
	scanf("%s%s%s%s",num1,num2,num3,num4);
	
	char *numptr=NULL;
	int total ;
	
	char (*nums[4])={num1,num2,num3,num4};
	
	unsigned long i=0;
	
	while(i!=4){
		total+=strtoul(nums[i],&numptr,0);
		i++;
	}
	
	printf("Total is : %lu",total);
	
	
	return 0;
}
