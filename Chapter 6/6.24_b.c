/*
	Name:		  6.24_b.c
	Author:       Yunus Korkmaz
	Date:		  24.07.20 20:39
	Description:  (Knight’s Tour) One of the more interesting puzzlers for chess buffs is the Knight’s Tour
					problem, originally proposed by the mathematician Euler. The question is this: Can the chess piece
					called the knight move around an empty chessboard and touch each of the 64 squares once and only
					once? We study this intriguing problem in depth here.
					
						I couldn' add the picture 6.26 ,the picture show and give a number the knight moves
						
					The knight makes L-shaped moves (over two in one direction and then over one in a perpendicular direction). 
					Thus, from a square in the middle of an empty chessboard, the knight can
					make eight different moves (numbered 0 through 7) as shown in Fig. 6.26.
					a) Draw an 8-by-8 chessboard on a sheet of paper and attempt a Knight’s Tour by hand.
					Put a 1 in the first square you move to, a 2 in the second square, a 3 in the third, and so
					on. Before starting the tour, estimate how far you think you’ll get, remembering that a
					full tour consists of 64 moves. How far did you get? Were you close to the estimate?
					b) Now let’s develop a program that will move the knight around a chessboard. The board
					itself is represented by an 8-by-8 double-subscripted array board. Each square is initialized to zero. 
					we describe each of the eight possible moves in terms of both its horizontal
					and vertical components. For example, a move of type 0 as shown in Fig. 6.26 consists
					of moving two squares horizontally to the right and one square vertically upward. Move
					2 consists of moving one square horizontally to the left and two squares vertically upward. 
					Horizontal moves to the left and vertical moves upward are indicated with negative numbers. 
					The eight moves may be described by two single-subscripted arrays,
							horizontal and vertical, as follows:
							horizontal[ 0 ] = 2
							horizontal[ 1 ] = 1
							horizontal[ 2 ] = -1
							horizontal[ 3 ] = -2
							horizontal[ 4 ] = -2
							horizontal[ 5 ] = -1
							horizontal[ 6 ] = 1
							horizontal[ 7 ] = 2
							vertical[ 0 ] = -1
							vertical[ 1 ] = -2
							vertical[ 2 ] = -2
							vertical[ 3 ] = -1
							vertical[ 4 ] = 1
							vertical[ 5 ] = 2
							vertical[ 6 ] = 2
							vertical[ 7 ] = 1
					Let the variables currentRow and currentColumn indicate the row and column of the
					knight’s current position on the board. To make a move of type moveNumber, where
					moveNumber is between 0 and 7, your program uses the statements
					currentRow += vertical[ moveNumber ];
					currentColumn += horizontal[ moveNumber ];
					Keep a counter that varies from 1 to 64. Record the latest count in each square the
					knight moves to. Remember to test each potential move to see if the knight has already
					visited that square. And, of course, test every potential move to make sure that the
					knight does not land off the chessboard. Now write a program to move the knight
					around the chessboard. Run the program. How many moves did the knight make?
*/

#include<stdio.h>

	int currentRow=4;
	int currentColumn=3;

int play_horse(int board[][8],int const horizontal[],int const vertical[]);

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

		
	int i=0;
		
		printf("%-10s%-10s%s","Movement","Row","Column");
		puts("");
	do{
			printf("%-10d%-10d%d",i,currentRow,currentColumn);
		puts("");

		i++	;
	}while(play_horse(board,horizontal,vertical)==1);
	
	printf("%s%d","Total number of movement is ",i-1);
	
}
int play_horse(int board[][8],int const horizontal[],int const vertical[]){
	

	
	size_t i;
	
	for(i=0;i<8;i++){
		
	if( currentRow + vertical[i] <8 && currentRow + vertical[i] >=0 && currentColumn + horizontal[i]<8 && currentColumn + horizontal[i]>=0) // this if check the board limits
	if(board[currentRow + vertical[i]][currentColumn + horizontal[i]] != 1){	// and this if check the privius movements

		board[currentRow + vertical[i]][currentColumn + horizontal[i]]++;	
		currentRow += vertical[ i ];
		currentColumn += horizontal[ i ];
		
	
		return 1;
		}
	}
	
	return 0;
}
