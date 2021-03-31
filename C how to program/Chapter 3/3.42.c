/*
	Name: 		  3.42.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 16:48
	Description:  What’s wrong with the following statement? Rewrite it to accomplish what the programmer
					was probably trying to do.
					printf( "%d", ++( x + y ) );
*/

#include<stdio.h>

int main(void){
	
	int x,y;
	x=5;
	y=5;
	
	//printf("%d",++(x+y)); increase and decrease operant only use in basic expressions 
	
	  printf("%d ",++x+y);
	  
	x=5;
	y=5;
	  printf("%d ",1+(x+y));
	  
	  
	x=5;
	y=5;
	int sum=x+y;
	
	  printf("%d ",++sum);
	  
	  //three of them can be use 
	  
	  return 0;
}
