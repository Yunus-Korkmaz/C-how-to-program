/*
	Name: 		  2.18.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:51
	Description:  (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
				  numbers from the user, then prints the larger number followed by the words “is larger.” If the
				  numbers are equal, print the message “These numbers are equal.” Use only the single-selection
				  form of the if statement you learned in this chapter.
*/

#include<stdio.h>

int main(void){
	
	printf("Enter two integer : ");
	int a,b;
	scanf("%d%d",&a,&b);
	
	if(a>b)
		printf("%d%s",a,"is larger");
	if(a==b)
		printf("These number are equal");
	if(b>a)
		printf("%d%s",b," is larger");
		
	return 0;
}
