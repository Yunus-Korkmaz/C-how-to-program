/*
	Name: 		  3.48.c
	Author:       Yunus Korkmaz
	Date: 		  09.06.20 17:47
	Description:  (Enforcing Privacy with Cryptography) The explosive growth of Internet communications
					and data storage on Internet-connected computers has greatly increased privacy concerns. The field
					of cryptography is concerned with coding data to make it difficult (and hopefully—with the most
					advanced schemes—impossible) for unauthorized users to read. In this exercise you’ll investigate a
					simple scheme for encrypting and decrypting data. A company that wants to send data over the 
					Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely. 
					All the data is transmitted as four-digit integers. Your application should read a four-digit
					integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7
					to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit
					with the third, and swap the second digit with the fourth. Then print the encrypted integer. Write
					a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the
					encryption scheme) to form the original number. [Optional reading project: Research “public key
					cryptography” in general and the PGP (Pretty Good Privacy) specific public key scheme. You may
					also want to investigate the RSA scheme, which is widely used in industrial-strength applications.]
*/

#include<stdio.h>

int main(void){
	
	int number,new_number;
	unsigned int first_digit,second_digit,third_digit,fourth_digit;//define 4 variable for 4 digit	
	int choice;
	
	puts("Press 1 for encrypt ,2 for decrypting, 0 for exit");
	scanf("%d",&choice);
		
	while(choice!=0){
		
	if(choice==1){
	puts("Please enter an fourt digit number for encrypt :");
	scanf("%d",&number);
	
	first_digit=((unsigned int)number/1000+7)%10;// all calculations for encrypt is here just mathematical expression
	second_digit=((unsigned int)number/100%10+7)%10;
	third_digit=((unsigned int)number/10%10+7)%10;
	fourth_digit=((unsigned int)number%10+7)%10;
	
	new_number=(int)third_digit*1000+(int)fourth_digit*100+(int)first_digit*10+(int)second_digit;// create new number with that four digit
	
	printf("%04d",new_number);
	puts("\nPress 1 for encrypt ,2 for decrypting, 0 for exit");
	scanf("%d",&choice);
	}
	else{
		

	puts("Please enter an fourt digit number for decrypting");
	scanf("%d",&number);
	
	first_digit=(unsigned int)number/10%10;
	second_digit=(unsigned int)number%10;	  
	third_digit=(unsigned int)number/1000;
	fourth_digit=(unsigned int)number/100%10;
	
	first_digit+=first_digit>=7?-7:+3;
	second_digit+=second_digit>=7?-7:+3;
	third_digit+=third_digit>=7?-7:+3;
	fourth_digit+=fourth_digit>=7?-7:+3;
	
	new_number=(int)first_digit*1000+(int)second_digit*100+(int)third_digit*10+(int)fourth_digit;
	
	printf("%04d",new_number);
	puts("\nPress 1 for encrypt ,2 for decrypting, 0 for exit");
	scanf("%d",&choice);
	
		}
	}
	
	return 0;
}
