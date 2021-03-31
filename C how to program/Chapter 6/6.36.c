/*
	Name:		  6.36.c
	Author:       Yunus Korkmaz
	Date:		  20.08.20 15:29
	Description:  (Print a String Backward) Write a recursive function stringReverse that takes a character
					array as an argument, prints it back to front and returns nothing. The function should 
					stop processing and return when the terminating null character of the string is encountered.
*/

#include<stdio.h>

void stringReverse(char arr[]);

int main(void){
	
	char array[100];
	
	puts("Please enter a string (max 100 character) :");
	gets(array);
	
	stringReverse(array);
	
	return 0;  
}
void stringReverse(char arr[]){
	
	
	if(arr[0]=='\0')
		return ;
	
	stringReverse(++arr);
	
	putchar(arr[0]);
	
} 

