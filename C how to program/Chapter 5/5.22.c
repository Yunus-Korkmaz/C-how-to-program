/*
	Name:		  5.22.c
	Author:       Yunus Korkmaz
	Date:		  04.07.20 19:03
	Description:  (Separating Digits) Write program segments that accomplish each of the following:
					a) Calculate the integer part of the quotient when integer a is divided by integer b.
					b) Calculate the integer remainder when integer a is divided by integer b.
					c) Use the program pieces developed in a) and b) to write a function that inputs an integer
					between 1 and 32767 and prints it as a series of digits,with two spaces between each digit.
					For example, the integer 4562 should be printed as: 
					
					4 5 6 2
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calculate_the_integer_part(int a,int b);
int calculate_the_integer_remainder(int a,int b);
void digit_separator(int num,int n);
int main(void){
	
	int i,number,size=10,temp;
	
	printf("%-10s%s","Number","Digits");
	puts("");
	
	for(i=1;i<=10;i++){
		
		number=rand(); // rand() function wiil create number between 0-32767;
		printf("%-10d",number);
		temp=number;
		
		while(temp>size){
			size*=10;
		}
		size/=10;
		digit_separator(number,size);
		puts("");	
	}
}
int calculate_the_integer_part(int a,int b){
	
	return a/b;
}
int calculate_the_integer_remainder(int a,int b){
	
	return a-b*(a/b);
}
void digit_separator(int num,int n){
	
	
	while(num>0){
		printf("%d",calculate_the_integer_part(num,n));
		
		num=calculate_the_integer_remainder(num,n);
		
		n/=10;
		
		printf("%s","  ");
	}
	
}
