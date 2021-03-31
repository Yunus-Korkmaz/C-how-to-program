/*
	Name: 		  3.35.c
	Author:       Yunus Korkmaz
	Date: 		  07.06.20 15:01
	Description:  (Printing the Decimal Equivalent of a Binary Number) Input an integer (5 digits or fewer)
				  containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint: Use the
				  remainder and division operators to pick off the “binary” number’s digits one at a time from right
				  to left. Just as in the decimal number system, in which the rightmost digit has a positional value of
				  1, and the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary
				  number system the rightmost digit has a positional value of 1, the next digit left has a positional
				  value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3
				  * 10 + 2 * 100. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4
				  + 8 or 13.]
*/

#include<stdio.h>

int main(void){
	
	unsigned int binary_number,decimal_number,temp;
	puts("Enter a binary number(5 digit or less):");
	scanf("%u",&binary_number);
	
	decimal_number=0;
	
	int i=0,k;
	while(i<5){
	
		if(binary_number%10==1){
			temp=1;
			k=i;
			while(k>0){
				temp*=2;
				k--;
			}
				
			decimal_number+=temp;
		}
		i++;
		binary_number/=10;
	}
	
	printf("%d",decimal_number);
	
	return 0;
}
