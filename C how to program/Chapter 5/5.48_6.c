/*
	Name:		  5.48_6.c
	Author:       Yunus Korkmaz
	Date:		  14.07.20 13:17
	Description:  calculate fibonacci using this formula
						Fn = {[(5^1/2 + 1)/2] ^ n} / 5^1/2
*/

#include<stdio.h>
#include<math.h>

long long unsigned int fibonacci(int n);

int main(void){
	
	int number;
	
	for(number=0;number<=100;number++){
		
	printf("%d%s%llu",number,". fibonacci number = ",fibonacci(number));
	puts("");
	}
	return 0;
}
long long unsigned int fibonacci(int n){
	
	return pow( (sqrt(5)+1)/2,n )/sqrt(5); 
}
