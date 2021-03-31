/*
	Name: 		  3.33.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 00:04
	Description:  (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.32 so that it
				  prints a hollow square. For example, if your program reads a size of 5, it should print
				*****
				*   *
				*   *
				*   *
				***** 
*/

#include<stdio.h>

int main(void){
	
	unsigned int side;
	
	puts("Enter one side of squares :");
	scanf("%u",&side);
	
	int i=1;
	int k;
	
	while(i<=side){
		if(i==1){
			k=1;
			while(k<=side){
				printf("%s","*");
				k++;
			}
				
		}
		else if(i==side){
			k=1;
			while(k<=side){
				printf("%s","*");
				k++;
			}
			
		}
		else{
		k=1;
		while(k<=side){
			if(k==1)
				printf("%s","*");
			else if(k==side)
				printf("%s","*");
			else
				printf("%s"," ");
			k++;	
		}
	}
		puts("");
		i++;
	}
	
	return 0;
}
