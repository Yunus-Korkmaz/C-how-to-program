/*
	Name:		  5.48_5.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 18:48
	Description:  calculate fibonacci using this formula
					If n is even then k = n/2:
						F(n) = [2*F(k-1) + F(k)]*F(k)
					
					If n is odd then k = (n + 1)/2
						F(n) = F(k)*F(k) + F(k-1)*F(k-1)
*/
				
#include<stdio.h>
				
				// I used arrays in this code so if you don't know arrays maybe you can check later
long long unsigned int fibonacci(int n);
void multible_matrix(long long unsigned int F[],long long unsigned int M[]);

int main(void){
	
	int number,k;
	puts("Please enter n. number");
	scanf("%d",&number);
	
	if(number%2==0){
		
		k=number/2;
		printf("%d%s%llu",number,". fibonacci number = ",(2*fibonacci(k-1) + fibonacci(k))*fibonacci(k));
	}
	else{

	k=(number+1)/2;
	printf("%d%s%llu",number,". fibonacci number = ",fibonacci(k)*fibonacci(k) + fibonacci(k-1)*fibonacci(k-1));
	}
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
