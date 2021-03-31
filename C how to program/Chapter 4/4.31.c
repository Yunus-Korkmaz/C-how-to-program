/*
	Name: 		  4.31.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 15:02
	Description:  (Diamond-Printing Program) Write a program that prints the following diamond shape.
					You may use printf statements that print either a single asterisk (*) or a single blank. Maximize
					your use of repetition (with nested for statements) and minimize the number of printf statements.
					    *
					   ***
					  *****
					 *******
					*********
					 *******
					  *****
					   ***
					    *
*/

#include<stdio.h>

int main(void){
	
	int i;//row counter  1-9
	int j;//just save value of k
	int k=4;//for space and asterix quantity start with 4 (because of 4 space)
	for(i=1;i<=9;i++){
		
		for(j=k;j>0;j--)
			printf("%s"," ");												
			
			for(j=(5-k)*2-1;j>0;j--)						//    ssss*     I use space number to calculate asterix number
			printf("%s","*");                               //    sss***	(5-k) -> it is amount of asterix in 5 digit
															//    ss*****   (5-k)*2-1 -> calculatation  of amount of asterix
			puts("");										//    s********	
															//    **********
				  											//	  s********
		if(i<5) 											//    ss******
			k-=1;											//    sss***
 		else				  								//    ssss*
			k+=1;
			
		}
		
		return 0;
}
