/*
	Name:		  Comparing Strings
	Author:       Yunus Korkmaz
	Date:
	Description:   Write a program that uses function strcmp to compare two strings input by the user. 
					The program should state whether the first string is less than, equal to or greater
					than the second string. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){
	
	char *str1,*str2;
	str1=(char*)malloc(sizeof(char)*20);
	str2=(char*)malloc(sizeof(char)*20);
	
	
	printf("Please enter first string : ");
	fgets(str1,20,stdin);
	fflush(stdin);
	printf("Please enter second string : ");
	fgets(str2,20,stdin);
	
	
	int result=strcmp(str1,str2);
	

		
		if(result==0)
			puts("They are EQUAL ");
	
		else if(result>0)
			puts("FIRST string is GREATER");
	
		else if(result<0)
		puts("SECOND string is GREATER");

	
}
