/*
	Name:		  6.26.c
	Author:       Yunus Korkmaz
	Date:		  03.08.20 21:17
	Description:  (Eight Queens) Another puzzler for chess buffs is the Eight Queens problem. Simply stated:
					Is it possible to place eight queens on an empty chessboard so that no queen is “attacking” any 
					other—that is, so that no two queens are in the same row, the same column, or along the same diagonal?
					Use the kind of thinking developed in Exercise 6.24 to formulate a heuristic for solving the Eight
					Queens problem. Run your program. [Hint: It’s possible to assign a numeric value to each square
					of the chessboard indicating how many squares of an empty chessboard are “eliminated” once a
					queen is placed in that square. For example, each of the four corners would be assigned the value
					22, as in Fig. 6.27.]
					Once these “elimination numbers” are placed in all 64 squares, an appropriate heuristic might
					be: Place the next queen in the square with the smallest elimination number. Why is this strategy
					intuitively appealing?
*/


								// My code doensn't correct or heuristic solving doesn't work 
								// Code only place seven queen 
#include<stdio.h>
	
	int currentRow;			
	int currentColumn;

int play_queens(int board[][8],int accessibility[][8]);
void recalculate_accessibility(int board[][8],int accessibility[][8]); // calculate the accessibility of board squares
void print(int accessibility[][8]);

int main(void){
	
	int board[8][8]={0};
	
	int accessibility[8][8];
	
	recalculate_accessibility(board,accessibility);
						 
	int i;
		puts("First accesibility table:");
		print(accessibility);
		
		puts("\n");
		
		
		for(i=0;play_queens(board,accessibility)==1;i++){
			
		
		printf("%-10s%-10s%s","Movement","Row","Column");	
		puts("");
		printf("%-10d%-10d%d",i+1,currentRow,currentColumn);
		puts("");
		puts("Accessibility Table :");
		print(accessibility);
		puts("Chess Board :");
		print(board);
			
		puts("-----------------------------\n");
		
		}
		
		
	return 0;
}
int play_queens(int board[][8],int accessibility[][8]){
	
	int i,j,m,n;
	int flag=0;
	
	int keep_moves[64][3]; // keep the posible moves accessibility in keep_moves[i][0] , row cordinate in keep_moves[i][1] and column cordinate keep_moves[i][2]
	size_t control=0; // count the number of posible moves
	
	for(i=0;i<64;i++){
		keep_moves[i][0]=0; // 
	}
	
	for(i=0;i<8;i++)	// control the all squares of board for posible moves
		for(j=0;j<8;j++)
			if(board[i][j]==0){ 
					keep_moves[control][0]=accessibility[i][j];
					keep_moves[control][1]=i;
					keep_moves[control][2]=j;
					control++;
					flag=1; // if flag is zero means all posible moves is over
				}
				
				if(flag==0)
					return 0;
	
	
	int find_min=keep_moves[0][0]; // to find the smallest accesibility number 
	int cordinate[2]; // keep the cordinates
	
	cordinate[0]=keep_moves[0][1]; 
	cordinate[1]=keep_moves[0][2];
	
		
	for(i=0;i<control;i++)	// this loop find the smallest accessibility number
		if(keep_moves[i][0]!=0)
			if(keep_moves[i][0]<find_min){
				find_min=keep_moves[i][0];
				cordinate[0]=keep_moves[i][1];
				cordinate[1]=keep_moves[i][2];

			}
			
				// our cordinates are cordinate[0] and cordinate[1]
				// now we need to mark the chess board 
			
				for(j=0;j<8;j++){ // mark the board's row and column
					board[cordinate[0]][j]=1;
					board[j][cordinate[1]]=1;
					
				}
			
			
				
			if(cordinate[1]>cordinate[0]){ // find the left top beginning of diagonal
				n=cordinate[1]-cordinate[0];
				m=cordinate[0]-cordinate[0];
			}
			else{
				m=cordinate[0]-cordinate[1];
				n=cordinate[1]-cordinate[1];
			}

		
				for(m,n;m<8 && n<8;m++,n++){ // mark the left diogonal 
					board[m][n]=1;
				}
				
				
			if(cordinate[0]>7-cordinate[1]){// find the rigt top beginning of diagonal
				
				m=cordinate[0]-(7-cordinate[1]);
				n=cordinate[1]+(7-cordinate[1]);			
								
			}
			else{
				m=cordinate[0]-cordinate[0];
				n=cordinate[1]+cordinate[0];
			}

			
			for(m,n;m<8 && n>=0;m++,n--){// mark the right diogonal
				board[m][n]=1;	
			}
				
			recalculate_accessibility(board,accessibility);	// recalculate accessibility of board
	
				currentRow=cordinate[0];
				currentColumn=cordinate[1];
				
				
				
				
				return 1;

}
void recalculate_accessibility(int board[][8],int accessibility[][8]){
	
	int cordinate[2];
	int i,j,counter; // counter is accessiblity number of current squares 	
	int m,n;
	
	
		for(i=0;i<8;i++){  // test all squares 
			for(j=0;j<8;j++){ // this code block is prety same with marking code block
			
			int track[8][8]={0}; // using this table to keep marking squares for not mark and count again 
		counter=0;
		cordinate[0]=i;
		cordinate[1]=j;
			
			

				for(n=0;n<8;n++){
					if(board[cordinate[0]][n]!=1 && track[cordinate[0]][n]==0){
					counter++;	
					track[cordinate[0]][n]=1;
					}
					
					
					if( board[n][cordinate[1]]!=1 && track[n][cordinate[1]]==0){
						counter++;
						track[n][cordinate[1]]=1;
					}
					
					
				}
				
				
			if(cordinate[1]>cordinate[0]){
				n=cordinate[1]-cordinate[0];
				m=cordinate[0]-cordinate[0];
			}
			else{
				m=cordinate[0]-cordinate[1];
				n=cordinate[1]-cordinate[1];
			}

				for(m,n;m<8 && n<8;m++,n++){
					if(board[m][n]!=1 && track[m][n]==0 ){
						counter++;
						track[m][n]=1;
					}
					
				}

				
			if(cordinate[0]>7-cordinate[1]){
				
				m=cordinate[0]-(7-cordinate[1]);
				n=cordinate[1]+(7-cordinate[1]);			
								
			}
			else{
				m=cordinate[0]-cordinate[0];
				n=cordinate[1]+cordinate[0];
			}
			
			for(m,n;m<8 && n>=0;m++,n--){
				if(board[m][n]!=1 && track[m][n]==0 ){
					counter++;
					track[m][n]=1;
				}
					
					
			}
			
			accessibility[i][j]=counter;
			
		}
	}
	
}
void print(int accessibility[][8]){
	
	int m,n;
	
	for(m=0;m<8;m++){
		for(n=0;n<8;n++)
			printf("%3d",accessibility[m][n]);
		puts("");
		
	}
}
