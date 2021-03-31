/*
	Name:		  6.25_a_b.c
	Author:       Yunus Korkmaz
	Date:		  26.07.20 15:39
	Description:  a) Use random number generation to enable the knight to walk around the chess board
					(in its legitimate L-shaped moves, of course) at random. Your program should run one
					tour and print the final chessboard. How far did the knight get?
					b) Most likely, the preceding program produced a relatively short tour. Now modify your
					program to attempt 1,000 tours. Use a single-subscripted array to keep track of the
					number of tours of each length. When your program finishes attempting the 1000
					tours, it should print this information in a tabular format. What was the best result?
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	int currentRow=4;
	int currentColumn=3;
	
#define SIZE 10000

int play_horse(int board[][8],int const horizontal[],int const vertical[]);

int main(void){
	
	srand(time(NULL));
	
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

	int rounds[SIZE];
	int number_ofmoves[64]={0};
		
	int i,j=SIZE,k=0,m,n;
		
	
	while(j>0){
		
		
		for(m=0;m<8;m++)
			for(n=0;n<8;n++)
				board[m][n]=0;
		i=0;		
		
	do{		
		
		
		
		i++;
	}while(play_horse(board,horizontal,vertical)==1);	

	rounds[k]=i-1;
	j--;
	k++;
	
	
	}
	printf("%-25s%-10s","Number of Moves","How many runs finish with it");
	puts("");
	
	for(i=0;i<SIZE;i++){
		number_ofmoves[rounds[i]-1]++;
		
	}
	
	int max=0;
	
	for(i=0;i<64;i++){
		if(number_ofmoves[i]!=0)
		max=i+1;
		
		
		
		printf("%-25d%d",i+1,number_ofmoves[i]);
		puts("");
		
	}
	
	printf("%s%d","Max number of moves ",max);
	
}
int play_horse(int board[][8],int const horizontal[],int const vertical[]){
	
	size_t i,control=0;;
	int posible_moves[8];
	
	for(i=0;i<8;i++){
		
	if( currentRow + vertical[i] <8 && currentRow + vertical[i] >=0 && currentColumn + horizontal[i]<8 && currentColumn + horizontal[i]>=0) // this if check the board limits
	if(board[currentRow + vertical[i]][currentColumn + horizontal[i]] != 1){	// and this if check the privius movements
			
			posible_moves[control]=i; // take the posible moves
			control++;
		}
	}
	
	size_t j;
	
	if(control!=0){
	
	j=rand()%control;	// select one of the posible moves
	
	// do the moves 
	board[currentRow + vertical[posible_moves[j]]][currentColumn + horizontal[posible_moves[j]]]++;	
	currentRow += vertical[ posible_moves[j] ];
	currentColumn += horizontal[ posible_moves[j] ];
		
	
	return 1;
	}
	else
	return 0;
}
