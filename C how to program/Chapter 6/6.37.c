/*
	Name:		  6.37.c
	Author:       Yunus Korkmaz
	Date:		  20.08.20 15:39
	Description:  (Find the Minimum Value in an Array) Write a recursive function recursiveMinimum that
					takes an integer array and the array size as arguments and returns the smallest element of the array.
					The function should stop processing and return when it receives an array of one element.
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int recursiveMinimum(int array[],int size);

int main(void){
	
	int arr[SIZE];
	
	size_t i;
	
	puts("Array :");
	
	for(i=0;i<SIZE;i++){
		arr[i]=rand()%100;
		printf("%2d ",arr[i]);
	}
	puts("\n");

	printf("%s%d","Smallest number is ",recursiveMinimum(arr,SIZE));
	
	return 0;
}
int recursiveMinimum(int array[],int size){
	
	if(size==0)
		return array[0];
		
	int num=recursiveMinimum(++array,--size);
	
	if(array[0]<num)
		return array[0];
	
	else
		return num;

}

