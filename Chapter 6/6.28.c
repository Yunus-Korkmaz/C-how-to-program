/*
	Name:		  6.28.c
	Author:       Yunus Korkmaz
	Date:		  09.08.20 22:01
	Description:  (Duplicate Elimination) In Chapter 12, we explore the high-speed binary search tree data
					structure. One feature of a binary search tree is that duplicate values are discarded when insertions
					are made into the tree. This is referred to as duplicate elimination. Write a program that produces
					20 random numbers between 1 and 20. The program should store all nonduplicate values in an array. 
					Use the smallest possible array to accomplish this task. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	
	srand(time(NULL));
	int i,number;
	int arr[20]={0};
	
	for(i=0;i<20;i++){
		number=1+rand()%20;
		
		if(arr[number-1]==0){
			arr[number-1]++;
			printf("%-2d ",number);
		}
			
			
	}
	
	
}
