/*
	Name: 		  4.29.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 00:14
	Description:  (De Morgan’s Laws) In this chapter, we discussed the logical operators &&, ||, and !. De
					Morgan’s Laws can sometimes make it more convenient for us to express a logical expression. These
					laws state that the expression !(condition1 && condition2) is logically equivalent to the expression
					(!condition1 || !condition2). Also, the expression !(condition1 || condition2) is logically equivalent
					to the expression (!condition1 && !condition2). Use De Morgan’s Laws to write equivalent expressions for each of the following, and then write a program to show that both the original expression
					and the new expression in each case are equivalent.
						a) !( x < 5 ) && !( y >= 7 )
						b) !( a == b ) || !( g != 5 )
						c) !( ( x <= 8 ) && ( y > 4 ) )
						d) !( ( i > 4 ) || ( j <= 6 ) )
*/

#include<stdio.h>

int main(void){
	
	int x,y,a,b,g,i,j;
	
	x=6,y=4;
	printf("%s%d","!(x<5) && !(y>=7) = ",!(x<5) && !(y>=7));//0
	puts("");
	printf("%s%d","(!x<5 || !y>=7) = ",!(x<5 || y>=7));//0
	puts("\n");
	
	a=6,b=6,g=4;
	printf("%s%d","!(a==b) || !(g!=5) = ",!(a==b) || !(g!=5));//0
	puts("");
	printf("%s%d","(!a==b && !g!=5) = ",(!a==b && !g!=5));//0
	puts("\n");
	
	x=8,y=3;
	printf("%s%d","!((x<=8) && (y>4)) = ",!((x<=8) && (y>4)));//1
	puts("");
	printf("%s%d","!(x<=8) || !(y>4) = ",!((x<=8) && (y>4)));//1
	puts("\n");
	
	printf("%s%d","!((i>4) || (j<=6)) = ",!((i>4) || (j<=6)));//0
	puts("");
	printf("%s%d","!(i>4) && !(j<=6) = ",!(i>4) && !(j<=6));//0
	
	return 0;
}
