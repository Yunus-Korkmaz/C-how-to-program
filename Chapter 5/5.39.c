/*
	Name:
	Author:       Yunus Korkmaz
	Date:
	Description:  a
*/

#include<stdio.h>

int gcd(int x,int y);

int main(void){
	
	int first_number,second_number;
	
	puts("Please enter two number :");
	scanf("%d%d",&first_number,&second_number);
	
	printf("%s%d","GCD = ",gcd(first_number,second_number));
	
	return 0;
}
int gcd(int x,int y){
	
	if(y==0)
		return x;
	else 
		return gcd(y,x%y);
}
