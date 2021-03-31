/*
	Name: 		  2.3.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:17
	Description:  Write a single C statement to accomplish each of the following:
				  a) Define the variables c, thisVariable, q76354 and number to be of type int.
				  b) Prompt the user to enter an integer. End your prompting message with a colon (:) 
				  followed by a space and leave the cursor positioned after the space.
				  c) Read an integer from the keyboard and store the value entered in integer variable a.
				  d) If number is not equal to 7, print "The variable number is not equal to 7."
				  e) Print the message "This is a C program." on one line.
				  f) Print the message "This is a C program." on two lines so that the first line ends with C.
				  g) Print the message "This is a C program." with each word on a separate line.
				  h) Print the message "This is a C program." with the words separated by tabs. 
*/
#include<stdio.h>

int main(){
	
		// this not a complite code 
		// each stetament aswering a different question
		
    int c,thisVariable,q76354,number;//a
    printf("pls enter a number : ") ;//b
	int a; scanf("%d", &a);//c
	
	if(a!=7) printf("Not equal");//d
	printf("%s","this is a c program");//e
	printf("%s","this is a \nc program");//f
	printf("%s","this\n is\n a\n \nc \nprogram");//g
	printf("%s","this \tis \ta \tc p\trogram");//h

	return 0;
}
