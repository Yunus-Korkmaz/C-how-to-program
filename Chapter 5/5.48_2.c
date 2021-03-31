/*
	Name:		  5.48_2.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 18:47
	Description:  Nonrecursive fibonacci calculater
*/

#include<stdio.h>

long long unsigned int nonrecursive_fibonacci(int n);

int main(void){
	
	int number;-
	puts("Please enter n. number");
	scanf("%d",&number);
	
	printf("%s%llu","result = ",nonrecursive_fibonacci(number));
	
	return 0;
}
long long unsigned int nonrecursive_fibonacci(int n){
	
	int i;
	long long unsigned int f0=0,f1=1,temp;
	
	for(i=2;i<=n;i++){
		
		temp=f1;
		f1+=f0;	// now f1 equal to f2  (f0 + f1 = f2  -> f1+=f0 -> f2)
		f0=temp;  // f0 equal to frist value of f1
		
	}
	
	return f1;
}
