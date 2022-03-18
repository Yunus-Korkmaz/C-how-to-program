/*
	Name:		  (Generating Mazes Randomly)
	Author:       Yunus Korkmaz
	Date:
	Description:  generate maze , part of questions 7.23
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void maze_generator(char *[],int* x ,int* y);
int select_cell(char* maze[],int* x,int* y);
int control(char* maze[],int x,int y);

int visited[144][2]={};
int counter=0;



void main(void){
	
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
	
	
	while(maze[i=rand()%12][1]=='#');
	while(maze[j=rand()%12][10]=='#');
	
	maze[i][0]='.';
	maze[j][11]='.';
	
	puts("");
	
	for(i=0;i<12;i++){
		puts("");
		for(j=0;j<12;j++)
			printf("%c ",maze[i][j]);
	}
	
	
	
}


void maze_generator(char *maze[],int* x ,int* y){
	
	if(counter==-1)
			return;
	
	int i,j;
	
	for(i=0;i<400000000;i++);

	system("cls");
	for(i=0;i<12;i++){
		puts("");
		for(j=0;j<12;j++)
			printf("%c ",maze[i][j]);
	}
	
	
	
	
	
	if(select_cell(maze,x,y)==0){
		*x=visited[counter][0];
		*y=visited[counter][1];
		
		counter--;
		
		maze_generator(maze,x,y);
	}
	else {
		
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


