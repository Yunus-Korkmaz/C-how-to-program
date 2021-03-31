/*
	Name: 		  4.26.c
	Author:       Yunus Korkmaz
	Date: 		  16.06.20 22:02
	Description:  (Calculating the Value of ?) Calculate the value of ? from the infinite series
	
	 				pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
					  
					Print a table that shows the value of ? approximated by one term of this series, by two terms, by
					three terms, and so on. How many terms of this series do you have to use before you first get 3.14?
					3.141? 3.1415? 3.14159?
*/

#include<stdio.h>

int main(void){
	
	int i;
	float pi=4;
	
	int divisor=3;
	int n=-1;// for determine sing of divisor
	for(i=3;i<150;i++){
		
		
		pi+=(float)4/divisor*n;
		divisor+=2;
		n*=-1;
		
		
			printf("%d%s%f",i-2,".) step pi =",pi);
			puts("");
		}
	
	return 0;
	}
