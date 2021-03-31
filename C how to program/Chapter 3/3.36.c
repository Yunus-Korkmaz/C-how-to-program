/*
	Name: 		  3.36.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 15:23
	Description:  (How Fast is Your Computer?) How can you determine how fast your own computer really
				  operates? Write a program with a while loop that counts from 1 to 1,000,000,000 by 1s. Every time
				  the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to
				  time how long each 100 million repetitions of the loop takes.
*/

#include<stdio.h>

int main(void){
	
	unsigned int counter=1;
	
	int i;
	while(counter<=1000000000){
		
		i=1;
		while(i<=10){
			if(counter==100000000*i)
				printf("%s%d\n","Multible of 100 million is ",i);
				i++;
		}
			
		counter++;
	}
	
	return 0;
}
