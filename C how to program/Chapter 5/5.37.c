/*
	Name:		  5.37.c
	Author:       Yunus Korkmaz
	Date:		  12.07.20 15:52
	Description:  (Towers of Hanoi: Iterative Solution) Any program that can be implemented recursively
					can be implemented iteratively, although sometimes with considerably more difficulty and considerably 
					less clarity. Try writing an iterative version of the Towers of Hanoi. If you succeed, compare
					your iterative version with the recursive version you developed in Exercise 5.36. Investigate issues
					of performance, clarity, and your ability to demonstrate the correctness of the programs.
*/
				
#include<stdio.h>
#include<math.h>
			// recursive code more powerful than this nonrecursive code 
			
int i=1;	// is global variable because we use in two function (main and make_move)														
																		// 	we have some legal movement and order so we need to follow these order and movement 	
void make_move(int* peg1,int* peg2,int peg_name1,int peg_name2);		// 	I didn't analize the movement of tower of hanoi or order , I find it in a site
																		//	you can see in this site https://www.ritambhara.in/non-recursive-solution-to-tower-of-hanoi/
int main(void){
	
	int a,b,c,moves,disk_number,temp; // a,b and c name of peg 					
	b=0;							  // we initilaze a and b with 0 
	c=0;
	
	puts("Please enter number of disk [1-9]");
	scanf("%d",&disk_number);
	
	
	temp=disk_number; // we use temp to find peg a depent on the disk number 
	while(temp>0){    // for example if disk number 5 and peg a 54321 or disk number 3 and peg a 321		
		a=a*10+temp;
		temp--;
	}
	
	moves=pow(2,disk_number)-1; // this fourmula gives number of moment which requared for complite the hanoi tower (2^n -1  n is disk number)
	
	printf("%-20s%20s","Movement","The Last Situation");
	puts("");
	printf("%47s","PEG 1     PEG 2     PEG 3   ");
	puts("");
	
	while(1){						// we have two part ; first part is disk number is even and second part is disk number is odd
		
	if(disk_number%2==0){								
														 
	if(i>moves)									// 	this if block controls the number of , movement if i==moves break the loop			
	break;												
    make_move (&a,&b,1,2);   					// 	we send legal pegs and the name of this peg  (movement between a to b or b to a  and names a is 1 b is 2 )		
    printf("%13s%-10d%-10d%-8d"," ",a,b,c);		// we use call by refferans so we send the adresses of the pegs  
    puts("");									// we didn't learn yet that topics (call by refferance and the pointers) but its very easy I think you can understand the code
    											// o you can change and edit the make_move stetament wtih make_move function it will work
    if(i>moves)								
	break;										
    make_move (&a,&c,1,3);
    printf("%13s%-10d%-10d%-8d"," ",a,b,c);
    puts("");
    
    if(i>moves)									// these blocks very similar with other, just different the pegs
	break;	
    make_move (&b,&c,2,3);
    printf("%13s%-10d%-10d%-8d"," ",a,b,c);
    puts("");
    
	}
	
	else{		// and this second part 
	
	if(i>moves)
	break;	
    make_move (&a,&c,1,3);
    printf("%13s%-10d%-10d%-8d"," ",a,b,c);
    puts("");
    
    if(i>moves)
	break;	
    make_move (&a,&b,1,2);
    printf("%13s%-10d%-10d%-8d"," ",a,b,c);
    puts("");
    
    if(i>moves)
	break;	
    make_move (&b,&c,2,3);
    printf("%13s%-10d%-10d%-8d"," ",a,b,c);
    puts("");
    
	}
	
	}
	
	return 0;
}

void make_move(int* peg1,int* peg2,int peg_name1,int peg_name2){ // we get the adresses with the pointers so we change the vaule of pegs
	
	if((*peg1%10<*peg2%10 || *peg2%10==0) && *peg1!=0 ){	// *peg1%10<*peg2%10 for first rule : We cant put big disk on a small disk 
															// *peg2%10==0 means : if the second disk is empty we can put the disk
		printf("%d%s%d",peg_name1," -> ",peg_name2);		// *peg1!=0  means   :  but if the first disk is zero it means empty and we can't take it 
															// parenthesis and operators ( || && ) very important 
		*peg2=*peg2*10+*peg1%10;
		*peg1/=10;
		i++;
	}
	
	else if((*peg2%10<*peg1%10 || *peg1%10==0 ) && *peg2!=0 ){  // same with perevius block 

		printf("%d%s%d",peg_name2," -> ",peg_name1);
		
		*peg1=*peg1*10+*peg2%10;
		*peg2/=10;
		i++;
	}
		// if you dont understand this code it is normal because I couldn't explain well and the code not too easy 
}		// but the whole purpose of this code is to apply the pseudocode which is on this site https://www.ritambhara.in/non-recursive-solution-to-tower-of-hanoi/
