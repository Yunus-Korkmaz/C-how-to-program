/*
	Name:		  (Calculating Circle Circumference, Circle Area or Sphere Volume Using Function Pointers)
	Author:       Yunus Korkmaz
	Date:
	Description:  Using the techniques you learned in Fig. 7.28, create a text-based, menu-driven program that allows
					the user to choose whether to calculate the circumference of a circle, the area of a circle or the volume of a sphere.
				    The program should then input a radius from the user, perform the appropriate
					calculation and display the result. Use an array of function pointers in which each pointer represents
					a function that returns void and receives a double parameter. The corresponding functions should
					each display messages indicating which calculation was performed, the value of the radius and the
					result of the calculation.
*/
#include<stdio.h>
#include<stdlib.h>

#define pi 3.14


void Circumference(double r);
void Area(double r);
void Volume(double r);


int main(void){
	
	char *Menu={
				"***************************************\n"
				"***      Circle Calculator MENU     ***\n"
				"***************************************\n"
				"*** 1: Circumference of a Circle    ***\n"
				"*** 2: Area of a Circle             ***\n"
				"*** 3: Volume of a Sphere.          ***\n"
				"*** 0: EXIT                         ***\n"
				"***************************************\n"
				"Enter choice ? "	
	};
	
	double r;
	int c;
	void (*circle_functions[])(double)={Circumference,Area,Volume};

	do {
		
		printf("%s",Menu);
		
		scanf("%d",&c);
		if(c>=1 && c<=3){
			
			printf("\nEnter Radius ? ");
			scanf("%lf",&r);
			
			circle_functions[c-1](r);
			
		}
		
		puts("\n");	
		
	}while(c!=0);

}
void Circumference(double r){
	
	printf("-> Circumference of %.2lf radius circle : %.2lf",r,2*pi*r);	
}
void Area(double r){
	
	printf("-> Area of %.2lf radius circle : %.2lf",r,pi*r*r);	
}
void Volume(double r){
	
	printf("-> Volume of %.2lf radius circle : %.2lf",r,(double)(4/3)*pi*r*r*r);	
}
