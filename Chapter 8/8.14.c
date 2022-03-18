/*
	Name:		  Tokenizing Telephone Numbers
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs a telephone number as a
					string in the form (555) 555-5555. The program should use function strtok to extract the area code
					as a token, the first three digits of the phone number as a token and the last four digits of the phone
					number as a token. The seven digits of the phone number should be concatenated into one string.
					The program should convert the area-code string to int and convert the phone-number string to
					long. Both the area code and the phone number should be printed.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	char *num=(char*)calloc(15,sizeof(char));
	
	printf("Please enter tel number [ (555) 555-5555]");
	puts("");
	
	fgets(num,15,stdin);
	
	char *f;
	
	char *token=strtok(num," ()-"); 
	int area_code=(int)strtod(token,&f);
	
	
	char *char_number=(char*)calloc(9,sizeof(char));
		
	do{
		
		token=strtok(NULL," ()-");
		if(token!=NULL)
		char_number=strcat(char_number,token);
	}
	while(token!=NULL);
	
	long int number;
	
	sscanf(char_number,"%ld",&number); // covert string to long int also you can use strtol
	
	printf("%d %ld",area_code,number);
		
}
