/*
	Name:		  6.27_b.c
	Author:       Yunus Korkmaz
	Date:		  09.08.20 14:21
	Description:  (Eight Queens: Brute-Force Approaches) In this problem you’ll develop several brute-force
					approaches to solving the Eight Queens problem introduced in Exercise 6.26.
						b) Use an exhaustive technique (i.e., try all possible combinations of eight queens on the
						chessboard).
*/

#include<stdio.h>

int queen[8]={1,2,3,4,5,6,7,8}; // for keep the queen places
								// for first time we placed them  
int d=1; // solution counter

int play_queens(int board[][8]);
int is_okey(int current_combination[][8]);	// test the current solution
void print_solution(int current_combination[][8]);	 // print solution
int increase_queens(int p,int current_combination[][8]); 

int main(void){
	
	int current_combination[8][8]={0};  // to keep solution
	
	unsigned long long int i=0;
	
	// Eight queens problem has 64!/(56!*8!) ->(4.426.165.368) unique combination
	// how: 
	// we have 64 quare and 8 queens so we can order them -> 64*63*62*61*60*59*58*57 -> 64!/56!
	// and they are can not swap with each other so over 8!
	// program need to work  4.426.165.368 times its prety much but todays computers can do that easly
	
	
	// I printted the current queens position on every full tour to watch the program
	
	//Program exited after 691.4 seconds
	
	puts("Please wait .");
	
	int k=queen[0]; // a variable which will hep us for watch the first queen position for full tour control
	
	while(play_queens(current_combination)){

		i++;
	if(is_okey(current_combination)==1){
		printf("%llu%s",i,".th Combination");
		print_solution(current_combination);
		puts("");
	}
		
	if(k!=queen[0]){ 																				
		printf("%s%d","\n------------------queen[0]=",queen[0]);  // print current position of queen on every full tour
		printf("%s%d","\n------------------queen[1]=",queen[1]);  // just for watch the program
		printf("%s%d","\n------------------queen[2]=",queen[2]);
		printf("%s%d","\n------------------queen[3]=",queen[3]);
		printf("%s%d","\n------------------queen[4]=",queen[4]);
		printf("%s%d","\n------------------queen[5]=",queen[5]);
		printf("%s%d","\n------------------queen[6]=",queen[6]);
		printf("%s%d","\n------------------queen[7]=",queen[7]);
		puts("");
		printf("%llu%s",i,".th Combination\n");
		k=queen[0];		
	}
				
	}
		
		puts("Program ended");
		
	return 0;
}
int play_queens(int current_combination[][8]){
	
	if(increase_queens(7,current_combination)==-1)	// incrase queens and control
		return 0;

	
	int i,j;
	
	for(i=0;i<8;i++)		// initilaze 0 
		for(j=0;j<8;j++)
			current_combination[i][j]=0;


	int x,y; // x and y are cordinates 	 
	
	for(i=0;i<8;i++){ 	
		// convert places number to cordinates and sing it on solution table using this formula 8x+y=Number -1 
		
		// for example queen[7] = 54  
		// x= (54-1)/8 -> 6
		// y = (54-1) - 8*6 -> 5 
		// cordinates are (6,5) 
		
		x=(queen[i]-1)/8;
		y=(queen[i]-1)-8*x;
			
		current_combination[x][y]=1; // record current combination for test

	}
	
	return 1;
}
int increase_queens(int p,int current_combination[][8]){

	int x,y;
	
	if(p==-1)
		return -1;
		
	if(queen[p]+(8-p)==65){ // if the quuen in the last square we need to return it 
	
		//determine the cordinates 
		x=(queen[p]-1)/8;
		y=(queen[p]-1)-8*x;
		
		// blank the last square place 
		current_combination[x][y]=0;
		

		if(increase_queens(p-1,current_combination)==-1) // before return last square we need to increase previous quuen (p-1)
				return -1;
		
		queen[p]=queen[p-1]+1;			
				
	}
	else{	
			// increase the quuen place 
			queen[p]++;
		
			x=(queen[p]-1)/8;
			y=(queen[p]-1)-8*x;	
			
			// control the place for is empty or not 
			
			if(current_combination[x][y]==1){ // if not empty increase again
				
				increase_queens(p,current_combination);	
			}
					 	
	}

	return 1;	// if everthing is normal return 1
}
int is_okey(int solution[][8]){ // test the current combination
								// test all queens
		int i,j,m,n;	
		
		int x,y;
		
		int cordinate[2];
		
		for(i=0;i<64;i++){
			
			x=(i-1)/8;
			y=(i-1)-8*x;
		
		if(solution[x][y]==1){ // if square has queen test it other ways pass
			cordinate[0]=x;
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
void print_solution(int current_combination[][8]){ // print the solution 
	
	size_t i,j;
	
	printf("\nSolution %d:\n",d);
	
	for(i=0;i<8;i++){
	
		for(j=0;j<8;j++)
			printf("%2d",current_combination[i][j]);
			
	puts("");
	
	}
	d++;
}

