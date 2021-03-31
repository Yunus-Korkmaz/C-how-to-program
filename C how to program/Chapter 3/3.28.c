/*
	Name: 		  3.28.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 23:19
	Description: What does the following program print?
	 
*/
#include <stdio.h>

int main(void)
{
	unsigned int count = 1;
	 while ( count <= 10 )
	 {
	 puts( count % 2 ? "****" : "++++++++" );
	  ++count ;
	 }
	return 0 ;
}
