/*
	Name: 		  2.28.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:45
	Description:  Distinguish between the terms fatal error and nonfatal error. 
				  Why might you prefer to experience a fatal error rather than a nonfatal error?		  
*/

#include<stdio.h>

int main(void){
	
	puts("Enter an enteger : ");
	int a;
	scanf("%d",&a);
	
	printf("%s%d","two times a = ",a*3);//non destroyer eror
	
	printf("%s%d","over 0 =",a/0);
	
	return 0;
}
