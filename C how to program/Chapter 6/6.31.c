/*
	Name:		  6.31.c
	Author:       Yunus Korkmaz
	Date:		  10.08.20 15:37
	Description:  Palindromes) A palindrome is a string that’s spelled the same way forward and backward.
								Some examples of palindromes are: “radar,” “able was i ere i saw elba,” and, if you ignore blanks, “a
								man a plan a canal panama.” Write a recursive function testPalindrome that returns 1 if the stringstored 
								in the array is a palindrome and 0 otherwise. The function should ignore spaces and punctuation in the string. 
*/

#include<stdio.h>

int testPalindrome(char arr[]);

int main(void){
	
	char string[99];
	
	puts("Please enter a string");
	
	gets(string);

	
	if(testPolindrome(string)==1)
		puts("It is polindrome");
	else 
		puts("It is not polindrome");
		
		
	return 0;
}
int testPolindrome(char arr[]){
	
	char arr2[99]; 
	
	int i,j;
	
	
	for(i=0,j=0;arr[i]!='\0';i++) // delete all  spaces and punctuation in the string and remake the string
		
		if((arr[i]>=48 && arr[i]<=57) || (arr[i]>=65 && arr[i]<=90 ) || (arr[i]>=97 && arr[i]<=122 )){
			arr[j]=arr[i];
			j++;
		}
				
	arr[j]='\0'; // add the last character
	
	
	for(i=0;arr[i]!='\0';i++); // find the lenght of string
	
	
	for(j=0,i=i-1;i>=0;j++,i--) // rewrite arr[] from the end on arr2[]
		arr2[j]=arr[i];
		
				
	arr2[j]='\0'; // add the last character
	
	
	for(i=0;arr[i]!='\0';i++) // check if they are same 
		if(arr[i]!=arr2[i]){
			return 0; // if not same return 0
						
		}
			
	
	
	return 1; // if they are same return 1;
}
