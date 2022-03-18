/*
	Name:		  Character Testing
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that inputs a character from the keyboard and tests it
					with each of the functions in the character-handling library. The program should print the value
					returned by each function.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main (void){
	
	char *string=(char*)malloc(sizeof(char));
	
	puts("Pls enter an character : ");

	
    fgets(string,2,stdin);
	
	printf("For \"%c\" character \n\n",*string);
	
	printf("%s%c%s","isblank() : ",isblank(*string),"\n"); // is a space' ' character ? 
	printf("%s%d%s","isdigit() : ",isdigit(*string),"\n"); // is a digit  
	printf("%s%d%s","isalpha() : ",isalpha(*string),"\n"); // is an alphabetical character 
	printf("%s%d%s","isalnum() : ",isalnum(*string),"\n"); // is an alphabetical or numarical character
	printf("%s%d%s","isxdigit() : ",isxdigit(*string),"\n"); // is an hexadecimal character
	printf("%s%d%s","islower() : ",islower(*string),"\n"); // is an lower character
	printf("%s%d%s","isupper() : ",isupper(*string),"\n"); // is an upper charater 
	printf("%s%c%s","tolower() : ",tolower(*string),"\n"); // convert to lower character
	printf("%s%c%s","toupper() : ",toupper(*string),"\n"); // convert ta upper character  
	printf("%s%d%s","isspace() : ",isspace(*string),"\n"); // is a ' ', '\n', '\r', '\t', '\f' or '\v'   character 
	printf("%s%d%s","iscntrl() : ",iscntrl(*string),"\n"); // is a a control character ( in ascii : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 127 )
	printf("%s%d%s","ispunct() : ",ispunct(*string),"\n"); // is a punctuation (! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~)
	printf("%s%d%s","isprint() : ",isprint(*string),"\n"); // is a printable chracter (printable chracters are :  ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ )
	printf("%s%d%s","isgraph() : ",isgraph(*string),"\n"); // is a graph chareter ( grap charters : same with printable chracters except  space' ' chareter 

	
 	// return zero for FALSE return a positive number for TRUE resullts
}
