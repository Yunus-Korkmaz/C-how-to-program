/*
	Name:		  6.34.c
	Author:       Yunus Korkmaz
	Date:		  20.08.20 14:29
	Description:  (Eight Queens) Modify the Eight Queens program you created in Exercise 6.26 to solve the
					problem recursively.
*/

#include<stdio.h>

					// I didn't use heuristic method 
					// I used backtracking technique 
					// because I am not sure about heuristic method work well
					
					// backtracking not a good solution for the program performance but you can easily code and understand

int solution_number=1;

void backtracking(int board[][8],int row);
void print(int solution[][8]);
int is_okey(int solution[][8]);


int main(void){
	
	int board[8][8]={0};
	
	backtracking(board,0);
	
}
void backtracking(int board[][8],int row){
	
	int cloumn=0;
	
	if(row==8){
		print(board);
		puts("");
	}	
	
	else
	while(cloumn<8){
		board[row][cloumn]=1;	
		
		if(is_okey(board)){

			backtracking(board,row+1);			
		}
		
		board[row][cloumn]=0;
			
		cloumn++;
	}
	
	return;
}
int is_okey(int solution[][8]){ // test the current solution
								// test all queens
		int i,j,m,n;	
		
		int x,y;
		
		int cordinate[2];
		
		for(i=0;i<64;i++){
			
			x=(i-1)/8;
			y=(i-1)-8*x;
		
		if(solution[x][y]==1){ // test cordinates are queen or not 
			cordinate[0]=x;		// if square is a queen test it 
			cordinate[1]=y;
			
			
		for(j=0;j<8;j++){ // test row and column
		
				if(j!=cordinate[1])
					if(solution[cordinate[0]][j]==1)
						return 0;
				if(j!=cordinate[0])
					if(solution[j][cordinate[1]]==1)
						return 0;
					
				}
			
				
			if(cordinate[1]>cordinate[0]){ // find the left top beginning of diagonal
				n=cordinate[1]-cordinate[0];
				m=cordinate[0]-cordinate[0];
			}
			else{
				m=cordinate[0]-cordinate[1];
				n=cordinate[1]-cordinate[1];
			}

		
				for(m,n;m<8 && n<8;m++,n++){ // test the left diogonal 
					
					if(cordinate[0]!=m || cordinate[1]!=n)
						if(solution[m][n]==1)
							return 0;
				}
				
				
			if(cordinate[0]>7-cordinate[1]){// find the rigt top beginning of diagonal
				
				m=cordinate[0]-(7-cordinate[1]);
				n=cordinate[1]+(7-cordinate[1]);			
								
			}
			else{
				m=cordinate[0]-cordinate[0];
				n=cordinate[1]+cordinate[0];
			}

			
			for(m,n;m<8 && n>=0;m++,n--){// test the right diogonal
			
				if(cordinate[0]!=m || cordinate[1]!=n)
					if(solution[m][n]==1)
						return 0;	
			}
			}
			
	}
	
			return 1; // if everthing is normal return 1
}
void print(int solution[][8]){
	
	int i,j;
	
	printf("%s%d","Solution ",solution_number);
	puts("");
	solution_number++;
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++)
			printf("%2d",solution[i][j]);
		puts("");
	}
	return ;
}
