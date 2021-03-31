/*
	Name: 		  3.25.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 22:51
	Description:  (Tabular Output) Write a program that utilizes looping to produce the following table of
				  values:
				  A   A+2   A+4   A+6
				  3   5     7     9
				  6   8     10    12
				  9   11    13    15
				  12  14    16    18
				  15  17    19    21
*/

#include<stdio.h>

int main(void){
	
	int a=3;
	
	puts("A\tA+2\tA+4\tA+6\n");
	while(a<=15){
		printf("%d\t%d\t%d\t%d\n",a,a+2,a+4,a+6);
		a+=3;
	}
	
	return 0;
}
