/*
	Name:		  5.49.c
	Author:       Yunus Korkmaz
	Date:		  15.07.20 14:20
	Description:  (Global Warming Facts Quiz) The controversial issue of global warming has been widely
					publicized by the film An Inconvenient Truth, featuring former Vice President Al Gore. Mr. Gore
					and a U.N. network of scientists, the Intergovernmental Panel on Climate Change, shared the 2007
					Nobel Peace Prize in recognition of “their efforts to build up and disseminate greater knowledge
					about man-made climate change.” Research both sides of the global warming issue online (you
					might want to search for phrases like “global warming skeptics”). Create a five-question multiple-
					choice quiz on global warming, each question having four possible answers (numbered 1–4). 
					Be objective and try to fairly represent both sides of the issue. Next, write an application that administers
					the quiz, calculates the number of correct answers (zero through five) and returns a message to the
					user. If the user correctly answers five questions, print “Excellent”; if four, print “Very good”; if
					three or fewer, print “Time to brush up on your knowledge of global warming,” and include a list
					of some of the websites where you found your facts.
*/

#include<stdio.h>

char questions(int n);

int main(void){
	
	puts("Lets start the short quiz about global warming :\n");
	
	int i,true_questions=0;
	char choices;
	
	for(i=1;i<=5;i++){
		
		choices=questions(i);
		printf("%c  ",choices);
		
		switch(i){
			case 1:
				if(choices=='d' || choices=='D')
				true_questions++;
				break;
			
			case 2:
				if(choices=='C' || choices=='c')
				true_questions++;
				break;	
			
			case 3:
				if(choices=='A' || choices=='a')
				true_questions++;
				break;
				
			case 4:
				if(choices=='d' || choices=='D')
				true_questions++;
				break;
				
			case 5:
				if(choices=='b' || choices=='B')
				true_questions++;
				break;
				
			default :
				break;
				
		}
		puts("");
		
	}
	
	printf("%s%d%s%d","You have ",true_questions," true questions and ",5-true_questions," false questions");
	
	return 0;
}
char questions(int n){
	
	char options=0;
	
	switch(n){
		
		case 1:
			puts("1.)Which of the following is a greenhouse gas?");
			puts("A.)CO2");
			puts("B.)CH4");
			puts("C.)Water vapor");
			puts("D.)All of the above");
			break;
			
		case 2:
			puts("2.)What is the Greenhouse Effect?");
			puts("A.)The name of climate change legislation that passed by congress");
			puts("B.)When you paint your house green to become an environmentalist");
			puts("C.) When the gasses in our atmosphere trap heat and block it from escaping our planet");
			puts("D.) When you build a greenhouse");
			break;
		
		case 3:
			puts("3.)Which of these countries emits the most carbon dioxide?");
			puts("A.)China");
			puts("B.)USA");
			puts("C.)UK");
			puts("D.)Russia");
			break;
			
		case 4:
			puts("4.)What can you do to help fight climate change?");
			puts("A.)Divest from fossil fuel companies");
			puts("B.)Engage yourself in the science behind climate change");
			puts("C.)Vote for political candidates who will advocate for climate-related legislation and policy improvements");
			puts("D.)All of the above");
			break;
			
		case 5:
			puts("5.)What was agreed to in the “Paris Agreement” that came out of COP-21, held in Paris in 2015?");
			puts("A.)To protect biodiversity and end the deforestation of the world’s rainforests");
			puts("B.)To keep global temperature rise well below 2? pre-industrial levels and to pursue a path to limit warming to 1.5?");
			puts("C.)To limit sea level rise to 3 feet above current levels");
			puts("D.)To pursue a goal of 100% clean, renewable energy");
			break;
			
		default :
			break;
	}
	
			puts("\nPlease enter a choice :");
			
			while((options=getchar())!='\n');
			
			puts("Questions recorded ,next quesitons:");
			printf("%s","=============================================\n");

			return options;
}
