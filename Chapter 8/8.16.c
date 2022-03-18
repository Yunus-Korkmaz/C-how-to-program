/*
	Name:		  Searching for Substrings
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs a line of text and a search string
				from the keyboard. Using function strstr, locate the first occurrence of the search string in the line
				of text, and assign the location to variable searchPtr of type char *. If the search string is found,
				print the remainder of the line of text beginning with the search string. Then, use strstr again to
				locate the next occurrence of the search string in the line of text. If a second occurrence is found,
				print the remainder of the line of text beginning with the second occurrence. [Hint: The second call
				to strstr should contain searchPtr + 1 as its first argument.]
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void){
	
	printf("Please enter string :");
	fflush(stdin);
	char *string=(char*)malloc(sizeof(char)*121);
	fgets(string,120,stdin);
	
	
	fflush(stdin);
	printf("Please enter searching string : ");
	char *search=(char*)malloc(sizeof(char)*120);
	scanf("%120s",search);							// we didn't use fgets because fgets also get enter character and it  cause some search problem
	
	char *searchptr=strstr(string,search);
	
	int i=1;
	while(searchptr!=NULL){
		
		printf("%d.) %s ",i++,searchptr);
		searchptr=strstr(searchptr+1,search);  // we increased searchptr in ever step so we can search on remaining part of string 
		puts(" ");							   // if we dont do that every time strstr function return same result
	}
	
	
	
}
