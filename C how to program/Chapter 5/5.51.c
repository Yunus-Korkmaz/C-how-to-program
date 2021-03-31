/*
	Name:		  5.51.c
	Author:       Yunus Korkmaz
	Date:		  16.07.20 18:25
	Description:  (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in CAI environments is student fatigue. 
					This can be reduced by varying the computer’s responses to hold the student’s attention. Modify the program of 
					Exercise 5.50 so that various comments are displayed for each answer as follows:
					Possible responses to a correct answer:
						Very good!
						Excellent!
						Nice work!
						Keep up the good work!
					Possible responses to an incorrect answer:
						No. Please try again.
						Wrong. Try once more.
						Don't give up!
						No. Keep trying.
					Use random-number generation to choose a number from 1 to 4 that will be used to select
					one of the four appropriate responses to each correct or incorrect answer. Use a switch statement to
					issue the responses. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void multiplication(void);
void plus(void);
void subtraction(void);
void divide(void);
void responses(int x);

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
		
		printf("%s","\n===================================================");

	}
	
	return 0;
}
void responses(int x){
	
	int j=1+rand()%4;
		
		switch(j){
			
			case 1:
				if(x==1)
					puts("Very good!");
				else
					puts("No. Please try again.");
				break;
				
			case 2:
				if(x==1)
					puts("Excellent!");
				else
					puts("Wrong. Try once more.");
				break;
				
			case 3:
				if(x==1)
					puts("Nice work!");
				else
					puts("Don't give up!");
				break;
				
			case 4:
				if(x==1)
					puts("Keep up the good work!");
				else 
					puts("No. Keep trying.");
				break;
			
			default:
				break;
		}
		
}
void multiplication(void){
	
	int x=rand()%10;
	int y=rand()%10;
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," times ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x*y)
			responses(0);
		else 
			responses(1);	
		
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
			responses(0);
		else 
			responses(1);	
		
	}while(result!=x+y);
	
}
void subtraction(void){
	
	int x=rand()%100;
	int y=rand()%100;
	
	if(x<y){
		
		x=x*y;
		y=x/y;
		x=x/y;
	}
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," minus ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x-y)
			responses(0);
		else 
			responses(1);	
		
	}while(result!=x-y);
	
}
void divide(void){
	
	int x=1+rand()%10;
	int y=1+rand()%10;
	
	x=x*y;
		
	
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," over ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x/y)
			responses(0);
		else 
			responses(1);	
		
	}while(result!=x/y);
	
}

