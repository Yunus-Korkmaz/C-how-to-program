/*
	Name:		  5.26.c
	Author:       Yunus Korkmaz
	Date:		  04.07.20 20:42
	Description:  (Perfect Numbers) An integer number is said to be a perfect number if its factors, including
					1 (but not the number itself), sum to the number. For example, 6 is a perfect number because 6 =
					1 + 2 + 3. Write a function perfect that determines whether parameter number is a perfect number.
					Use this function in a program that determines and prints all the perfect numbers between 1 and
					1000. Print the factors of each perfect number to confirm that the number is indeed perfect. 
					Challenge the power of your computer by testing numbers much larger than 1000.
*/

#include<stdio.h>

void perfect(int num);

int main(void){
	
	int number,i;
	
	for(i=1;i<=1000;i++){
		
		perfect(i);
		puts("");
	}
	
	puts("Please enter a number that larger than 1000 to test your sytem power :");
	scanf("%d",&number);
	
	perfect(number);
	
	return 0;
}
void perfect(int num){
	
	int i,sum=0;
	printf("%d%s",num," -> ");
	
	for(i=1;i<=num/2;i++){
		
		if(num%i==0){
			
			printf("%s%d"," + ",i);
			sum+=i;
		}
	}
	
	printf("%s%d"," = ",sum);
	puts("");
	
	if(sum==num)
		printf("%s","Perfect number");
	else 
		printf("%s","not a Perfect number");
	
	puts("\n");
}

