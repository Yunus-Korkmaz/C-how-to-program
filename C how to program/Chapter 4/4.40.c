/*
	Name: 		  4.40.c
	Author:       Yunus Korkmaz
	Date: 		  18.06.20 15:14
	Description:  (Tax Plan Alternatives; The “FairTax”) There are many proposals to make taxation fairer.
					Check out the FairTax initiative in the United States at
								www.fairtax.org/site/PageServer?pagename=calculator
					Research how the proposed FairTax works. One suggestion is to eliminate income taxes and most
					other taxes in favor of a 23% consumption tax on all products and services that you buy. Some
					FairTax opponents question the 23% figure and say that because of the way the tax is calculated, it
					would be more accurate to say the rate is 30%—check this carefully. Write a program that prompts
					the user to enter expenses in various categories (e.g., housing, food, clothing, transportation, 
					education, health care, vacations), then prints the estimated FairTax that person would pay
*/

#include<stdio.h>
//I didn't understand question what kind of tax he want and the given link didn't work
// but i calculate income tax in us 
//This problem(income tax calculator) probaly as complicated as the question 

//https://smartasset.com/taxes/income-taxes#:~:text=To%20calculate%20taxable%20income%2C%20you,to%20arrive%20at%20taxable%20income.
// in this link you can learn  how to calculate income tax 

// this code doesn't look so good maybe you can do better
int main(void){
	
	double income,taxable_income,federal_tax=0,social_security,medicare;
	int status;
	do{
	puts("\nPlease enter yearly income (-1 to end):");
	scanf("%lf",&income);
	social_security=income*0.062;
	medicare=income*0.0145;
	
	if(income!=-1){
		puts("Filing Status :");
		printf("%s","Press 1 for Single\n");
		printf("%s","Press 2 for Married Joint\n");
		printf("%s","Press 3 for Married Sperate\n");
		printf("%s","Press 4 for Head of Household\n");
		scanf("%d",&status);

	
		switch(status){//switch do not take double
			
			case 1:
				taxable_income=income-12200;
				if(taxable_income>9700)
					federal_tax+=9700*0.10;
				else{
					federal_tax+=(taxable_income-0)*0.10;break;
				}
				if(taxable_income>39475)
					federal_tax+=(39475-9700)*0.12;
				else{
					federal_tax+=(taxable_income-9700)*0.12;break;
				}
				if(taxable_income>84200)
					federal_tax+=(84200-39475)*0.22;
				else{
					federal_tax+=(taxable_income-39475)*0.22;break;
				}
				if(taxable_income>160725)
					federal_tax+=(160725-84200)*0.24;
				else{
					federal_tax+=(taxable_income-84200)*0.24;break;
				}
				if(taxable_income>204100)
					federal_tax+=(204100-160725)*0.32;
				else{
					federal_tax+=(taxable_income-160725)*0.32;break;
				}
				if(taxable_income>510300)
					federal_tax+=(510300-204100)*0.35;
				else{
					federal_tax+=(taxable_income-204100)*0.35;break;
				}
				if(taxable_income>510300){
				federal_tax+=(taxable_income-510300)*0.37;break;
			}

			case 2:
				taxable_income=income-24400;
				if(taxable_income>19400)
					federal_tax+=19400*0.10;
				else{
					federal_tax+=(taxable_income-0)*0.10;break;
				}	
				if(taxable_income>78950)
					federal_tax+=(78950-19400)*0.12;
				else{
					federal_tax+=(taxable_income-19400)*0.12;break;
				}
				if(taxable_income>168400)
					federal_tax+=(168400-78950)*0.22;
				else{
					federal_tax+=(taxable_income-78950)*0.22;break;
				}
				if(taxable_income>321450)
					federal_tax+=(321450-168400)*0.24;
				else{
					federal_tax+=(taxable_income-168400)*0.24;break;
				}
				if(taxable_income>408200)
					federal_tax+=(408200-321450)*0.32;
				else{
					federal_tax+=(taxable_income-321450)*0.32;break;
				}
				if(taxable_income>612350)
					federal_tax+=(612350-408200)*0.35;
				else{
					federal_tax+=(taxable_income-408200)*0.35;break;
				}
				if(taxable_income>612350){
				federal_tax+=(taxable_income-612350)*0.37;break;
			}
			case 3:
				taxable_income=income-12200;
				if(taxable_income>9700)
					federal_tax+=9700*0.10;
				else{
					federal_tax+=(taxable_income-0)*0.10;break;
				}
				if(taxable_income>39475)
					federal_tax+=(39475-9700)*0.12;
				else{
					federal_tax+=(taxable_income-9700)*0.12;break;
				}
				if(taxable_income>84200)
					federal_tax+=(84200-39475)*0.22;
				else{
					federal_tax+=(taxable_income-39475)*0.22;break;
				}
				if(taxable_income>160725)
					federal_tax+=(160725-84200)*0.24;
				else{
					federal_tax+=(taxable_income-84200)*0.24;break;
				}
				if(taxable_income>204100)
					federal_tax+=(204100-160725)*0.32;
				else{
					federal_tax+=(taxable_income-160725)*0.32;break;
				}
				if(taxable_income>306175)
					federal_tax+=(306175-204100)*0.35;
				else{
					federal_tax+=(taxable_income-204100)*0.35;break;
				}
				if(taxable_income>306175){
				federal_tax+=(taxable_income-306175)*0.37;break;
			}
			case 4:
				taxable_income=income-18350;
				if(taxable_income>13850)
					federal_tax+=13850*0.10;
				else{
					federal_tax+=(taxable_income-0)*0.10;break;
				}
				if(taxable_income>52850)
					federal_tax+=(52850-13850)*0.12;
				else{
					federal_tax+=(taxable_income-13850)*0.12;break;
				}
				if(taxable_income>84200)
					federal_tax+=(84200-52850)*0.22;
				else{
					federal_tax+=(taxable_income-52850)*0.22;break;
				}
				if(taxable_income>160700)
					federal_tax+=(160700-84200)*0.24;
				else{
					federal_tax+=(taxable_income-84200)*0.24;break;
				}
				if(taxable_income>204100)
					federal_tax+=(204100-160700)*0.32;
				else{
					federal_tax+=(taxable_income-160700)*0.32;break;
				}
				if(taxable_income>510300)
					federal_tax+=(510300-204100)*0.35;
				else{
					federal_tax+=(taxable_income-204100)*0.35;break;
				}
				if(taxable_income>510300){
				federal_tax+=(taxable_income-510300)*0.37;break;
			}
			
			default:
			puts("Please enter an avaible status");	
		}
						
				
	
	
				printf("%s%.0lf","Yearly income :",income);
				puts("");
				printf("%s%.0lf","Taxable income :",taxable_income);
				puts("");
				printf("%s%.0lf","Federal tax :",federal_tax),
				puts("");
				printf("%s%.0lf","Social secruty cost :",social_security);
				puts("");
				printf("%s%.0lf","Medicare cost :",medicare);
				puts("");
				printf("%s%.0lf","Total yearly tax :",federal_tax+social_security+medicare);
				puts("");
				printf("%s%.0lf","You take home :",income-=federal_tax+social_security+medicare);
				puts("");
			}
			}while(income!=-1);	
	
	return 0;
}

