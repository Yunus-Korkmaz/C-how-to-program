/*
	Name:		  5.48_1.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 19:10
	Description:  recursive fibonacci calevulater using cache
*/

#include<stdio.h>
#include<stdlib.h>
					// I used pointers in this code so if you don't know pointers maybe you can check later
long long unsigned int recursive_fibonacci(int n);
long long unsigned int* store;

int main(void){
	
	int i=0;
	
	store=(long long unsigned int*)calloc(150,sizeof(long long unsigned int));
	store[0]=0;
	store[1]=1;
	

	
	do{
		store[i]=recursive_fibonacci(i);
	printf("%d%s%llu",i,". fibonacci number = ",store[i]);
	puts("");
	i++;
	}while(i!=99);
	
	return 0;
}
long long unsigned int recursive_fibonacci(int n){
		
	if(store[n]!=0)
		return store[n];
	
	if(n==0)
		return 0;
		
	return recursive_fibonacci(n-2) + recursive_fibonacci(n-1);
}

