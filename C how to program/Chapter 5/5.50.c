/*
	Name:         5.50.c
	Author:       Yunus Korkmaz
	Date:         16.07.20 18:11
	Description:  (Computer-Assisted Instruction) The use of computers in education is referred to as 
	computer-assisted instruction (CAI). Write a program that will help an elementary school student learn
					multiplication. Use the rand function to produce two positive one-digit integers. The program
					should then prompt the user with a question, such as
							How much is 6 times 7?
					The student then inputs the answer. Next, the program checks the student’s answer. If it’s correct,
					display the message "Very good!" and ask another multiplication question. If the answer is wrong,
					display the message "No. Please try again." and let the student try the same question repeatedly
					until the student finally gets it right. A separate function should be used to generate each new question. 
					This function should be called once when the application begins execution and each time the
					user answers the question correctly. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void multiplication(void);
void plus(void);
void subtraction(void);
void divide(void);

int main(void){
	
	srand(time(NULL));
	int i;
	
	while(1){
		
		i=1+rand()%4;
		
		switch(i){
			
			case 1:			
				multiplication();
				break;
			
			case 2:
				plus();
				break;
				
			case 3:
				subtraction();
				break;
				
			case 4:
				divide();
				break;
				
			default :
				break;
			
		}
		
		puts("");
		puts("You are perfect!");
		
		printf("%s","\n===================================================");
	}
			
	
	return 0;
}
void multiplication(void){
	
	int x=rand()%10;
	int y=rand()%10;
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," times ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x*y)
			puts("Please try again");	
		
	}while(result!=x*y);
	

	
}
void plus(void){
	
	int x=rand()%100;
	int y=rand()%100;
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," plus ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x+y)
			puts("Please try again");	
		
	}while(result!=x+y);
	
}
void subtraction(void){
	
	int x=rand()%100;
	int y=rand()%100;
	
	if(x<y){
		
		x=x*y;		// if x higher than y we need to swap their values
		y=x/y;		// I swap values without using another variable
		x=x/y;
	}
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," minus ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x-y)
			puts("Please try again");	
		
	}while(result!=x-y);
	
}
void divide(void){
	
	int x=1+rand()%10;
	int y=1+rand()%10;
	
	x=x*y;	// x over y need to be an integer so in this way we provide that
			// for example  x=7 y=6 and  x=42   so x/y is an integer
	
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," over ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x/y)
			puts("Please try again");	
		
	}while(result!=x/y);
	
}
