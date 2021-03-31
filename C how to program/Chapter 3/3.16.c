/*
	Name: 		  3.16.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 15:11
	Description:  (Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One
				  driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
				  each tankful. Develop a program that will input the miles driven and gallons used for each tankful.
				  The program should calculate and display the miles per gallon obtained for each tankful. After processing 
				  all input information, the program should calculate and print the combined miles per gallon
				  obtained for all tankfuls.
*/

#include<stdio.h>

int main(void){
	
	float gassoline,road;
	
	puts("\nEnter galons of used gassoline : (enter -1 for end)");
	scanf("%f",&gassoline);
	
	while (gassoline!=-1){
		
		puts("Enter driven road (km) : ");
		scanf("%f",&road);		
			
		printf("%s%.3f\n"," Usage for this tank Lt/100 km = ",gassoline/road*100);
			
		puts("\nEnter galons of used gassoline : (enter -1 for end)");
		scanf("%f",&gassoline);
			
		}
	
	return 0;
}

