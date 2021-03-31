/*
	Name: 		  2.30.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:53
	Description:  (Separating Digits in an Integer) Write a program that inputs one five-digit number, 
				  separates the number into its individual digits and prints the digits separated from one another by three
 			 	  spaces each. [Hint: Use combinations of integer division and the remainder operation.] 
				  For example, if the user types in 42139, the program should print	4 2 1 3 9	  
*/

#include<stdio.h>

int main(void){
	
	puts("Enter a five digit number");
	int a;
	scanf("%d",&a);
	
	printf(" %d",a/10000);
	a=a%10000;
	printf(" %d",a/1000);
	a=a%1000;
	printf(" %d",a/100);
	a=a%100;
	printf(" %d",a/10);
	a%=10;
	printf(" %d",a);
	
	return 0;
}
