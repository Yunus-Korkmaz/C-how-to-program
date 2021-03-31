/*
	Name:		  5.44.c
	Author:       Yunus Korkmaz
	Date:		  12.07.20 23:53
	Description:  After you determine what the program of Exercise 5.43 does, modify the program to function 
					properly after removing the restriction of the second argument’s being nonnegative.

*/

#include<stdio.h>

long int mystery(unsigned int a, long int b);

int main(void){
	
	unsigned int x;
	long int y;
	
	printf("%s","Enter two integers: (first one positive)");
	scanf("%u%ld",&x,&y);
	
	printf("%s%ld","the result is ",y<0?y%2==0?mystery(x,y):-mystery(x,y):mystery(x,y));
	
	return 0;
}
long int mystery(unsigned int a, long int b){
	
	if(1 == b || b== -1){
		return a ;
	}
	else {
		return a+ mystery(a,b>0?b-1:b+1);
	}
}
