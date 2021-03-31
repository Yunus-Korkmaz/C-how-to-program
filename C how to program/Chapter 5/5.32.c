/*
	Name:		  5.32.c
	Author:       Yunus Korkmaz
	Date:		  05.07.20 12:35
	Description:  (Guess the Number) Write a C program that plays the game of “guess the number” as follows: Your program chooses the number to be guessed by selecting an integer at random in the range
					1 to 1000. The program then types:
							I have a number between 1 and 1000.
							Can you guess my number?
							Please type your first guess.
							
					The player then types a first guess. The program responds with one of the following:
							1. Excellent! You guessed the number!
							 Would you like to play again (y or n)?
							2. Too low. Try again.
							3. Too high. Try again.
					If the player’s guess is incorrect, your program should loop until the player finally gets the number
					right. Your program should keep telling the player Too high or Too low to help the player “zero in”
					on the correct answer. [Note: The searching technique employed in this problem is called binary
					search. We’ll say more about this in the next problem.]
					*/

#include<stdio.h>

int main(void){//we have a problem , program create same number when every run
				// so we can use srand(time(NULL)) and add time.h library
	char choice;
	int number,predict;
	
	do{
	number=1+rand()%1000;
	puts("I have a number between 1 and 1000.");
	puts("Can you guess my number?");
	puts("Please type your first guess.");
	scanf("%d",&predict);
	
	while(predict!=number){
		
		if(predict>number)
			puts("Too high. Try again.");
		else 
			puts("Too low. Try again.");
			
		scanf("%d",&predict);
	}
	
	puts("Excellent! You guessed the number!\n Would you like to play again (y or n)?");
	while(getchar()!='\n');
	scanf("%c",&choice);
	
	}while(choice!='n' && choice!='N');


	return 0;
}
