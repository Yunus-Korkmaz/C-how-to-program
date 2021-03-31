/*
	Name: 		  4.33.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 20:13
	Description:  (Roman-Numeral Equivalent of Decimal Values) Write a program that prints a table of all
					the Roman numeral equivalents of the decimal numbers in the range 1 to 100.
*/

#include<stdio.h>

int main(void){
	
	int X=10,L=50,C=100;
	
	int i,k;
	for(i=10;i<=100;i+=10){
		k=i;
		for(k;k!=0;){
	
			if(k>=C-10)
				if(k==C-10){
					k-=C-10;
					printf("%s","XC");	}
				else{
					k-=C;
					printf("%s","C");
				}
			if(k>=L-10)
				if(k==L-10){
					k-=L-10;
					printf("%s","XL");
					}
				else{
					k-=L;
					printf("%s","L");
				}
			if(k>=X){
				k-=X;
				printf("%s","X");
			}
							}
						
			printf("%s%d"," -> ",i);		
			puts("");
			
		
	}
	
	return 0;
}
