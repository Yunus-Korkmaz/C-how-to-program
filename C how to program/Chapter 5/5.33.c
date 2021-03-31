/*
	Name:		  5.33.c	
	Author:       Yunus Korkmaz
	Date:   	  05.07.20 12:57
	Description:  (Guess the Number Modification) Modify the program of Exercise 5.32 to count the number of guesses the player makes. 
				    If the number is 10 or fewer, print Either you know the secret or you got lucky! 
					If the player guesses the number in 10 tries, then print Ahah! You know the secret!
					If the player makes more than 10 guesses, then print You should be able to do better! Why should
					it take no more than 10 guesses? Well, with each “good guess” the player should be able to eliminate
					half of the numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries.
*/

#include<stdio.h>

int main(void){	// start with half of the maximum number (500) and divide the number by two each time
				// you can get the best try number
	
	char choice;
	int number,predict,number_of_prediction=1;
	
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
		number_of_prediction++;
	}
		
	if(number_of_prediction<10)
		puts("Either you know the secret or you got lucky!");
	else if(number_of_prediction==10)
		puts("Ahah! You know the secret!");
	else 
		puts("You should be able to do better!");
		
		
	puts("Would you like to play again (y or n)?");
	while(getchar()!='\n');
	scanf("%c",&choice);
	
	}while(choice!='n' && choice!='N');


	return 0;
}
