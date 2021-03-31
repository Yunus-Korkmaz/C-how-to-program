/*
	Name: 		  4.32.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 15:33
	Description:  (Modified Diamond-Printing Program) Modify the program you wrote in Exercise 4.31 to
					read an odd number in the range 1 to 19 to specify the number of rows in the diamond. 
					Your program should then display a diamond of the appropriate size.
*/

#include<stdio.h>

int main(void){
	
	puts("Please enter number of row :");
	int row;
	scanf("%d",&row);
	int i;
	int k=row/2;// k is amount of space
	int j;
	for(i=1;i<=row;i++){
		
		
		for(j=k;j>0;j--)
			printf("%s"," ");
			
		for(j=(row/2+1-k)*2-1;j>0;j--)
			printf("%s","*");
			
			puts("");
			
			
		if(i<row/2+1)
			k--;
		else
			k++;
	}
		//if you dont understand code or calculation please look previus example (4.31)
		
	return 0;
}
