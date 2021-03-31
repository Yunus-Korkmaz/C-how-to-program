/*
	Name: 		  2.31.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:58
	Description:  (Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
				  a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print
  			 	  the following table of values:		
				number square cube
				0      0      0
				1      1      1
				2      4      8
				3      9      27
				4      16     64
				5      25     125
				6      36     216
				7      49     343
				8      64     512
				9      81     729
				10     100    1000   
*/

#include<stdio.h>

int main(void){
	
	puts("NUMBER   SQUARE   CUBE");
	
	int a=0;
	
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	printf("\n%-9d%-10d%-9d\n",a,a*a,a*a*a),a=a+1;
	
	return 0;
	
}
