/*
	Name: 		  2.25.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:20
	Description:  (Multiples) Write a program that reads in two integers and determines and prints whether
				  the first is a multiple of the second. [Hint: Use the remainder operator.]  		  
*/

#include<stdio.h>

int main(void){
	
	puts("Enter two integer : ");
	int a,b;
	scanf("%d%d",&a,&b);
	
	if(a%b==0)
		printf("%d%s%d",b," is diveder of",a);
	if(b%a==0)
		printf("%d%s%d",a,"is diveder of",b);
		
	return 0;
}
