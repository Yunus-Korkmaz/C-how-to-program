/*
	Name: 		  5.13.c
	Author:       Yunus Korkmaz
	Date: 		  26.06.20 12:52
	Description:  Write statements that assign random integers to the variable n in the following ranges:
					a) 1 ? n ? 2
					b) 1 ? n ? 100
					c) 0 ? n ? 9
					d) 1000 ? n ? 1112
					e) –1 ? n ? 1
					f) –3 ? n ? 11
*/

#include<stdio.h>

int main(void){
	
	// I printed 100 number for each rand fucntion 
	// but in question f 100 number doesn't enough to show all range 
	int number;
	unsigned int i;
	
	puts("1 <= n <= 2 : 1 + rand()%1 ");
	printf("100 Numbers \n");
	for(i=1;i<=100;i++){
		
		
		number=1 + rand()%2;
		printf("%5d",number);
		
		if((i*10)%100 == i%10) // this block equal to [ n=10 if (i==n) puts("") , n+=10; ]
		puts("");				// but differece of this block we didn't use another variable we just use i
	}
	
	puts("\n");
	puts("1 <= n <= 100 : 1 + rand()%100 ");
	printf("100 Numbers \n");
	for(i=1;i<=100;i++){
		
		number=1 + rand()%100;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}
	
	puts("\n");
	puts("0 <= n <= 9 : rand()%10");
	printf("100 Numbers \n");
	for(i=1;i<=100;i++){
		
		number=rand()%10;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}
	
	puts("\n");
	puts("1000 <= n <= 1112 : 1000 + rand()%113");
	printf("100 Numbers \n");
	for(i=1;i<=100;i++){
		
		number=1000 + rand()%113;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}
	
	puts("\n");
	puts("-1 <= n <= 1 : -1 + rand()%3");
	printf("100 Numbers \n");
	for(i=1;i<=100;i++){
		
		number=-1 + rand()%3;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}	
	
	puts("\n");
	puts("-3 <= n <= 11 : -3 + rand()%15");
	printf("100 Numbers \n");
	for(i=1;i<=100;i++){
		
		number=-3 + rand()%15;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}	
	
}
