/*	
	Name:	  	  Counting the Occurrences of a Substring
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program based on the program of
				Exercise 8.16 that inputs several lines of text and a search string and uses function strstr to
				determine the total occurrences of the string in the lines of text. Print the result.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("Please enter string :");
	fflush(stdin);
	char *string=(char*)malloc(sizeof(char)*121);
	scanf("%120s",string);
	
	
	fflush(stdin);
	printf("Please enter searching string : ");
	char *search=(char*)malloc(sizeof(char)*120);
	scanf("%120s",search);						
	
	char *searchptr=strstr(string,search);
	
	int i=0;
	while(searchptr!=NULL){
		i++;
		searchptr=strstr(searchptr+1,search); 
	}
	
	fprintf(stdout,"\n\"%s\" %s %d %s \"%s\" ",search,"Found ",i," times in ",string);
}
