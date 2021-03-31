/*
	Name:		  5.21.c
	Author:       Yunus Korkmaz
	Date:         04.07.20 18:24
	Description:  Use techniques similar to those developed in
					Exercises 5.19–5.20 to produce a program that graphs a wide range of shapes.
*/

#include<stdio.h>

void right_triangle(int size,char syb);
void symmetric_right_triangle(int size,char syb);
void reverse_right_triangle(int size,char syb);
void symmetric_reverse_right_triangle(int size,char syb);
void triangle(int size,char syb);
void reverse_triangle(int size,char syb);
void rhombus(int size,char syb);
void reverse_trapezoid(int size,char syb);
void trapezoid(int size ,char syb);
void square(int size,char syb);
void rectangle(int n_size,int h_size,char syb);
void parallelogram(int n_size,int h_size,char syb);
int choice(void);
void controller(int choice);
int size1_value(void);
int size2_value(void);
char character_value(void);

int main(void){
	
	int i;
	
	do{
		
		i=choice();
		controller(i);
		
		puts("");
	}while(i!=0);
		
	return 0;
}

int choice(void){
	
	int i;
	
	puts("Press \"1\" for draw right triangle :");
	puts("Press \"2\" for draw symmetric right triangle :");
	puts("Press \"3\" for draw reverse right triangle :");
	puts("Press \"4\" for draw symmetric reverse right triangle :");
	puts("Press \"5\" for draw triangle :");
	puts("Press \"6\" for draw reverse triangle :");
	puts("Press \"7\" for draw rhombus :"); 
	puts("Press \"8\" for draw trapezoid:");
	puts("Press \"9\" for draw reverse trapezoid:");
	puts("Press \"10\" for draw squqre :");                                                  
	puts("Press \"11\" for draw rectangle :");                       
	puts("Press \"12\" for draw parallelogrom :");
	puts("Press \"0\" for exit :");
	scanf("%d",&i);
	
	return i;
}
void controller(int choice){
	
	int size1,size2;
	char character;
	
	if(choice>0 && choice<11){
		
		size1=size1_value();
		character=character_value();
	}
	else if(choice>10 && choice<13){
		
		size1=size1_value();
		size2=size2_value();
		character=character_value();
	}
	puts("");
	switch(choice){
		
		case 0:
			break;	
		case 1:
			right_triangle(size1,character);
			break;
			
		case 2:
			symmetric_right_triangle(size1,character);
			break;
			
		case 3:
			reverse_right_triangle(size1,character);
			break;
			
		case 4:
			symmetric_reverse_right_triangle(size1,character);
			break;
			
		case 5:
			triangle(size1,character);
			break;
			
		case 6:
			reverse_triangle(size1,character);
			break;
		
		case 7:
			rhombus(size1,character);
			break;
		
		case 8:
			trapezoid(size1,character);
			break;
			
		case 9:
			reverse_trapezoid(size1,character);
			break;
			
		case 10:
			square(size1,character);
			break;
			
		case 11:
			rectangle(size1,size2,character);
			break;
			
		case 12:
			parallelogram(size1,size2,character);
			break;
			
		default:
			puts("Please enter between 0-12");
	}
}
int size1_value(void){
	
	int value;
	puts("Please enter size (h) :");
	scanf("%d",&value);
			
	return value;
}
int size2_value(void){
	
	int value;
	puts("Please enter size (n) :");
	scanf("%d",&value);
			
	return value;
}
char character_value(void){
	
	char value;
	puts("Please enter fulfilled character :");
	while(getchar()!='\n');
	scanf("%c",&value);
	
	return value;
}


void right_triangle(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
		
		for(j=0;j<i;j++)
			printf("%c",syb);
	puts("");
	}
}
void reverse_right_triangle(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
		
		for(j=0;j<=size-i;j++)
			printf("%c",syb);
	puts("");
	}
}
void symmetric_right_triangle(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
		
		for(j=1;j<=size-i;j++)
			printf("%s"," ");
		
		for(j=0;j<i;j++)
			printf("%c",syb);
			
	puts("");
	
	}
}
void symmetric_reverse_right_triangle(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
		
		for(j=1;j<i;j++)
			printf("%s"," ");
		
		for(j=0;j<=size-i;j++)
			printf("%c",syb);
	puts("");
	}
}
void triangle(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
			
		for(j=1;j<=size-i;j++)
				printf("%s"," ");
				
		for(j=1;j<=i*2-1;j++)
				printf("%c",syb);
				
	puts("");
			
		}
}
void reverse_triangle(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
			
		for(j=1;j<i;j++)
				printf("%s"," ");
				
		for(j=1;j<=(size-i)*2+1;j++)
				printf("%c",syb);
				
	puts("");
			
	}
}
void rhombus(int size,char syb){
	
		int i,j,k=0;
	for(i=1;i<=size;i++){
		
		
		if(i<=(size+1)/2){
			
			for(j=1;j<=(size+1)/2-i;j++)
				printf("%s"," ");
			
			for(j=1;j<=(i*2)-1;j++)
				printf("%c",syb);
		
		}
		else{
			
			for(j=1;j<=k+1;j++)
				printf("%s"," ");
				
				
				
			for(j=1;j<=(size/2-k)*2-1;j++)
				printf("%c",syb);
				
			k++;
		}
			
		puts("");
	}
}
void trapezoid(int size,char syb){//h
	
	int i,j;
	for(i=1;i<=size;i++){
			
		for(j=1;j<=size-i;j++)
				printf("%s"," ");
				
		for(j=1;j<=i*2-1+3;j++)
				printf("%c",syb);
				
	puts("");
			
		}
}
void reverse_trapezoid(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
			
		for(j=1;j<i;j++)
				printf("%s"," ");
				
		for(j=1;j<=(size-i)*2+1+3;j++)
				printf("%c",syb);
				
	puts("");
			
	}
}
void square(int size,char syb){
	
	int i,j;
	for(i=1;i<=size;i++){
		
		for(j=size;j>0;j--)
			printf("%c",syb);
			
		puts("");
		
	}
}
void rectangle(int n_size,int h_size,char syb){
	
		int i,j;
	for(i=1;i<=h_size;i++){
		
		for(j=n_size;j>0;j--)
			printf("%c",syb);
			
		puts("");
		
	}
}
void parallelogram(int n_size,int h_size,char syb){
	
	int i,j;
	for(i=1;i<=h_size;i++){
		
		for(j=1;j<(h_size-i)*2;j++)
			printf("%s"," ");
		
		for(j=n_size;j>0;j--)
			printf("%c",syb);
			
		puts("");
		
	}
	
}
