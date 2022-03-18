/*
	Name:		  (Pig Latin)
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that encodes English-language phrases into pig Latin. 
				Pig Latin is a form of coded language often used for amusement. Many variations exist in the methods used
				to form pig-Latin phrases. For simplicity, use the following algorithm:
				To form a pig-Latin phrase from an English-language phrase, tokenize the phrase into words
				with function strtok. To translate each English word into a pig-Latin word, place the first letter of
				the English word at the end of the English word and add the letters "ay". Thus the word "jump"
				becomes "umpjay", the word "the" becomes "hetay" and the word "computer" becomes "omputercay". 
				Blanks between words remain as blanks. Assume the following: The English phrase consists
				of words separated by blanks, there are no punctuation marks, and all words have two or more letters. 
				Function printLatinWord should display each word. [Hint: Each time a token is found in a
				call to strtok, pass the token pointer to function printLatinWord, and print the pig-Latin word.
				Note: We’ve provided simplified rules for converting words to pig Latin here. For more detailed
				rules and variations, visit en.wikipedia.org/wiki/Pig_latin.]
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void const * pig_latin(char const *word);

int main(void){
	
	char text[]={"this email is intended only for the use of the person or entity to whom it is addressed and contains information "
			   	"that may be subject to and or may be restricted from disclosure by contract or applicable law If you are not "
				"the intended recipient of this email be advised that any disclosure copy distribution or use of the contents "
				"of this message is strictly prohibited If you are not the intended recipient of this email please notify the "
				"sender that you have received this in error by replying to this message Then please delete it from your system" };
				
	printf("%s ","\t\t\t----------------------------Orginal text---------------------------- \n");
	printf("%s",text);
	puts("\n");
	
	printf("%s ","\t\t\t----------------------------Pig Latin text---------------------------- \n");
		
		
		
	pig_latin(strtok(text," "));				// strtok will return a pieces of text than send it to pig_latin function 
	while(pig_latin(strtok(NULL," "))!=NULL);
		
	

	
	
	
}
void const * pig_latin(char const *word){
	
	if(word==NULL)
		return NULL;
		
	size_t i=1;
	while (word[i]!='\0')
	printf("%c",word[i++]);
	printf("%c",word[0]);
	printf("%s","ay ");

	return  word ;
}


