/*
	Name:		  5.48_4.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 18:48
	Description:  calculate fibonacci using matrix 
*/

#include<stdio.h>
#include<stdlib.h>

				// I used arrays in this code so if you don't know arrays maybe you can check later
long long unsigned int fibonacci(int n);
void multible_matrix(long long unsigned int F[],long long unsigned int M[]);

int main(void){
	
	int number;
	puts("Please enter n. number");
	scanf("%d",&number);
	
	printf("%s%llu","result = ",fibonacci(number));
	
	return 0;
}
long long unsigned int fibonacci(int n){
	
	int i;
	long long unsigned int F[4]={1,1,1,0};
	long long unsigned int M[4]={1,1,1,0};
						
	for(i=2;i<=n;i++){
		
		multible_matrix(F,M);
	}
	
	return F[1];
}
void multible_matrix(long long unsigned int F[],long long unsigned int M[]){
	
	long long unsigned int a,b,c,d;
	
	a=F[0]*M[0] + F[1]*M[2];
	b=F[0]*M[1] + F[1]*M[3];
	c=F[2]*M[0] + F[3]*M[2];
	d=F[2]*M[1] + F[3]*M[3];
	
	F[0]=a;
	F[1]=b;
	F[2]=c;
	F[3]=d;
	
} 
