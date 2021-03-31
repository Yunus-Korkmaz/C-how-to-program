/*
	Name: 		  3.31_d.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 23:47
	Description:  (Another Dangling Else Problem) Modify the following code to produce the output shown.
				  Use proper indentation techniques. You may not make any changes other than inserting braces. The
				  compiler ignores the indentation in a program. We eliminated the indentation from the following
				  code to make the problem more challenging. [Note: It’s possible that no modification is necessary.]
				  if ( y == 8 )
				  if ( x == 5 )
				  puts( "@@@@@" );
  				  else
				  puts( "#####" );
				  puts( "$$$$$" );
				  puts( "&&&&&" ); 
				  d) Assuming x = 5 and y = 7, the following output is produced. [Note: The last three puts
				  statements are all part of a compound statement.]
				  
*/

#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 7;
	if ( y == 8 ){
	if ( x == 5 )
	puts( "@@@@@" );
	}
    else{
	puts( "#####" );
	puts( "$$$$$" );
	puts( "&&&&&" );
	}
	
	return 0;
}
