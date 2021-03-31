/*
	Name: 		  5.8.c 
	Author:       Yunus Korkmaz
	Date: 		  25.06.20 23:10
	Description:  Show the value of x after each of the following statements is performed:
					a) x = fabs( 7.5 );
					b) x = floor( 7.5 );
					c) x = fabs( 0.0 );
					d) x = ceil( 0.0 );
					e) x = fabs( -6.4 );
					f) x = ceil( -6.4 );
					g) x = ceil( -fabs( -8 + floor( -5.5 ) ) );
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	
	printf("%s%lf","x = ",fabs( 7.5 ));
	puts("");
	printf("%s%lf","x = ",floor( 7.5 ));
	puts("");
	printf("%s%lf","x = ",fabs( 0.0 ));
	puts("");
	printf("%s%lf","x = ",ceil( 0.0 ));
	puts("");
	printf("%s%lf","x = ",fabs( -6.4 ));
	puts("");
	printf("%s%lf","x = ",ceil( -6.4 ));
	puts("");
	printf("%s%lf","x = ",ceil( -fabs( -8 + floor( -5.5 ) ) ));
	
	return 0;
	
}
