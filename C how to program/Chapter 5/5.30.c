/*
	Name:		  5.30.c
	Author:       Yunus Korkmaz
	Date:		  04.07.20 21:44
	Description:  (Quality Points for Student’s Grades) Write a function qualityPoints that inputs 
					a student’s average and returns 4 it’s 90–100, 3 if it’s 80–89, 2 if it’s 70–79, 
					1 if it’s 60–69, and 0 if the average is lower than 60.
*/

#include<stdio.h>

int qualityPoints(int average);

int main(void){
	
	int i=0,grade,sum=0;
	
	do{
		puts("Please enter exam grade [0-100] (-1 to end):");
		scanf("%d",&grade);
		
		if(grade!=-1){
			
		sum+=grade;
		i++;
	}
	
	}while(grade!=-1);
	
	printf("%d",qualityPoints(sum/i));
	
	return 0;
	
}
int qualityPoints(int average){
	
	if(average>=90 && average<=100)
		return 4;
	if(average>=80 && average<=89)
		return 3;
	if(average>=70 && average<=79)
		return 2;
	if(average>=60 && average<=69)
		return 1;
	
	return 0;
}
