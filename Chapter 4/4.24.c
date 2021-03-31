/*
	Name: 		  4.24.c
	Author:       Yunus Korkmaz
	Date: 		  14.06.20 15:47
	Description:  Assume i = 1, j = 2, k = 3 and m = 2. What does each of the following statements print?
					a) printf( "%d", i == 1 );
					b) printf( "%d", j == 3 );
					c) printf( "%d", i >= 1 && j < 4 );
					d) printf( "%d", m < = 99 && k < m );
					e) printf( "%d", j >= i || k == m );
					f) printf( "%d", k + m < j || 3 - j >= k );
					g) printf( "%d", !m );
					h) printf( "%d", !( j - m ) );
					i) printf( "%d", !( k > m ) );
					j) printf( "%d", !( j > k ) );
*/

#include<stdio.h>

int main(void){
	
	int i=1,j=2,k=3,m=2;
	
	printf("%d\n",i==1);//1
	printf("%d\n",j==3);//0
	printf("%d\n",i>=3 && j<4);//0
	printf("%d\n",m<=99 && k<m);//0
	printf("%d\n",j>=i || k==m);//1
	printf("%d\n",k+m<j || 3-j>=k);//0
	printf("%d\n",!m);//0
	printf("%d\n",!(j-m));//1
	printf("%d\n",!(k>m));//0
	printf("%d\n",!(j>k));//1
	
	return 0;
}
