/*
	Name:         (Maze Traversal) The following grid is a double-subscripted array representation of a maze.
	Author:       Yunus Korkmaz
	Date:		  
	Description: The # symbols represent the walls of the maze, and the periods (.) represent squares in the possible
					paths through the maze. 
					There’s a simple algorithm for walking through a maze that guarantees finding the exit
					(assuming there’s an exit). If there’s not an exit, you’ll arrive at the starting location again. Place
					your right hand on the wall to your right and begin walking forward. Never remove your hand
					from the wall. If the maze turns to the right, you follow the wall to the right. As long as you do not
					remove your hand from the wall, eventually you’ll arrive at the exit of the maze. There may be a
					shorter path than the one you have taken, but you’re guaranteed to get out of the maze
					Write recursive function mazeTraverse to walk through the maze. The function should
					receive as arguments a 12-by-12 character array representing the maze and the starting location of
					the maze. As mazeTraverse attempts to locate the exit from the maze, it should place the character
					X in each square in the path. The function should display the maze after each move so the user can
					watch as the maze is solved 
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

void left_hand_rule(char (*maze)[12],int x,int y,direction_list* d1);
direction_list* turn_left(char (*maze)[12],int* x,int* y,direction_list* d1);
int go_straight(char (*maze)[12],int* x,int* y,direction_list* d1);
direction_list* turn_right(char (*maze)[12],int* x,int* y,direction_list* d1);
direction_list* turn_back(direction_list* d1);


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


int main(void){
	
	int x=0,y=2;
	
	char maze[][12]={ '#','#','#','#','#','#','#','#','#','#','#','#',
	
					'#','.','.','.','#','.','.','.','.','.','.','#',
					
					'.','.','#','.','#','.','#','#','#','#','.','#',
					
					'#','#','#','.','#','.','.','.','.','#','.','#',
					
					'#','.','.','.','.','#','#','#','.','#','.','.',
					
					'#','#','#','#','.','#','.','#','.','#','.','#',
					
					'#','.','.','#','.','#','.','#','.','#','.','#',
					
					'#','#','.','#','.','#','.','#','.','#','.','#',
					
					'#','.','.','.','.','.','.','.','.','#','.','#',
					
					'#','#','#','#','#','#','.','#','#','#','.','#',
					
					'#','.','.','.','.','.','.','#','.','.','.','#',
					
					'#','#','#','#','#','#','#','#','#','#','#','#',
				
	};
	
		
	direction_list* d1=list_cosntructor();

	left_hand_rule(maze,x,y,d1);
}

void left_hand_rule(char (*maze)[12],int x,int y,direction_list* d1){
	
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
		d1=turn_back(d1);								// if you cant do none of them turn back (180 degree)
	
			
	printf("x=%d y=%d %s \n",x,y,d1->name);				// show current position and direction
	
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
			printf("%c ",maze[i][j]);
		
		puts("");
	}
	
	puts("\n");
	
	sleep(1);
	system("cls");
	
	left_hand_rule(maze,x,y,d1);                       // continue solving maze for recalling function
	
}
direction_list* turn_left(char (*maze)[12],int* x,int* y,direction_list* d1){
	
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
int go_straight(char (*maze)[12],int* x,int* y,direction_list* d1){
	
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
direction_list* turn_right(char (*maze)[12],int* x,int* y,direction_list* d1){
	
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

direction_list* turn_back(direction_list* d1){
	
	 d1=d1->next->next;  // turn back . for exaple east to west 
	 return d1;
}
