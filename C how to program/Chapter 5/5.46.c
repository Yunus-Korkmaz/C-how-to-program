/*
	Name:		  5.46.c
	Author:       Yunus Korkmaz
	Date:		  13.07.20 11:09
	Description:  Find the error in each of the following program segments and explain how to correct it:
*/

	a) double cube( float ); 
	   cube( float number ) // -> double cube(float number)
	 {
	 		return number * number * number;
	 }
	 
	b) int randomNumber = srand(); // -> int randomNumber = rand();
	
	c) double y = 123.45678;
	   int x;		
	   x = y;// now x = 123
   	   printf( "%f\n", (double) x ); // now print 123.00000
   	   
	d) double square( double number )
   	  {
	 	double number; // cant define again
	 	return number * number;
	  }
	  
	e) int sum( int n )
	 {
	 if ( 0 == n ) {
	 return 0;
	 }
	 else {
	 return n + sum( n ); //  return n + sum( n -1 ) other ways the recursive never end
	 }
	}
