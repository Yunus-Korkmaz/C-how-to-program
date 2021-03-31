/*
	Name:		  6.13.c
	Author:       Yunus Korkmaz
	Date:		  19.07.20 23:26
	Description:  Find the error(s) in each of the following statements:
*/

	a) Assume: char str[ 5 ];
 		scanf( "%s", str ); // User types hello 
 	 
 	- 'hello' is five chracter but char arrays has one digit it is '\n' so str size need to be six
 	
 	b) Assume: int a[ 3 ];
		 printf( "$d %d %d\n", a[ 1 ], a[ 2 ], a[ 3 ] );

	-first error dollar symbol and this is can be realy mistake because it has nothing to do with the subject 
	-second error is last index 2 but ,3 used .Ýt can cause run time eror or compilar eror,if a[3] adresses is free program print the trash value(run time eror),
	if that adresses accesed by system or onether program compilar give eror(compilar eror)
	
	c) double f[ 3 ] = { 1.1, 10.01, 100.001, 1000.0001 };
	
	-array f size 3 but received 4 items
	
	d) Assume: double d[ 2 ][ 10 ];
 		d[ 1, 9 ] = 2.345; 
 		
 	-this an sytanx eror need to be d[1][9]
