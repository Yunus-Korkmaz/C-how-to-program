/*
	Name: 		  4.19.c
	Author:       Yunus Korkmaz
	Date: 		  12.06.20 14:45
	Description:  (Calculating Sales) An online retailer sells five different products whose retail prices are
					shown in the following table:
					Product number   Retail price
					1 				 $ 2.98
					2 				 $ 4.50
					3 				 $ 9.98
					4 				 $ 4.49
					5 				 $ 6.87
*/

#include<stdio.h>

int main(void){
	
	int product_number,quantity,a;
	float sum=0;
	do{
		
	puts("\nPlease enter Product number (-1 for end):");	
	scanf("%d",&product_number);
	
	if(product_number<=5&&product_number>0){
	puts("Please enter  Quantity sold for one day:");
	scanf("%d",&quantity);		
	}
	
	switch(product_number){

		case 1:
			printf("%s%.2f","Total money ",sum+=(float)quantity*2.98);
			break;
		case 2:
			printf("%s%.2f","Total money ",sum+=(float)quantity*4.50);
			break;
		case 3:
			printf("%s%.2f","Total money ",sum+=(float)quantity*9.98);
			break;
		case 4:
			printf("%s%.2f","Total money ",sum+=(float)quantity*4.49);
			break;
		case 5:
			printf("%s%.2f","Total money ",sum+=(float)quantity*6.87);
			break;

		default:
			puts("Please enter an correct product number");
			
	}
	
	}while(product_number!=-1);
	
	printf("%s%.2f","Total money of last week ",sum);
	
	return 0;
}
