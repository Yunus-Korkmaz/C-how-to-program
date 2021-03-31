/*
	Name:		  5.18.c
	Author:       Yunus Korkmaz
	Date:		  02.07.20 11:24
	Description:  (Even or Odd) Write a program that inputs a series of integers and passes them one at a time
					to function even, which uses the remainder operator to determine whether an integer is even. The
					function should take an integer argument and return 1 if the integer is even and 0 otherwise.
*/

#include<stdio.h>
#include<stdlib.h>

int even(int num);

int main(void){
	
	int integer;
		
	int i;
	for(i=0;i<=50;i++){
		
		integer=rand();
		printf("%s%d%s%d","Number = ",integer,"  even function return :",even(integer));
		puts("");
		
	}
	
	return 0;
}
int even(int num){
	
	if(num%2==0)
		return 1;
		
	return 0;
}


