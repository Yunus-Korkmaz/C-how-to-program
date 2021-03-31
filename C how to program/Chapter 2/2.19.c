/*
	Name: 		  2.19.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 10:10
	Description:
*/

#include<stdio.h>

int main(void){
	
	printf("Enter three different integer: ");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	printf("%s%d\n","sum is ",a+b+c);
	printf("%s%d\n","average is ",(a+b+c)/3);
	printf("%s%d\n","product is ",a*b*c);
	
	if(a<b){
		if(a<c)
			printf("%d%s",a," is smallest\n");
		if(a>c)
			printf("%d%s",c," is smallest\n");
		if(c<b)
			printf("%d%s",b," is largest\n");
		if(c>b)
			printf("%d%s",c," is largest\n");
	}
	if(a>=b){
		if(a<c)
			printf("%d%s",c," is largest\n");
		if(a>c)
			printf("%d%s",a," is largest\n");
		if(b<c)
			printf("%d%s",b," is smallest\n");
		if(b>c)
			printf("%d%s",c," is smallest\n");
	}
		
	return 0;
}
