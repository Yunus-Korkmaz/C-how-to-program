/*
	Name: 		  2.17.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:46
	Description:  (Printing Values with printf) Write a program that prints the numbers 1 to 4 on the same
				  line. Write the program using the following methods.
				  a) Using one printf statement with no conversion specifiers.
				  b) Using one printf statement with four conversion specifiers.
				  c) Using four printf statements
*/
#include<stdio.h>

int main(void){
	
	printf("1 2 3 4\n");
	printf("%s%s%s%s\n","1 ","2 ","3 ","4 ");
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 ");
	
	return 0;
}
