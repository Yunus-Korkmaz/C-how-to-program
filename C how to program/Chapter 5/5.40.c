/*
	Name:
	Author:       Yunus Korkmaz
	Date:
	Description:  a
*/

#include<stdio.h>

int main(void){
	
	static int count=1;
	
	printf("%d",count);
	puts("");	
	
	count++;
	
	main();
}
