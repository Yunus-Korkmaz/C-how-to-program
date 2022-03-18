/*
	Name:         (Generating Mazes Randomly)
	Author:       Yunus Korkmaz
	Date:		  
	Description: 	(Generating Mazes Randomly) Write a function mazeGenerator that takes as an argument
					a double-subscripted 12-by-12 character array and randomly produces a maze. The function should
					also provide the starting and ending locations of the maze. Try your function mazeTraverse from
					Exercise 7.22 using several randomly generated mazes.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct direction_list{
	
	char name[5];
	int  num;
	struct direction_list *next;
	struct direction_list *prev;
	
};

typedef struct direction_list direction_list;

void left_hand_rule(char *maze[12],int x,int y,direction_list* d1);
direction_list* turn_left(char *maze[12],int* x,int* y,direction_list* d1);
int go_straight(char *maze[12],int* x,int* y,direction_list* d1);
direction_list* turn_right(char *maze[12],int* x,int* y,direction_list* d1);
direction_list* turn_back(direction_list* d1);
direction_list* list_cosntructor();
	
												// add maze_generation program functions
void maze_generator(char *[],int* x ,int* y);
int select_cell(char* maze[],int* x,int* y);
int control(char* maze[],int x,int y);

int visited[144][2]={};
int counter=0;



int main(void){
	
	char *maze[12]; // maze po to 12 other pointer 
	
	srand(time(NULL));
	
	int x=rand()%11,y=rand()%11;
	
	
	int i,j;
	
	
	for(i=0;i<12;i++){
		maze[i]=(char*)malloc(sizeof(char)*12);
			for(j=0;j<12;j++)
				maze[i][j]='#';
	}
	
	
	maze_generator(maze,&x,&y);
	
	while(maze[i=rand()%11][1]=='#');
	while(maze[j=rand()%11][10]=='#');
	
	printf("i=%d,j=%d",i,j);
	maze[i][0]='.';
	maze[j][11]='.';
	
	x=0;y=i;
	
	puts("");
	
	for(i=0;i<12;i++){
		puts("");
		for(j=0;j<12;j++)
			printf("%c ",maze[i][j]);
	}
	

		
	
		printf("START TO SOLVÝN\n\n");
		sleep(2);
		system("cls");
		
	direction_list* d1=list_cosntructor();

	left_hand_rule(maze,x,y,d1);
}

void left_hand_rule(char *maze[12],int x,int y,direction_list* d1){
	
	int i,j;

	printf("x=%d y=%d %s \n",x,y,d1->name);				// show current position and direction
	
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
			printf("%c ",maze[i][j]);
		
		puts("");
	}
	
	puts("\n");	

	
	
	maze[y][x]='x';	
	
	
	
	if(x==11 || y==11)
		return ;

	direction_list* test=NULL;
		          											// left hand algorithm for maze solving
	if((test=turn_left(maze,&x,&y,d1))!=NULL)			// turn left and go for 1 square
		d1=test;										
		
	else if(go_straight(maze,&x,&y,d1)!=0)	;			// if you cant turn left go straight
		
	else if((test=turn_right(maze,&x,&y,d1))!=NULL)     // if cant turn left and go straight turn right and go for 1 square 
		d1=test;
		
	else
		d1=turn_back(d1);
		
	
										// if you cant do none of them turn back (180 degree)
	
			
	
	
	
	for(i=0;i<200000000;i++);
	system("cls");
	
	left_hand_rule(maze,x,y,d1);                       // continue solving maze for recalling function
	
}
direction_list* turn_left(char *maze[12],int* x,int* y,direction_list* d1){
	
	direction_list* iter=d1;
	
	if(strcmp(d1->name,"east")==0 && *y-1>=0 && maze[*y-1][*x]!='#'){ // we need to use strcmp for comparea a string and array which used in struct type 
	
		d1=d1->next;
		*y-=1;
		
	}
	else if(strcmp(d1->name,"north")==0 && *x-1>=0 && maze[*y][*x-1]!='#'){ // if our direction is north what we need for turn left x-1 ,y 
		d1=d1->next;	
		*x-=1;																			// do other with same logic
	}
	else if (strcmp(d1->name,"west")==0 && *y+1<12 && maze[*y+1][*x]!='#'){
		d1=d1->next;
		*y+=1;
	}
	else if (strcmp(d1->name,"south")==0 && *x+1<12 && maze[*y][*x+1]!='#'){
		d1=d1->next;
		*x+=1;
	}
	
	if(iter!=d1)  // if direction change returns it 
		return d1; 
	else 
		return NULL;
	
}
int go_straight(char *maze[12],int* x,int* y,direction_list* d1){
	
		int first_x=*x;
		int first_y=*y;
		
	if(strcmp(d1->name,"east")==0 && *x+1<12 && maze[*y][*x+1]!='#')  // if our direction is east what we need for turn left x+1 ,y 
		*x+=1;																		// do other with same logic
	else if(strcmp(d1->name,"north")==0 && *y-1>=0 && maze[*y-1][*x]!='#')
		*y-=1;
	else if(strcmp(d1->name,"west")==0 && *x-1>=0 && maze[*y][*x-1]!='#')
		*x-=1;
	else if(strcmp(d1->name,"south")==0 && *y+1<12 && maze[*y+1][*x]!='#')
		*y+=1;
		
		
		if(first_x!=*x || first_y!=*y) // if samething change return 1
			return 1;
		else 
			return 0;
}
direction_list* turn_right(char *maze[12],int* x,int* y,direction_list* d1){
	
	direction_list* iter=d1;
	
	if(strcmp(d1->name,"east")==0 && *y+1<12 && maze[*y+1][*x]!='#'){ // if our direction is east what we need for turn right x ,y+1 
		d1=d1->prev;																// do other with same logic
		*y+=1;		
	}
	else if(strcmp(d1->name,"north")==0 && *x+1<12 && maze[*y][*x+1]!='#'){
		d1=d1->prev;
		*x+=1;
	}
	else if (strcmp(d1->name,"west")==0 && *y-1>=0 && maze[*y-1][*x]!='#'){
		d1=d1->prev;
		*y-=1;
	}
	else if (strcmp(d1->name,"south")==0 && *x-1>=0 && maze[*y][*x-1]!='#'){
		d1=d1->prev;
		*x-=1;
	}
	
			if(iter!=d1)
		return d1;
	else 
		return NULL;
}
direction_list* list_cosntructor(){
	
	direction_list *d1=(direction_list*)malloc(sizeof(direction_list));
	
	direction_list *iter=d1;
	direction_list *prev_iter=d1;
	
	strcpy(iter->name,"east"),iter->num=0;
	iter->next=(direction_list*)malloc(sizeof(direction_list));
	iter->prev=NULL;

	iter=iter->next;

	strcpy(iter->name,"north"),iter->num=1;
	iter->next=(direction_list*)malloc(sizeof(direction_list));
	iter->prev=(direction_list*)malloc(sizeof(direction_list));
	
	iter->prev=prev_iter;
	prev_iter=prev_iter->next;
	iter=iter->next;
	
	strcpy(iter->name,"west"),iter->num=2;
	iter->next=(direction_list*)malloc(sizeof(direction_list));
	iter->prev=(direction_list*)malloc(sizeof(direction_list));
	
	iter->prev=prev_iter;
	prev_iter=prev_iter->next;
	iter=iter->next;
	
	strcpy(iter->name,"south"),iter->num=3;
	iter->next=(direction_list*)malloc(sizeof(direction_list));
	iter->prev=(direction_list*)malloc(sizeof(direction_list));
	
	iter->prev=prev_iter;
	iter->next=d1;
	d1->prev=iter;
	
	return d1;
	
}


direction_list* turn_back(direction_list* d1){
	
	 d1=d1->next->next;  // turn back . for exaple east to west 
	 return d1;
}
void maze_generator(char *maze[],int* x ,int* y){ 			// 1.)select a random cell and control it for is there any road or maze boundary around the cell
															//,if it is not go next step,->if it is select a different cell , 
															//                               ->if there is no cell which provide the condition return previous cell (from visited list) 
															//									-> if is there no previous cell finish the program
															
															// 2.)mark the cell as a road ,add the cell visited list,repeat step 1
															
	if(counter==-1)  // if there is no remainin cell stop the program ( counter is counter of visited[] list
			return;
	
	int i,j;
	
	for(i=0;i<400000000;i++); // give some time the program for generate random values this time will change your cpu performance 
							  // if you dont give enought time program will generate always same numbers so maze will not look good ,try it
	system("cls");			// clear screen
	
	for(i=0;i<12;i++){    // print maze 
		puts("");
		for(j=0;j<12;j++)
			printf("%c ",maze[i][j]);
	}
	
	
	
	
	
	if(select_cell(maze,x,y)==0){ // select a cell and control it if there is no cell which provide the condition function will return 0
		*x=visited[counter][0];	  // return the previous cell cordinates
		*y=visited[counter][1];
		
		counter--;				// decrease the counter
		
		maze_generator(maze,x,y);
	}	
	else {						// if there is no problem save the cell cordinates as a visited
		
		visited[counter][0]=*x;
		visited[counter][1]=*y;
	
		counter++;
		
		maze_generator(maze,x,y);
	}
		
		
}
int select_cell(char* maze[],int* x,int* y){ // select a random cell and control it for is there any road or maze boundary around the cell
	
	int direction[4]={0,0,0,0}; // represent the directions as number: direction[0]= east ,direction[1]=north , direction[2]=west , direction[3]=south
								// mark the direction by change the values 0 to 1 which tested 
	srand(time(NULL));
	
	int rnd;
	
	int i;
	
	while(1){
	
	if(direction[0]+direction[1]+direction[2]+direction[3]!=4){ // if all direction tested ,total will be 4 then finish the funtion
	
	do{	// generate a random direction which is not tried before
			
		rnd=rand()%4;
		
	}while(direction[rnd]!=0);		
	}
	else
	     return 0;
	
	switch(rnd){
		
		case 0 : // east

				// control the selected cell and around cells for is it within the borders and is it a road	
				if(control(maze,*x+1,*y) && control(maze,*x+1,*y-1) && control(maze,*x+2,*y)  && control(maze,*x+1,*y+1)){
					
					*x+=1;
					maze[*y][*x]='.';
					
					return 1;
					
				}
			
					direction[0]=1;
			break;
		
		case 1 :// north
				
				if(control(maze,*x,*y-1) && control(maze,*x,*y-2) && control(maze,*x-1,*y-1)  && control(maze,*x+1,*y-1)){
					
					*y-=1;
					maze[*y][*x]='.';
					
					return 1;
				}
						
						direction[1]=1;				
			break;
						
		case 2 : // west
											
				if(control(maze,*x-1,*y) && control(maze,*x-1,*y-1) && control(maze,*x-2,*y)  && control(maze,*x-1,*y+1)){
				
					
					*x-=1;
					
					maze[*y][*x]='.';
					
					return 1;
							
				}
			
					direction[2]=1;			
			break;
				
		case 3 : // south			
				
				if(control(maze,*x,*y+1) && control(maze,*x-1,*y+1) && control(maze,*x+1,*y+1)  && control(maze,*x,*y+2)){
					
					*y+=1;
					
					maze[*y][*x]='.';
					
					return 1;
				}	
				
				direction[3]=1;
				
			break;
							
		} 		
	}
}
	
int control(char* maze[],int x,int y){
	
	if(x>11 || y>11 || x<0 || y<0)
		return 0;
		
	if(maze[y][x]=='.')
		return 0;
	
	return 1;
}

