/*
	Name:		  6.21.c
	Author:       Yunus Korkmaz
	Date:		  23.07.20 17:04
	Description:  (Airline Reservations System) A small airline has just purchased a computer for its new automated reservations system. 
					The president has asked you to program the new system. You’ll write
					a program to assign seats on each flight of the airline’s only plane (capacity: 10 seats).
					Your program should display the following menu of alternatives:
							Please type 1 for "first class"
							Please type 2 for "economy"
					If the person types 1, then your program should assign a seat in the first class section (seats 1–
					5). If the person types 2, then your program should assign a seat in the economy section (seats 6–
					10). Your program should then print a boarding pass indicating the person's seat number and
					whether it’s in the first class or economy section of the plane.
					Use a single-subscripted array to represent the seating chart of the plane. Initialize all the elements of the array 
					to 0 to indicate that all seats are empty. As each seat is assigned, set the corresponding element of the array to 1 
					to indicate that the seat is no longer available.
					Your program should, of course, never assign a seat that has already been assigned. When the
					first class section is full, your program should ask the person if it’s acceptable to be placed in the
					economy section (and vice versa). If yes, then make the appropriate seat assignment. If no, then
					print the message "Next flight leaves in 3 hours."
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10

void firstclass_reservation(int arr[]);
void economyclass_reservation(int arr[]);
int control_seats(int arr[],int x,int y);

int main(void){
	
	int seats[SIZE]={0};
	int choice;
	
	do{
		
		puts("Please type 1 for \"first class\" : ");
		puts("Please type 2 for \"economy\"     :");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				firstclass_reservation(seats);
				break;
				
					
				
			case 2:
				economyclass_reservation(seats);
				break;
				
			default:
				puts("Pls enter betweem 1-2 :");
				
		}
		puts("\n");
		
	}while(controll_seats(seats,0,10)==1);
	
	puts("\nAll section is full, Next flight leaves in 3 hours.");
}
void firstclass_reservation(int arr[]){
	
	puts("");
	char c;
	
	if(controll_seats(arr,0,5)==0){
		printf("%s","First class section is full,Do you want to economy class (y/n)");
		while((c=getchar())=='\n');
		
		if(c=='y' || c=='Y'){
			economyclass_reservation(arr);
			return;
		}
		else{
			puts("Next flight leaves in 3 hours.");
			return;
		}
	}
	
	int seat_number;
	
	do{
		seat_number=rand()%5;
		
	}while(arr[seat_number]==1);
	
	arr[seat_number]++;
	
	printf("%s","Class  : Fist class ");
	puts("");
	printf("%s%d","Seat no : ",seat_number+1);

	return;
}
void economyclass_reservation(int arr[]){

	puts("");
	char c;
	
	if(controll_seats(arr,5,10)==0){
		printf("%s","\nEconomy class section is full,Do you want to first class (y/n)");
		while((c=getchar())=='\n');
		
		if(c=='y' || c=='Y'){
			firstclass_reservation(arr);
			return;
		}
		else{
			puts("Next flight leaves in 3 hours.");
			return;
		}
	}
	
	int seat_number;
	
	do{
		seat_number=5+rand()%5;
		
	}while(arr[seat_number]==1);
	
	arr[seat_number]++;
	
	printf("%s","Class  : Economy class ");
	puts("");
	printf("%s%d","Seat no : ",seat_number+1);
	
	return;
}
int controll_seats(int arr[],int x,int y){
	
	size_t i;
	
	for(i=x;i<y;i++){
		if(arr[i]==0)
			return 1;
	}
	
	return 0;
}
