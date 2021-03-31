/*
	Name:		  7.10.c
	Author:       Yunus Korkmaz
	Date:		  04.09.20 10:49
	Description:  For each of the following, write a single statement that performs the indicated task. Assume
					that long integer variables value1 and value2 have been defined and that value1 has been initialized
					to 200000.
						a) Define the variable lPtr to be a pointer to an object of type long.
						b) Assign the address of variable value1 to pointer variable lPtr.
						c) Print the value of the object pointed to by lPtr.
						d) Assign the value of the object pointed to by lPtr to variable value2.
						e) Print the value of value2.
						f) Print the address of value1.
						g) Print the address stored in lPtr. Is the value printed the same as the address of value1?
*/

#include<stdio.h>

int main(void){
	

	long int value1, value2;
	value1=200000;
	
	// a.)
		long int *lPtr;
	
	// b.)
		lPtr=&value1;
		
	// c.)
		printf("%s%ld","value of lPtr ",*lPtr);
		puts("");
		
	// d.)
		value2=*lPtr;
	
	// e.)
		printf("%s%ld","value of value2 ",value2);
		puts("");
	
	// f.)
		printf("%s%p","adresses of value1 ",&value1);
		puts("");
		
	// g.)
		printf("%s%p","adresses of lPtr ",lPtr);
		puts("");
		// yes same 
	}
