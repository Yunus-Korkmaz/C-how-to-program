/*
	Name:	 	  6.30.c
	Author:       Yunus Korkmaz
	Date:		  10.08.20 14:44
	Description:  (The Sieve of Eratosthenes) A prime integer is any integer greater than 1 that can be divided
					evenly only by itself and 1. The Sieve of Eratosthenes is a method of finding prime numbers. It
					works as follows:
							a) Create an array with all elements initialized to 1 (true). Array elements with prime subscripts 
							will remain 1. All other array elements will eventually be set to zero.
							b) Starting with array subscript 2 (subscript 1 is not prime), every time an array element is
							found whose value is 1, loop through the remainder of the array and set to zero every
							element whose subscript is a multiple of the subscript for the element with value 1. For
							array subscript 2, all elements beyond 2 in the array that are multiples of 2 will be set to
							zero (subscripts 4, 6, 8, 10, and so on.). For array subscript 3, all elements beyond 3 in
							the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12, 15, and so on.).
							
					When this process is complete, the array elements that are still set to 1 indicate that the subscript is
					a prime number. Write a program that uses an array of 1,000 elements to determine and print the
					prime numbers between 1 and 999. Ignore element 0 of the array.
*/

#include<stdio.h>

int main(void){
	
	int arr[1000];
	int i;
	
	for(i=0;i<1000;i++)
		arr[i]=1;
		
		
	int j;
	for(i=2;i<1000;i++){
		
		if(arr[i]==1){
			for(j=i+1;j<1000;j++){
				if(j%i==0 && arr[j]!=0)
					arr[j]=0;
				
			}
			
		}
	}
	
	for(i=1;i<1000;i++){
		if(arr[i]==1)
			printf("%-4d ",i);
	}
}
