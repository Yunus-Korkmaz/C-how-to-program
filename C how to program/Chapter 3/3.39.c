/*
	Name: 		  3.39.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 15:42
	Description:  (Checkerboard Pattern of Asterisks) 
				  Write a program that displays the following checkerboard pattern:
				  * * * * * * * * *
				   * * * * * * * * *
				  * * * * * * * * *
				   * * * * * * * * *
				  * * * * * * * * *
				   * * * * * * * * *
				  * * * * * * * * *
				   * * * * * * * * *
				   Your program must use only three output statements, one of each of the following forms:
					printf( "%s", "* " );
					printf( "%s", " " );
					puts( "" ); // outputs a newline
*/

#include<stdio.h>

int main(void){
	
	int i=1;
	while(i<=9*8){
		
		printf("%s","* ");
		
		if(i%9==0){
			puts("");
			if(i%2==1)
				printf("%s"," ");
		}
		i++;			
	}
	
	return 0;
}
