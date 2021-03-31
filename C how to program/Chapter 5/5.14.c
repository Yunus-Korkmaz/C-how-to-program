/*
	Name: 		  5.14.c
	Author:       Yunus Korkmaz
	Date: 		  26.06.20 13:43
	Description:  For each of the following sets of integers, write a single statement that will print a number
					at random from the set.
					a) 2, 4, 6, 8, 10.
					b) 3, 5, 7, 9, 11.
					c) 6, 10, 14, 18, 22.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int number;
	unsigned int i;
	
	//we just need to find one logical series
	
	puts("2, 4, 6, 8, 10 : rand()%6 * 2 "); //  (1 2 3 4 5) .* (2)  -> 2 4 6 8 10
	printf("100 Numbers \n");				//   rand()%6     *2    -> rand()%6 * 2
	for(i=1;i<=100;i++){ 
		
		
		number= rand()%6 * 2;
		printf("%5d",number);
		
		if((i*10)%100 == i%10) 
		puts("");				
	}
	
	puts("\n");
	puts("3, 5, 7, 9, 11 : rand()%5*2+1  "); // (1 2 3 4 5) .* (2) .+(1)  -> 3 5 7 9 11
	printf("100 Numbers \n");				//   rand()%6     *2     +1   -> rand()%5*2+1 
	for(i=1;i<=100;i++){
		
		number=rand()%5*2+1;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}
	
	puts("\n");
	puts("6, 10, 14, 18, 22 : (1+rand()%5)*4 +2 "); // (1 2 3 4 5) .* (4) .+(2) -> 6 10 14 18 22 
	printf("100 Numbers \n");						//  rand()%6    *4     +2    -> (1+rand()%5)*4 +2
	for(i=1;i<=100;i++){
		
		number=(1+rand()%5)*4 +2 ;
		printf("%5d",number);
		
		if((i*10)%100 == i%10)
		puts("");
	}

	return 0;
}
