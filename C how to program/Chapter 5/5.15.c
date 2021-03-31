/*
	Name: 		  5.15.c
	Author:       Yunus Korkmaz
	Date: 		  27.06.20 13:53
	Description:  (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length
					of the hypotenuse of a right triangle when the other two sides are given. The function should take
					two arguments of type double and return the hypotenuse as a double. Test your program with the
					side values specified in Fig. 5.22
					
					Triangle     Side 1     Side 2
					1            3.0        4.0
					2            5.0        12.0
					3            8.0        15.0
*/

#include<stdio.h>
#include<math.h>

double hypotenuse(double a,double b); //We know that the given triangle is a right triangle, so we didn't check if the sides are correct or not.

int main(void){
	
	double side1,side2;
	
	puts("Please enter first side 1");
	scanf("%lf",&side1);
	puts("Please enter side 2");
	scanf("%lf",&side2);
	
	printf("%s%.2lf","Hypotenuse : ",hypotenuse(side1,side2));
	puts("");
	
	return 0;
}
double hypotenuse(double a,double b){
	
	return sqrt(pow(a,2)+pow(b,2)); 
}
