/*
	Name:		  6.10.c
	Author:       Yunus Korkmaz
	Date:		  19.07.20 19:56
	Description:  (Sales Commissions) Use a single-subscripted array to solve the following problem. 
					A company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of
					their gross sales for that week. For example, a salesperson who grosses $3,000 in sales in a week receives 
					$200 plus 9% of $3,000, or a total of $470. Write a C program (using an array of counters)
					that determines how many of the salespeople earned salaries in each of the following ranges (assume
					that each salesperson’s salary is truncated to an integer amount):
							a) $200–299
							b) $300–399
							c) $400–499
							d) $500–599
							e) $600–699
							f) $700–799
							g) $800–899
							h) $900–999
							i) $1000 and over
*/

#include<stdio.h>

int main(void){
	
	int sales_lower_bound[9]={200,300,400,500,600,700,800,900,1000};
	int sales_upper_bound[8]={299,399,499,599,699,799,899,999};
	
	int prices_lower_bound[9];
	int prices_upper_bound[8];
	
	size_t i;
	
	for(i=0;i<9;i++){
		
		if(i==8){
		
		prices_lower_bound[i]=200+sales_lower_bound[i]*9/100;	
		}
		else{
		prices_lower_bound[i]=200+sales_lower_bound[i]*9/100;
		prices_upper_bound[i]=200+sales_upper_bound[i]*9/100;
		}
		
	}
	
	printf("%-10s%25s","SALES RANGE","PRICES RANGE");
	puts("");
	
	for(i=0;i<9;i++){
		
		if(i==8){
			printf("%d%s%s",sales_lower_bound[i]," - and over   --->  ");
			printf("%d%s%s",prices_lower_bound[i]," - and over \t");
			
		}
		else{
		printf("%d%s%d%-15s",sales_lower_bound[i]," - ",sales_upper_bound[i],"      --->");
		printf("%d%s%d",prices_lower_bound[i]," - ",prices_upper_bound[i]);
		}

		puts("");
	}
	
	return 0;
}
