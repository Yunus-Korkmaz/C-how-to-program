/*
	Name:		  6.24_d.c
	Author:       Yunus Korkmaz
	Date:		  25.07.20 19:58
	Description:  d) Write a version of the Knight’s Tour program which, when encountering a tie between
					two or more squares, decides what square to choose by looking ahead to those squares
					reachable from the “tied” squares. Your program should move to the square for which
					the next move would arrive at a square with the lowest accessibility number.
*/

#include<stdio.h>

	int currentRow=3;			
	int currentColumn=4;

int play_horse(int board[][8],int const horizontal[],int const vertical[],int accessibility[][8]);

int main(void){
	
	int board[8][8]={0};
	int accessibility[8][8]={{2, 3, 4, 4, 4, 4, 3, 2},
							{3, 4, 6, 6, 6, 6, 4, 3},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{4, 6, 8, 8, 8, 8, 6, 4},
							{3, 4, 6, 6, 6, 6, 4, 3},
							{2, 3, 4, 4, 4, 4, 3, 2}};
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

		i++;
		
	}while(play_horse(board,horizontal,vertical,accessibility)==1);
	
	printf("%s%d","Total number of movement is ",i-1);
	
}
int play_horse(int board[][8],int const horizontal[],int const vertical[],int accessibility[][8]){
		
	
	size_t i;	
	
	int keep_moves[8];// keep the moves accesibility in correct places (asume that 5th moves and accesibility is 8 so keep_moves[5]=8)
	
	for(i=0;i<8;i++)
		keep_moves[i]=-1;
		
	int flag=0;
	
	for(i=0;i<8;i++){
		
	if( currentRow + vertical[i] <8 && currentRow + vertical[i] >=0 && currentColumn + horizontal[i]<8 && currentColumn + horizontal[i]>=0) // this if check the board limits
	if(board[currentRow + vertical[i]][currentColumn + horizontal[i]] != 1){	// and this if check the previus movements
		keep_moves[i]=accessibility[currentRow + vertical[i]][currentColumn + horizontal[i]]; // keep the possible moves in keep_moves[] array 
		flag=1; // for the base case if flag is zero program didn' enter this block it means all posible moves is over
		}
	}
	
	if(flag!=1)
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
	
	
	
	
	int less_accessible_squares[8]={0}; //  we gather them what are same with less_accessible ,for select one of them
	size_t control=0;
	
	for(i=0;i<8;i++){		
		
		if(keep_moves[i]!=-1) // 0 is the initial value of this array
		if(less_accessible==keep_moves[i]){

			less_accessible_squares[control]=i;
			control++;
				}
	
	}


	int j,k,m,n;
	int compare_accesibility=9;// we will find the accesibility of the next moves and compare them using this variable
	int exact_move;	// keep moves in this variable
	int fake_Row;	// next moves row
	int fake_Column; // next moves column
	int fake_accessibility[8][8];
	
	
	if(control<2)	// if the posible moves with less accesbility is 1 no need to control it
	exact_move=less_accessible_squares[0];
	else
	for(j=0;j<control;j++){
				
		fake_Row=currentRow+vertical[less_accessible_squares[j]];         // create next moves row 
		fake_Column=currentColumn+horizontal[less_accessible_squares[j]];	// create next moves row 
		
		for(m=0;m<8;m++){ // copy the accesiblity table 
		for(n=0;n<8;n++)
			fake_accessibility[m][n]=accessibility[m][n];	
		}
		
		
		for(k=0;k<8;k++){ // create the new accessibility table depent on next moves
		
		if( fake_Row + vertical[k] <8 && fake_Row + vertical[k] >=0 && fake_Column + horizontal[k]<8 && fake_Column + horizontal[k]>=0) // this is check the board limits
		if(board[fake_Row + vertical[k]][fake_Column + horizontal[k]] != 1){	// and this is check the previus movements
			
		fake_accessibility[fake_Row + vertical[k]][fake_Column + horizontal[k]]--;
		
		}
	}
		
				
		for(i=0;i<8;i++){ // find the next moves and compare them with theys accessibility
			
			if( fake_Row + vertical[i] <8 && fake_Row + vertical[i] >=0 && fake_Column + horizontal[i]<8 && fake_Column + horizontal[i]>=0) // this is check the board limits
			if(board[fake_Row + vertical[i]][fake_Column + horizontal[i]] != 1){	// and this is check the previus movements
			
			
			if(compare_accesibility>accessibility[fake_Row + vertical[i]][fake_Column + horizontal[i]]){// compare and find the less accesbilitiy squares move
			
			compare_accesibility=accessibility[fake_Row + vertical[i]][fake_Column + horizontal[i]]; // change the compare_accesibility
			exact_move=less_accessible_squares[j];	// save the movement
				}
			}
			
		}
		
	}	
	
	
	// do the movement
	board[currentRow + vertical[exact_move]][currentColumn + horizontal[exact_move]]++;	
	currentRow += vertical[ exact_move ];
	currentColumn += horizontal[ exact_move ];
	
	
	// change the accessiblity of other squares
	for(i=0;i<8;i++){
		
	if( currentRow + vertical[i] <8 && currentRow + vertical[i] >=0 && currentColumn + horizontal[i]<8 && currentColumn + horizontal[i]>=0) // this is check the board limits
	if(board[currentRow + vertical[i]][currentColumn + horizontal[i]] != 1){	// and this is check the previus movements
			
		accessibility[currentRow + vertical[i]][currentColumn + horizontal[i]]--;
		
		}
	}
	
	return 1;
		
}

