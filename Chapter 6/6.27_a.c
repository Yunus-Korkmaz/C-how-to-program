/*
	Name:		  6.27_a.c
	Author:       Yunus Korkmaz
	Date:		  04.08.20 19:22
	Description:  (Eight Queens: Brute-Force Approaches) In this problem you’ll develop several brute-force
					approaches to solving the Eight Queens problem introduced in Exercise 6.26.
					a) Solve the Eight Queens problem, using the random brute-force technique developed in
					Exercise 6.25.
					
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	int currentRow;			
	int currentColumn;

int play_queens(int board[][8]);
int is_over(int board[][8]); // control the board for is all posible moves is over

int main(void){
	
	srand(time(NULL));
	
	int board[8][8];
	int record_solution[8][8];
							 
	int i,j,k=1,m,n;	
	// k is number of games 
	// j is number of attempt
	// i is number of moves 
		
		
		while(i!=8){ // continue until all queens not placed
		
		i=0;
		
		for(m=0;m<8;m++)  // empty the board and solition table for a new game 
			for(n=0;n<8;n++){
				board[m][n]=0;
				record_solution[m][n]=0;
			}
				
		
		while(is_over(board)==0){ // continue until all squares are not threatening
			
		if(play_queens(board)==1){ // if play_queens function place a queen increase i
			i++;
							
		record_solution[currentRow][currentColumn]=1; // and record the current cordinates 	
		}
		
		j++; // increase attemt number 
		
		}
		
		if(i==8){ // if number of moves is 8 it means 8 queens are placed 
			
			printf("%s%d%s%d%s"," 8 Queens placed with ",j," attempt at the end of ",k,"th. game " );
			puts("\n\nSolition:\n");
			
			for(m=0;m<8;m++){	// print the solution		
				for(n=0;n<8;n++)
					printf("%2d",record_solution[m][n]);
					
				puts("");
			}
			
		}
		
		
		
		k++; // increase the number of game 
		}
	
		
		
	return 0;
}
int play_queens(int board[][8]){
	
	int i,j,m,n;
	int flag=0;
		int cordinate[2]; // keep the cordinates
	
		
		i=rand()%8;
		j=rand()%8;
			if(board[i][j]==0){ 
				cordinate[0]=i;
				cordinate[1]=j;
					flag=1; // if flag is zero means all posible moves is over
				}
				
				if(flag==0)
					return 0;
	
	
 
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
				
	
				currentRow=cordinate[0];
				currentColumn=cordinate[1];
				
				
				
				
				return 1;

}
int is_over(int board[][8]){ // control the chees board for empty squares 
	
	int i,j;
	
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			if(board[i][j]==0)
				return 0;
				
		return 1;
}
