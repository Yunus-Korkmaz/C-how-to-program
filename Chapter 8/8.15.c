/*
	Name:	  	  Displaying a Sentence with Its Words Reversed
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs a line of text,
				 tokenizes the line with function strtok and outputs the tokens in reverse order.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *word);

int main(void){
	
	printf("Please enter your text : \n");
	char *text=(char*)malloc(600*sizeof(char));
	
    fgets(text,600,stdin);
    
    char **word=(char**)calloc(200,sizeof(char*));
    char *token=strtok(text," .,");
    size_t counter=0;

    while(token!=NULL){

    	word[counter++]=token;
    	token=strtok(NULL," .,");
	}
	
	size_t i;
	
	puts("\n");
	printf("\t\t\t--------------------------REVERSE TEXT--------------------------");
	puts("");
	
	for (i=0;i<counter;i++)	{
		reverse(word[i]);
		
	}	

}
void reverse(char *words){
	
	int i;
	for(i=0;words[i]!='\0';i++);
	i--;
	
	for(i;i>=0;i--){

		printf("%c",words[i]);
		
	}
	printf(" ");
	
	return;
} 
