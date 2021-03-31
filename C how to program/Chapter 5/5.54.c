/*
	Name:
	Author:       Yunus Korkmaz
	Date:
	Description:  a
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

float questions=1,true_questions=0;
int difficulty_level;

void multiplication(void);
void plus(void);
void subtraction(void);
void divide(void);
void responses(int x);

int main(void){
	
	srand(time(NULL));
	int i,hardist;
	
	do{
	puts("Enter \"1\" for level 1 (for primary school):");  // numbers between 0 - 10
	puts("Enter \"2\" for level 2 (for secondary school):"); // numbers between 10 - 100
	puts("Enter \"3\" for level 3 (for high school):"); // numbers between 100 - 1000
	printf("%s","Please enter difficulty level (1-3):");
	
	scanf("%d",&difficulty_level);
	
	}while(difficulty_level<0 || difficulty_level>3);
	
	puts("");
	
	do{
	puts("Enter \"1\" for multiplication problems:");
	puts("Enter \"2\" for addition problems:");
	puts("Enter \"3\" for subtraction problems:");
	puts("Enter \"4\" for partition problems :");
	printf("%s","Please enter difficulty level (1-4):");
	
	scanf("%d",&i);
	
	}while(i<1 || i>4);
	
	puts("\n");
	
	while(1){
		printf("============================ Question %.0f ================================",questions);
		
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
	
	int x=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	int y=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	
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
	
	int x=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	int y=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	
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
	
	int x=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	int y=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	
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
	
	int x=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	int y=(pow(10,difficulty_level-1))+rand()%(int)(pow(10,difficulty_level));
	
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

