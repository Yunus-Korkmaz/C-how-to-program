/*
	Name:		  5.52.c
	Author:       Yunus Korkmaz
	Date:		  16.07.20 19:31
	Description:  (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated
					computer-assisted instruction systems monitor the student’s performance over a period of time. The
					decision to begin a new topic is often based on the student’s success with previous topics. Modify
					the program of Exercise 5.51 to count the number of correct and incorrect responses typed by the
					student. After the student types 10 answers, your program should calculate the percentage that are
					correct. If the percentage is lower than 75%, display "Please ask your teacher for extra help.",
					then reset the program so another student can try it. If the percentage is 75% or higher, display
					"Congratulations, you are ready to go to the next level!", then reset the program so another
					student can try it.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float questions=1,true_questions=0;

void multiplication(void);
void plus(void);
void subtraction(void);
void divide(void);
void responses(int x);

int main(void){
	
	srand(time(NULL));
	int i;
	
	while(1){
		printf("============================ Question %.0f ================================",questions);
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
		
		
		
		if(questions==10){
			
			if(true_questions<questions*0.75)
				puts("Please ask your teacher for extra help.\n\n\n");
			else
				puts("Congratulations, you are ready to go to the next level!\n\n\n\n\n");
			
			questions=0;
			true_questions=0;
		}	
		
		questions++;
		
	}while(1);
	
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
	
	int control=0;
	
	int x=rand()%10;
	int y=rand()%10;
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," times ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x*y){
			responses(0);
			control=-1;	
		}
		else{
			responses(1);
			control++;
		}
		
	}while(result!=x*y);
	
	if(control==1)
		true_questions++;
	
}
void plus(void){
	
	int control=0;
	
	int x=rand()%100;
	int y=rand()%100;
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," plus ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x+y){
			responses(0);
			control=-1;	
		}
		else{
			responses(1);
			control++;
		}
		
	}while(result!=x+y);
	
	if(control==1)
		true_questions++;
	
}
void subtraction(void){
	
	int control=0;
	
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
		
		if(result!=x-y){
			responses(0);
			control=-1;	
		}
		else{
			responses(1);
			control++;
		}
		
	}while(result!=x-y);
	
	if(control==1)
		true_questions++;
	
}
void divide(void){
	
	int control=0;
	
	int x=1+rand()%10;
	int y=1+rand()%10;
	
	x=x*y;
		
	
	
	int result;
	printf("%s%d%s%d%s","\nHow much is ",x," over ",y,"?\n");
	
	do{
		
		
		scanf("%d",&result);
		
		if(result!=x/y){
			responses(0);
			control=-1;	
		}
		else{
			responses(1);
			control++;
		}
		
	}while(result!=x/y);
	
	if(control==1)
		true_questions++;
	
}
