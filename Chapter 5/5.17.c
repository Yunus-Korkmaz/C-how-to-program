/*
	Name: 		  5.17.c
	Author:       Yunus Korkmaz
	Date: 		  27.06.20 14:31
	Description:  (Multiples) Write a function multiple that determines for a pair of integers whether the second integer is a multiple of the first. The function should take two integer arguments and return 1
					(true) if the second is a multiple of the first, and 0 (false) otherwise. Use this function in a program
					that inputs a series of pairs of integers
*/

#include<stdio.h>
#include<stdlib.h>

int multiple(int first, int second);

int main(void){
	
	int number1,number2;
	int i;
	for(i=1;i<=50;i++){
		
		number1= rand()%11;
		number2= rand()%201;

		printf("%d%s%d%s%d",number1," ",number2," return ",multiple(number1,number2));
		
		puts("");
	}
	
	return 0;
}

int multiple(int first,int second){
	
	int i;
	
	first+=first==0?1:0; // this statement important 
	
	for(i=1;first*i<=second;i++) // if first will  be 0 this loop never end so we check in previus statement
		if(first*i==second)
			return 1;
			
	return 0;
	
}
