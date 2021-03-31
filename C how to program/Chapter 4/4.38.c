/*
	Name: 		  4.38.c
	Author:       Yunus Korkmaz
	Date: 		  17.06.20 21:05
	Description:  (“The Twelve Days of Christmas” Song) Write a program that uses repetition and switch
					statements to print the song “The Twelve Days of Christmas.” One switch statement should be
					used to print the day (i.e., “first,” “second,” etc.). A separate switch statement should be used to
					print the remainder of each verse. 
*/

#include<stdio.h>

int main(void){
	
	int i,k;
	
	for(i=1;i<=12;i++){
		printf("%s","On the ");
		switch(i){
			case 1:
				printf("%s","first ");
				break;
			case 2:
				printf("%s","second ");
				break;
			case 3:
				printf("%s","third ");
				break;
			case 4:
				printf("%s","fourth ");
				break;
			case 5:
				printf("%s","fifth ");
				break;
			case 6:
				printf("%s","sixth ");
				break;
			case 7:
				printf("%s","seventh ");
				break;
			case 8:
				printf("%s","eight ");
				break;
			case 9:
				printf("%s","ninth ");
				break;
			case 10:
				printf("%s","tenth ");
				break;
			case 11:
				printf("%s","eleventh ");
				break;
			case 12:
				printf("%s","twelfth ");
				break;
		}
		printf("day of Christmas\n");
		printf("My true love gave to me\n");
		
		for(k=i;k>=2;k--)
		
			switch(k){
			case 2:
				printf("%s","Two turtle doves\n");
				break;
			case 3:
				printf("%s","Three French hens\n");
				break;
			case 4:
				printf("%s","Four calling birds\n");
				break;
			case 5:
				printf("%s","Five gold rings, badam-pam-pam\n");
				break;
			case 6:
				printf("%s","Six geese a laying\n");
				break;
			case 7:
				printf("%s","Seven swans a swimming\n");
				break;
			case 8:
				printf("%s","Eight maids a milking\n");
				break;
			case 9:
				printf("%s","Nine ladies dancing\n");
				break;
			case 10:
				printf("%s","Ten lords a leaping\n");
				break;
			case 11:
				printf("%s","Eleven pipers piping\n");
				break;
			case 12:
				printf("%s","12 drummers drumming\n");
				break;
	}
	printf("%s","And a partridge in a pear tree\n");
	puts("");
	}
	
	return 0;
}
