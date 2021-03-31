/*
	Name:		  5.42.c
	Author:       Yunus Korkmaz
	Date:		  12.07.20 21:55
	Description:  What does the following program do?
*/

#include<stdio.h>

int main(void){
	
	int c;
	
	if((c = getchar()) != EOF){
		main();
		printf("%c",c);
	}
	
	return ;
}
