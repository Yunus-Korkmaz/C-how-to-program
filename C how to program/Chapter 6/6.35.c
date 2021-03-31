/*
	Name:		  6.35.c
	Author:       Yunus Korkmaz
	Date:		  20.08.20 15:00
	Description:  (Print an Array) Write a recursive function printArray that takes an array and the size of
					the array as arguments, prints the array, and returns nothing. The function should stop processing
					and return when it receives an array of size zero.
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

void printArray(int array[],int size);

int main(void){
	
	int arr[SIZE];
	
	size_t i;
	
	for(i=0;i<SIZE;i++)
		arr[i]=rand()%100;
	
	
	printArray(arr,SIZE);
	
	return 0;
}
void printArray(int array[],int size){
	
	if(size==0)
		return;
		
	printf("%2d ",array[0]);
		
	printArray(&array[1],--size);

}
