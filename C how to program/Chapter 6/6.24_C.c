/*
	Name:		  6.24_b.c
	Author:       Yunus Korkmaz
	Date:		  24.07.20 20:39
	Description:  c) After attempting to write and run a Knight’s Tour program, you have probably developed 
					some valuable insights. We’ll use these to develop a heuristic (or strategy) for moving the knight. 
					Heuristics do not guarantee success, but a carefully developed heuristic
					greatly improves the chance of success. You may have observed that the outer squares
					are in some sense more troublesome than the squares nearer the center of the board. In
					fact, the most troublesome, or inaccessible, squares are the four corners.
					Intuition may suggest that you should attempt to move the knight to the most troublesome 
					squares first and leave open those that are easiest to get to, so that when the
					board gets congested near the end of the tour, there will be a greater chance of success.
					We develop an “accessibility heuristic” by classifying each square according to how
					accessible it is and always moving the knight to the square (within the knight’s L-shaped
					moves, of course) that’s most inaccessible. We label a double-subscripted array accessibility 
					with numbers indicating from how many squares each particular square is accessible. On a blank 
					chessboard, the center squares are therefore rated as 8s, the corner squares
					are rated as 2s, and the other squares have accessibility numbers of 3, 4, or 6 as follows:
							2 3 4 4 4 4 3 2
							3 4 6 6 6 6 4 3
							4 6 8 8 8 8 6 4
							4 6 8 8 8 8 6 4
							4 6 8 8 8 8 6 4
							4 6 8 8 8 8 6 4
							3 4 6 6 6 6 4 3
							2 3 4 4 4 4 3 2
					Now write a version of the Knight’s Tour program using the accessibility heuristic.
					At any time, the knight should move to the square with the lowest accessibility number. 
					In case of a tie, the knight may move to any of the tied squares. Therefore, the tour
					may begin in any of the four corners. [Note: As the knight moves around the chess-
					board, your program should reduce the accessibility numbers as more and more
					squares become occupied. In this way, at any given time during the tour, each available
					square’s accessibility number will remain equal to precisely the number of squares from
					which that square may be reached.] Run this version of your program. Did you get a
					full tour? (Optional: Modify the program to run 64 tours, one from each square of the
					chessboard. How many full tours did you get?)
*/

#include<stdio.h>

	int currentRow=0;			// start with corner
	int currentColumn=0;
							
int play_horse(int board[][8],int const horizontal[],int vertical[],int accessibility[][8]);

int main(void){
	
	int board[8][8]={0};
	int horizontal[8],vertical[8];
	horizontal[ 0 ] = 2;
	horizontal[ 1 ] = 1;
	horizontal[ 2 ] = -1;
	horizontal[ 3 ] = -2;
	horizontal[ 4 ] = -2;
	horizontal[ 5 ] = -1;
	horizontal[ 6 ] = 1;
	horizontal[ 7 ] = 2;
	vertical[ 0 ] = -1;
	vertical[ 1 ] = -2;
	vertical[ 2 ] = -2;
	vertical[ 3 ] = -1;
	vertical[ 4 ] = 1;
	vertical[ 5 ] = 2;
	vertical[ 6 ] = 2;
	vertical[ 7 ] = 1;
	
	int accessibility[8][8]={{2, 3, 4, 4, 4, 4, 3, 2},
							{3, 4, 6, 6, 6, 6, 4, 3},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{3, 4, 6, 6, 6, 6, 4, 3},
							{2, 3, 4, 4, 4, 4, 3, 2}};
		
	int i=0,m,n;
		
		printf("%-10s%-10s%s","Movement","Row","Column");
		puts("");
		
		
	do{
			printf("%-10d%-10d%d",i,currentRow,currentColumn);

			puts("");
			
		
		

		i++;
		
	}while(play_horse(board,horizontal,vertical,accessibility)==1);
	
	printf("%s%d","Total number of movement is ",i-1);
	
}
int play_horse(int board[][8],int const horizontal[],int vertical[],int accessibility[][8]){
	
	int keep_moves[8];
	
	size_t i,j;		
	
	for(i=0;i<8;i++)
		keep_moves[i]=-1;
	
	int flag=0;
	
	for(i=0;i<8;i++){
		
	if( currentRow + vertical[i] <8 && currentRow + vertical[i] >=0 && currentColumn + horizontal[i]<8 && currentColumn + horizontal[i]>=0) // this is check the board limits
	if(board[currentRow + vertical[i]][currentColumn + horizontal[i]] != 1){	// and this is check the previus movements	
		keep_moves[i]=accessibility[currentRow + vertical[i]][currentColumn + horizontal[i]]; // keep the possible movements in keep_moves[] array 
		flag=1; 
		}
	}
	
	if(flag!=1) // for the base case if flag is zero program didn't  enter previous block it means all posible moves is over
	return 0;
	
	int less_accessible=9;  // to find the less accessible square 
	int moves_number=0;	// to keep the movement number
	
	for(i=0;i<8;i++){		
		
		if(keep_moves[i]!=-1) // -1 is the initial value of this array
		if(less_accessible>keep_moves[i]){
			less_accessible=keep_moves[i];
			moves_number=i;
			
		}	
	}
	
	// do the movement
	board[currentRow + vertical[moves_number]][currentColumn + horizontal[moves_number]]++;	
	currentRow += vertical[ moves_number ];
	currentColumn += horizontal[ moves_number ];
	
	
	// change the accessiblity of other squares
	for(i=0;i<8;i++){
		
	if( currentRow + vertical[i] <8 && currentRow + vertical[i] >=0 && currentColumn + horizontal[i]<8 && currentColumn + horizontal[i]>=0) // this is check the board limits
	if(board[currentRow + vertical[i]][currentColumn + horizontal[i]] != 1){	// and this is check the previus movements
			
		accessibility[currentRow + vertical[i]][currentColumn + horizontal[i]]--;
		
		}
	}
	

	// flag is zero all posible movement is over
	
	return 1;
		
}



