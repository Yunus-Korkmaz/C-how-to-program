/*
	Name: 		  4.25.c
	Author:       Yunus Korkmaz
	Date: 		  14.06.20 20:38
	Description:  (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a program that
					prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range
					1 through 256. If you’re not familiar with these number systems, read Appendix C before you attempt this exercise. 
					[Note: You can display an integer as an octal or hexadecimal value with the conversion specifiers %o and %X, respectively.]
*/

#include<stdio.h>
#include<math.h>
int main(void){
	
	int i,k,j,binary;
	printf("%-20s%-20s%-20s%-20s","Decimal","Binary","Octal","Hexadecimal");
	puts("");
	
	for(i=1;i<=256;i++){
		printf("%-20d",i);
		k=i;
		binary=0;
		
		for(j=0;k>0;k/=2,j++)	
			if(k%2==1)
				binary+=(1*(int)pow(10,j));
				
		printf("%09d",binary);
		printf("%20o%20x",i,i);
		puts("");
		
	}
	
	return 0;
}
