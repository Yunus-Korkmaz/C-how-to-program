/*
	Name:		  Displaying Strings in Uppercase and Lowercase
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs a line of text
					into char array s[100]. Output the line in uppercase letters and in lowercase letters
*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void){
	
	char *arr=(char*)malloc(sizeof(char)*100);
	
	printf("%s","Pls enter an string :");
	fgets(arr,100,stdin);
	puts("");
	
	char *iter;
	iter=arr;
	
	while(*iter!='\n'){
		printf("%c",tolower(*iter));
		iter++;
	}
	
	puts("");
	iter=arr;

	while(*iter!='\n'){
		printf("%c",toupper(*iter));
		iter++;
	}
	
	return 0;
}
