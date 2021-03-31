/*
	Name: 		  3.40.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 16:19
	Description:  (Multiples of 2 with an Infinite Loop) Write a program that keeps printing the multiples of
				  the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you should
				  create an infinite loop). What happens when you run this program? 
*/

#include<stdio.h>

int main(void){
	
	
	int even_num=1;
	while(1){
		even_num*=2;
		printf("%d\n ",even_num);
	}
	
	return 0;
}
