/*
	Name:		  7.17.c
	Author:       Yunus Korkmaz
	Date:		  01.01.21 15:51
	Description:  (Simulation: The Tortoise and the Hare) In this problem, you’ll recreate one of the truly
					great moments in history, namely the classic race of the tortoise and the hare. You’ll use random
					number generation to develop a simulation of this memorable event.
					Our contenders begin the race at “square 1” of 70 squares. Each square represents a possible
					position along the race course. The finish line is at square 70. The first contender to reach or pass
					square 70 is rewarded with a pail of fresh carrots and lettuce. The course weaves its way up the side
					of a slippery mountain, so occasionally the contenders lose ground.
					There’s a clock that ticks once per second. With each tick of the clock, your program should
					adjust the position of the animals according to the rules of Fig. 7.31. 
					
					Animal Move type Percentage of the time Actual move
					
									Tortoise 		Fast plod		50%			3 squares to the right
													Slip			20%			6 squares to the left
													Slow plod		30%			1 square to the right
									
								
								
									
									
									
									Hare			Sleep			20%			No move at all
													Big hop			20%			9 squares to the right
													Big slip		10%			12 squares to the left
													Small hop		30%			1 square to the right
													Small slip		20%			2 squares to the left
									
							Use variables to keep track of the positions of the animals (i.e., position numbers are 1–70).
					Start each animal at position 1 (i.e., the “starting gate”). If an animal slips left before square 1,
					move the animal back to square 1. Generate the percentages in the preceding table by producing a
					random integer, i, in the range 1 ? i ? 10. For the tortoise, perform a “fast plod” when 1 ? i ? 5, a
					“slip” when 6 ? i ? 7, or a “slow plod” when 8 ? i ? 10. Use a similar technique to move the hare.
					Begin the race by printing
							BANG !!!!!
							AND THEY'RE OFF !!!!!
					Then, for each tick of the clock (i.e., each repetition of a loop), print a 70-position line showing
					the letter T in the position of the tortoise and the letter H in the position of the hare. Occasionally,
					the contenders will land on the same square. In this case, the tortoise bites the hare and your program 
					should print OUCH!!! beginning at that position. All print positions other than the T, the H, or the OUCH!!! (in case of a tie) should be blank.
					After each line is printed, test whether either animal has reached or passed square 70. If so,
					then print the winner and terminate the simulation. If the tortoise wins, print TORTOISE WINS!!!
					YAY!!! If the hare wins, print Hare wins. Yuch. If both animals win on the same tick of the clock,
					you may want to favor the turtle (the “underdog”), or you may want to print It's a tie. If neither
					animal wins, perform the loop again to simulate the next tick of the clock. When you’re ready to
					run your program, assemble a group of fans to watch the race. You’ll be amazed at how involved
					your audience gets!
											
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int harePosition=1;			// I describe the pýositions in global because we use them every single functions
int tortoisePosition=1;		//  I think no need to send them as a parameter for ver time 

void fastPlod(void);		// tortoise's move functions
void slip(void);
void slowPlod(void);

void hareSleep(void);		// hare's move functions
void bigHop(void);
void bigSlip(void);
void smallHop(void);
void smallSlip(void);

void* generateMoveTypeHare(void );			// for generate a random moves and return their functions for hare 
void* generateMoveTypeTortoise(void);       // for generate a random moves and return their functions for tortoise
int checkPositions(void);

void print(void);		// show hare and tortoise cordinates

int main(void){
	
	srand(time(NULL));		// I used for random number
	
	puts("BANG !!!!! \n AND THEY'RE OFF !!!!! ");
	sleep(1);
	system("cls");
	print();
	sleep(1);
	system("cls");
	
	void (*function)(void)=generateMoveTypeHare();		// this a pointer which return type is void and paremeters are void
														// so we can point our move functions with this pointer
	do{
	
		function=generateMoveTypeHare();		// generate a random move for hare and return it's functions
			
		function();	// call functions which we assing before
		
		function=generateMoveTypeTortoise();  // generate a random move for hare and return it's functions
			
		function();		
		
		
		print();
		sleep(1);
		
		system("cls");
	}while (checkPositions()==0);	
	
	if(checkPositions()==1)
		printf("%s"," Hare wins. Yuch.");
	else if(checkPositions()==2)
		printf("%s"," TORTOISE WINS!!! YAY!!!");
	else if(checkPositions()==3)
		printf("%s","It's a tie.");

}

// generate a random moves for hare 
void* generateMoveTypeTortoise(void){
	
	unsigned int number =1+ rand()%10; // generate random number 1 to 10
	
	if(number<=5)		// 1,2,3,4,5 %50
		return fastPlod;
	
	else if(number<=7) // 6,7 %20
		return slip;
				
	else				// 8,9,10 %30
		return slowPlod;
			
}
void* generateMoveTypeHare(void){
	
	unsigned int number =1+ rand()%10;
	
	if(number<=2)
		return hareSleep;
	else if(number<=4)
		return bigHop;
	else if(number<=5)
		return bigSlip;
	else if(number<=8)
		return smallHop;
	else
		return smallSlip;
}
// control the positions for  is anyone win
int checkPositions(void){
	
	if(harePosition == 70 && tortoisePosition == 70 )
		return 3;
	if(harePosition == 70)
		return 1;
	if(tortoisePosition == 70)
		return 2;
	
	return 0;
			
}
// control their positions for are their in same square
void isBites(void){
	
		int i;
	
	if(harePosition!=1 || tortoisePosition!=1)
		if(harePosition == tortoisePosition){
				printf("%s"," OUCH!!!");
		}
	
}
void print(void){
	
	int i;
	
	puts("**********************************************************************");
	
	for(i=1;i<harePosition;i++)
		printf("%s"," ");
		printf("%s","H");
		
		isBites();
		
	puts("\n----------------------------------------------------------------------");
		
	for(i=1;i<tortoisePosition;i++)
		printf("%s"," ");
		printf("%s","T");
		
		
	puts("\n**********************************************************************");
	
	
	
		
}
void fastPlod(void){
	
	tortoisePosition+=3;
	
	if(tortoisePosition>70)
		tortoisePosition=70;
}
void slip(void){
	
	tortoisePosition-=6;
	
	if(tortoisePosition<1)
		tortoisePosition=1;
}
void slowPlod(void){
	
	tortoisePosition+=1;
	
}

void hareSleep(void){
	
	harePosition+=0;
	
}
void bigHop(void){
	
	harePosition+=9;
	
	if(harePosition>70)
		harePosition=70;
}
void bigSlip(void){
	
	harePosition-=12;
	
	if(harePosition<1)
		harePosition=1;

}
void smallHop(void){
	
	harePosition+=1;

}
void smallSlip(void){
	
	harePosition-=2;
	
	if(harePosition<1)
		harePosition=1;
}
