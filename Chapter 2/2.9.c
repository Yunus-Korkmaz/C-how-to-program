/*
	Name: 		  2.9.c
	Author:       Yunus Korkmaz
	Date: 		  4.06.20 09:35
	Description:  Write a single C statement or line that accomplishes each of the following:
				  a) Print the message “Enter two numbers.”
				  b) Assign the product of variables b and c to variable a.
				  c) State that a program performs a sample payroll calculation (i.e., use text that helps to
				  document a program).
				  d) Input three integer values from the keyboard and place them in integer variables a, b
				  and c. 
*/
#include<stdio.h>

int main(void){

	printf("Enter two enteger \n");
	int a,b,c;
	a=b*c;
	scanf("%d%d%d",&a,&b,&c);
	
	return 0;
}
