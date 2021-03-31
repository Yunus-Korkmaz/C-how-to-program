/*
	Name: 		  2.29.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 20:48
	Description:  (Integer Value of a Character) Here�s a peek ahead. In this chapter you learned about integers and the type int. 
	              C can also represent uppercase letters, lowercase letters and a considerable
				  variety of special symbols. C uses small integers internally to represent each different character. The
				  set of characters a computer uses together with the corresponding integer representations for those
				  characters is called that computer�s character set. You can print the integer equivalent of uppercase
				  A, for example, by executing the statement
				  printf( "%d", 'A' );
				  Write a C program that prints the integer equivalents of some uppercase letters, lowercase letters,
				  digits and special symbols. As a minimum, determine the integer equivalents of the following:
				  ABCabc012$*+/ and the blank character.  		  
*/

#include<stdio.h>
	
int main(void){
	printf("%s%d%s%d%s%d%s%d","a= ",'a'," b= ",'b',"c= ",'c',"A= ",'A');
}
