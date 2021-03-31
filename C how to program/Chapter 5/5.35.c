/*
	Name:         5.35.c
	Author:       Yunus Korkmaz
	Date: 		  05.07.20 13:42
	Description:  (Fibonacci) The Fibonacci series
					0, 1, 1, 2, 3, 5, 8, 13, 21, …
					begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two
					preceding terms. a) Write a nonrecursive function fibonacci(n) that calculates the nth Fibonacci
					number. Use unsigned int for the function’s parameter and unsigned long long int for its return
					type. b) Determine the largest Fibonacci number that can be printed on your system. 
*/

#include<stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void){ 
	
	unsigned int number=0;
	
	do{					 													// unsigned long long int limt is 18,446,744,073,709,551,615.
																			// and we can calculate max 93. fibonacci number 12,200,160,415,121,876,738	
	printf("%u%s%llu",number,". finonacci number is ",fibonacci(number));
	puts("");
	number++;
	
	}while(number!=99);
	
}
unsigned long long int fibonacci(unsigned int n){
	
	unsigned long long int result,a,b,temp;
	a=0;
	b=1;
	int i;
	
	if(n==0)
		return n;
	if(n==1)
		return n;
	
	for(i=2;i<=n;i++){
		temp=b;
		b+=a;
		a=temp;
	}
	
	return b;
}
