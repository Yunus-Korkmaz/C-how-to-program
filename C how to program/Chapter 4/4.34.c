/*
	Name: 		  4.34.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 20:22
	Description:  Describe the process you would use to replace a do…while loop with an equivalent while
					loop. What problem occurs when you try to replace a while loop with an equivalent do…while
					loop? Suppose you have been told that you must remove a while loop and replace it with a
					do…while. What additional control statement would you need to use and how would you use it to
					ensure that the resulting program behaves exactly as the original?
*/

#include<stdio.h>

int main(void){
	puts("While");
	int i=0;
	while(i<10){
		printf("%d",i);
		i++;
		puts("");
	}
	
	puts("");
	
	puts("Do while");		
	i=0;
	if(i<10)					//we need to add one if statement for control first condition before start loop
	do{
		printf("%d",i);
		i++;
		puts("");
	}while(i<10);
	
	return 0;
}
