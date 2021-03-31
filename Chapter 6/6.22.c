/*
	Name:		  6.22.c
	Author:       Yunus Korkmaz
	Date:		  23.07.20 19:00
	Description:  (Total Sales) Use a double-subscripted array to solve the following problem. A company has
					four salespeople (1 to 4) who sell five different products (1 to 5). Once a day, each salesperson passes
					in a slip for each different type of product sold. Each slip contains:
							a) The salesperson number
							b) The product number
							c) The total dollar value of that product sold that day
					Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the information
					from all of the slips for last month is available. Write a program that will read all this information
					for last month’s sales and summarize the total sales by salesperson by product. All totals should be
					stored in the double-subscripted array sales. After processing all the information for last month,
					print the results in tabular format with each column representing a particular salesperson and each
					row representing a particular product. Cross total each row to get the total sales of each product for
					last month; cross total each column to get the total sales by salesperson for last month. Your tabular
					printout should include these cross totals to the right of the totaled rows and to the bottom of the
					totaled columns.
*/

#include<stdio.h>

int main(void){
	
	int sales[4][5]={{100,110,95,52,251},	// if you set array [5][4] code will be more easy
				     {85,120,105,65,246},
				     {75,140,135,60,230},
				     {101,130,122,59,262}};
				     
	size_t i,j;
	int total=0;
	
	printf("%42s","Sales Person Numbers\n");

	printf("%-15s%-10s%-10s%-10s%-10s%s","Products ","1","2","3","4","Total ");
	puts("");
	
	for(i=0;i<5;i++){
			
		printf("%-15d",i+1);
		for(j=0;j<4;j++){

			total+=sales[j][i];
			printf("%-10d",sales[j][i]);
		}
		
		printf("%d",total);
		total=0;
		puts("");
	}
	
	
	printf("%-15s","\nTotal");
	
	for(i=0;i<4;i++){
		
		for(j=0;j<5;j++){
			total+=sales[i][j];
		}
		
		printf("%-10d",total);
		total=0;
	}
	
	
	return 0;
}
