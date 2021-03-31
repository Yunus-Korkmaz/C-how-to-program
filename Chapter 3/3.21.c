/*
	Name: 		  3.21.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 22:07
	Description:  (Predecrementing vs. Postdecrementing) Write a program that demonstrates the difference
				   between predecrementing and postdecrementing using the decrement operator --.
*/

#include<stdio.h>

int main(void){
	
	int a=5;
	int b=5;
	
	printf("%s%d\n","a++=",a++);//a will be 6 after print the value of a
	printf("%s%d\n","a=",a);//you can see a is 6
	
	printf("%s%d\n","++b=",++b);// b will be 6 before print the value of b
	printf("%s%d\n","b=",b);// b is 6
	
	a=5;
	b=5;
	
	if(a++==6)			//elements are not equal because compare before increase a 
		puts("Okey a\n");
		
	if(++b==6)			//elements are equal because increase b before comparison
		puts("Okey b\n");
		
	a=5;
	b=5;
	
	// same logic with previus example
	a++==6?puts("Yes a\n"):puts("No a\n");// will print No a
	++b==6?puts("Yes b\n"):puts("No b\n");// will print Yes b
	
	//++x end x++ have same other different but we will see them in next topics 
	
	return 0;
}
