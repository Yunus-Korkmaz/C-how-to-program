/*
	Name: 		  3.31_c.c
	Author:       Yunus Korkmaz
	Date: 		  06.06.20 23:43
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
				  c) Assuming x = 5 and y = 8, the following output is produced
				  
*/

#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 8;
	if ( y == 8 )
	if ( x == 5 )
	puts( "@@@@@" );
    else{
	puts( "#####" );
	puts( "$$$$$" );
	}
	puts( "&&&&&" );
	
	return 0;
}
