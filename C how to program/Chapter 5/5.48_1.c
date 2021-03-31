/*
	Name:		  5.48_1.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 18:46
	Description:  (Research Project: Improving the Recursive Fibonacci Implementation) In Section 5.15, the
					recursive algorithm we used to calculate Fibonacci numbers was intuitively appealing. However, recall that the algorithm resulted in the exponential explosion of recursive function calls. Research the
					recursive Fibonacci implementation online. Study the various approaches, including the iterative
					version in Exercise 5.35 and versions that use only so-called “tail recursion.” Discuss the relative
					merits of each.
*/

#include<stdio.h>

long long unsigned int recursive_fibonacci(int n);

int main(void){
	
	int number;
	puts("Please enter n. number");
	scanf("%d",&number);
	
	printf("%d%s%llu",number,". fibonacci number = ",recursive_fibonacci(number));
	
	return 0;
}
long long unsigned int recursive_fibonacci(int n){
	
	if(n==0)
		return 0;
	if(n==1)
		return 1;
		
	return recursive_fibonacci(n-2) + recursive_fibonacci(n-1);
}
