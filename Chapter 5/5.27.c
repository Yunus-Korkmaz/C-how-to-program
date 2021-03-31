/*
	Name:		  5.27.c 
	Author:       Yunus Korkmaz
	Date:		  04.07.20 21:05
	Description:  (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. 
					For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
					a) Write a function that determines whether a number is prime.
					b) Use this function in a program that determines and prints all the prime numbers 
					between 1 and 10,000. How many of these 10,000 numbers do you really have to test 
					before being sure that you have found all the primes?
					c) Initially you might think that n/2 is the upper limit for which you must test to see
					whether a number is prime, but you need go only as high as the square root of n. 
					Rewrite the program, and run it both ways. Estimate the performance improvement.
*/

void prime_number(int num);

int main(void){
	
	int i;
	for(i=1;i<10000;i++){
		
		prime_number(i);
		
		
	}
	
	puts("\n");
	
	for(i=1;i<10000;i++){
		
		prime_number2(i);
		
		
	}
	
	return 0;
}
void prime_number(int num){ // function 2 more powerful than 1 but we can't notice 
							// because todays computers so powerfull in this kind of jobs
	int i;
	
	if(num == 1)
		return ;
	
	for(i=2;i<num/2;i++)	
		if(num%i == 0)
			return;
			
			
	printf("%d  ",num);
	
}
void prime_number2(int num){
	
	int i;
	
	if(num == 1)
		return ;
	
	for(i=2;i<(int)sqrt(num);i++)	
		if(num%i == 0)
			return;
			
			
	printf("%d  ",num);
}
