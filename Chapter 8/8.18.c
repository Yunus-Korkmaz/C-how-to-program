/*
	Name:		  Counting the Occurrences of a Character
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs several lines of text
				and a search character and uses function strchr to determine the total occurrences of the character
				in the lines of text.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("Please enter string :");
	fflush(stdin);
	char string[120];
	gets(string);
	
	fflush(stdin);
	printf("Please enter searching character : ");
	char character;
	scanf("%c",&character);
	
	printf("%s------%c\n",string,character);
	
	char *searchptr=strchr(string,character);
	
	
	int i=0;
	while(searchptr!=NULL){
		i++;
		searchptr=strchr(searchptr+1,character); 
	}
	
	fprintf(stdout,"\n\"%c\" %s %d %s \"%s\" ",character,"Found ",i," times in ",string);
}

