/*
	Name:		  5.41.c
	Author:       Yunus Korkmaz
	Date:		  12.07.20 21:48
	Description:  (Distance Between Points) Write a function distance that calculates the distance between
					two points (x1, y1) and (x2, y2). All numbers and return values should be of type double.
*/

#include<stdio.h>
#include<math.h>

double distance(double x1,double y1, double x2, double y2);

int main(void){
	
	double v1,h1,v2,h2;
	
	puts("Please enter first  x,y coordinate (x y):");
	scanf("%lf%lf",&v1,&h1);
	
	puts("Please enter second  x,y coordinate (x y):");
	scanf("%lf%lf",&v2,&h2);
	
	printf("%s%lf","Distance is ",distance(v1,h1,v2,h2));
	
	return 0;
	
}
double distance(double x1,double y1, double x2, double y2){
	
	return sqrt( pow(fabs(x1-x2),2) + pow(fabs(y1-y2),2));
	
}
