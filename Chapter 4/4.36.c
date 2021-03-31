/*
	Name: 		  4.36.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 20:36
	Description:  What does the following program segment do?
*/

#include<stdio.h>

int main(void){
	
	int i,j,k;
	for ( i = 1; i <= 5; ++i ) {
		for ( j = 1; j <= 3; ++j ) {
			for ( k = 1; k <= 4; ++k )
				printf( "%s", "*" );
			puts( "" );
		}
		puts( "" );
	}
	
	return 0;
}
