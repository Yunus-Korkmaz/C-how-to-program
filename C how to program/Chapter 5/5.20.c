/*
	Name:		  5.20.c
	Author:       Yunus Korkmaz
	Date:		  02.07.20 11:56
	Description:  (Displaying a Square of Any Character) Modify the function created in Exercise 5.19 to
					form the square out of whatever character is contained in character parameter fillCharacter. Thus
					if side is 5 and fillCharacter is “#”, then this function should print: 
					#####
					#####
					#####
					#####
					#####
*/

#include<stdio.h>

int main(void){
	
	unsigned int side;
	char fillCharacter;
	
	puts("Please enter side value :");
	scanf("%u",&side);
	printf("Please enter fill character :");
	
	while((getchar()) != '\n'); 				// it is a important line 
												// before we read a string orw character we need to clear the buffer 
												// we can also use fflush(stdin) for clear input buffer but I am not recommend because fflush(stdin) has some problems in different c standarts 
												// http://c-faq.com/stdio/gets_flush2.html this article clearly explains this situation please read it 
	scanf("%c",&fillCharacter);
	puts("");
	
	int i,k;
	for(i=0;i<side;i++){
	
		for(k=0;k<side;k++)
		printf("%c",fillCharacter);
			
		puts("");
		
	}
}

