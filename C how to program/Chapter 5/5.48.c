/*
	Name:		
	Author:       Yunus Korkmaz
	Date:
	Description:  a
*/

#include<stdio.h>

long long unsigned int recursive_fibonacci(int n);

int main(void){
	
	int number;
	puts("Please enter n. number");
	scanf("%d",&number);
	
	printf("%s%lld","result = ",recursive_fibonacci(number));
	
	return 0;
}
long long unsigned int recursive_fibonacci(int n){
	
	if(n==0)
		return 0;
	if(n==1)
		return 1;
		
	return recursive_fibonacci(n-2) + recursive_fibonacci(n-1);
}
