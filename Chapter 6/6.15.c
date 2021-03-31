/*
	Name:		  6.115.c
	Author:       Yunus Korkmaz
	Date:		  20.07.20 00:00
	Description:  (Duplicate Elimination) Use a single-subscripted array to solve the following problem.
					Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is read, print
					it only if it’s not a duplicate of a number already read. Provide for the “worst case” in which all 20
					numbers are different. Use the smallest possible array to solve this problem.
*/

#include<stdio.h>

int main(void){
	
	size_t i,j,k=0;
	int numbers[20],temp,flag;
	
	for(i=0;i<20;i++){
		flag=0;
		
		printf("%s","Please enter number : ");
		scanf("%d",&temp);
		for(j=0;j<i;j++)
			if(temp==numbers[j]){
				flag=1;
				break;
			}
		
		if(flag==0){
			numbers[k]=temp;
			printf("%s%d","Number ",numbers[k]);
			k++;
		
		}
		else{
			puts("");
		}
	
	puts("");

	}

	
}
