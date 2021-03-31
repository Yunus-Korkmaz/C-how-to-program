/*
	Name:		  6.23.c
	Author:       Yunus Korkmaz
	Date:		  23.07.20 22:58
	Description:  (Turtle Graphics) The Logo language made the concept of turtle graphics famous. Imagine
					a mechanical turtle that walks around the room under the control of a C program. The turtle holds
					a pen in one of two positions, up or down. While the pen is down, the turtle traces out shapes as it
					moves; while the pen is up, the turtle moves about freely without writing anything. In this problem
					you’ll simulate the operation of the turtle and create a computerized sketchpad as well.
					Use a 50-by-50 array floor which is initialized to zeros. Read commands from an array that
					contains them. Keep track of the current turtle position at all times and whether the pen is 
					currently up or down. Assume that the turtle always starts at position 0, 0 of the floor with its pen up.
					The set of turtle commands your program must process are shown in Fig. 6.25. Suppose that the
					turtle is somewhere near the center of the floor. The following “program” would draw and print a
					12-by-12 square:
									2
									5,12
									3
									5,12
									3
									5,12
									3
									5,12
									1
									6
									9
					As the turtle moves with the pen down, set the appropriate elements of array floor to 1s. When the
					6 command (print) is given, wherever there’s a 1 in the array, display an asterisk, or some other
					character you choose. Wherever there’s a zero, display a blank. Write a program to implement the
					turtle graphics capabilities discussed here. Write several turtle graphics programs to draw interesting shapes.
					 Add other commands to increase the power of your turtle graphics language.
						1 Pen up
						2 Pen down
						3 Turn right
						4 Turn left
						5, 10 Move forward 10 spaces (or a number other than 10)
						6 Print the 50-by-50 array
						9 End of data (sentinel)
*/

#include<stdio.h>
int FLOOR[50][50]={0}; // floor[x][y]  x is row and y is colomn

//         ------------->  y++    (2)    
//        <-------------   y--    (-2)

                   
//		*		   x--		(-1)			  
//	 	*			^			   	  
//		*			*			      
//		*			*				  
//      *           * 
//		v			*				  
//		x++	(1)		*				  
//									  
//    these are how to move the turtle in the floor                              



int direction[4]={2,1,-2,-1}; // these numbers sybol the directions
							  // 1 means goto x rotation and -1 means goto -x rotation
							  // 2 means goto y rotation and -2 means goto -y rotation
							  // these are just symbol the directions ,you can symbol with character instead of numbers
							  
size_t d=0;	// this counter for keep to current direction of turtle 
			// if d is 0 and direction[0] = 2 and turtle's current directions is -y
	
	

int current_position[4]={0,0,2,1}; // this array include 4 different information
								   // current_position[0] represent x cordinate and current_position[1] represent y cordinate tutle start with (0,0) 
								   // current_position[2] represent current direction of turtle , turtle look the right way so urrent_position[2]=2 (y++)
								   // current_position[2] represent the pencil 1 for up and 2 for down 

void change_direction(char way);	// to change the direction, R for turn right and l for turn left

void move_turtle(int size);	// to move the turtle position and sing the ways

void draw(void);	// to print 50 50 floor

void upload_command(int commands[],int move_size[],int choice);	// to store and upload the other turtle commands list

// I define them as global variable because code will be more understandable 

int main(void){
		
		
	
	int commands[50]={0};	// for commands
	int move_size[50]={0};	// for move size of tutle 
							// as you konow command 5 has two parameter one of them is move size and I take it in a different array (move_size) 
	size_t t=0;		// this counter for take it the sizes in a order
	
	
	
	size_t i;
	

	
	upload_command(commands,move_size,2); // 1 for square 2 for plus symnbol
	current_position[0]=0;
	current_position[1]=0;
	current_position[2]=2;
	current_position[3]=1;
	d=0;
	
	
	for(i=0;commands[i]!=9;i++){ 
		
		switch(commands[i]){
			
			case 1:
				current_position[3]=1;
				break;
				
			case 2:
				current_position[3]=2;
				break;
				
			case 3:
				change_direction('R');
				break;
			
			case 4:
				change_direction('L');
				break;
				
			case 5:
				move_turtle(move_size[t]);	
				t++;
				break;
			case 6:
				draw();
				break;
			
		}
	}
	
	
}
void upload_command(int commands[],int move_size[],int choice){	// it just copy the arrays one to other
																// I have two commands 1 for square 2 for plus synmbol
	size_t i;
	
	if(choice==1){
		
		int square_commands[]={2,5,3,5,3,5,3,5,1,6,9};
		int move_square[]={12,12,12,12,0};
		
		// copy the commands
		for(i=0;square_commands[i]!=9;i++)	// copy procces finish with command 9 
			commands[i]=square_commands[i];
			commands[i]=square_commands[i];	// and one more for take command 9
			
		// copy the command 5's sizes
		for(i=0;move_square[i]!=0;i++)	// copy procces finish with command 0 ,
			move_size[i]=move_square[i];
			
	}
	else if(choice==2){
		
		int plus_commands[]={5,2,5,3,5,4,5,3,5,3,5,4,5,3,5,3,5,4,5,3,5,3,5,4,5,6,9};
		int move_plus[]={20,5,5,5,5,5,5,5,5,5,5,5,5,0};
		
		for(i=0;plus_commands[i]!=9;i++)	
			commands[i]=plus_commands[i];
			commands[i]=plus_commands[i];
			
		for(i=0;move_plus[i]!=0;i++)
			move_size[i]=move_plus[i];
		
	}
	
}
void change_direction(char way){ // if you think a litle bit about the cordinates when turtle turn lef or right 
								 // you can easly understand this function
	
	if(way=='r' || way=='R'){
		
		d==3?d=0:d++;
		
		current_position[2]=direction[d];
		
	}
		
		
	else if(way=='l' || way=='L'){
		
		d==0?d=3:d--;		
		current_position[2]=direction[d];
	}
		
}
void move_turtle(int size){	// I didn't control the floor limits, you need to be carefull when enter the tutle commands 
	
	size_t i;
	
	if(current_position[2]==2){ // move turtle depent on the directions (current_position[2])
		
		for(i=0;i<size;i++){
			
			if(current_position[3]==2) // sing the floor depent on the pen sitiation (current_position[3])
			FLOOR[current_position[0]][current_position[1]]++;
			current_position[1]++;
			
		}
	}
	else if(current_position[2]==1){
		
		for(i=0;i<size;i++){
			
			if(current_position[3]==2)
			FLOOR[current_position[0]][current_position[1]]++;
			current_position[0]++;
			
		}
	}
	else if(current_position[2]==-2){
		
			for(i=0;i<size;i++){
			
			if(current_position[3]==2)
			FLOOR[current_position[0]][current_position[1]]++;
			current_position[1]--;
			
		}
		
	}
	else if(current_position[2]==-1){
		
		for(i=0;i<size;i++){
			
			if(current_position[3]==2)
			FLOOR[current_position[0]][current_position[1]]++;
			current_position[0]--;
			
		}
	}
																				// I closed the comment lines 
																				// if you want to watch turtle movement you can open them
//	printf("position x=%d y= %d",current_position[0],current_position[1]);  
//	printf("  direction = %d d=%d\n",current_position[2],d);
	
	return;
}
void draw(void){ 
	
	size_t j,k;
	
	for(j=0;j<50;j++){
		for(k=0;k<50;k++){
			
			if(FLOOR[j][k]!=0)
				printf("%-2s","*");
			else 
				printf("%-2s"," ");
			
		}
		puts("");
	}
	
	return ;
}

