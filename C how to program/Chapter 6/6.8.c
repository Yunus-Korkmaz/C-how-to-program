/*
	Name:	   	  6.8.c
	Author:       Yunus Korkmaz
	Date:	  	  19.07.20 18:55
	Description:  Write statements to accomplish each of the following:
					a) Display the value of the seventh element of character array f.
					b) Input a value into element 4 of single-subscripted floating-point array b.
					c) Initialize each of the five elements of single-subscripted integer array g to 8.
					d) Total the elements of floating-point array c of 100 elements.
					e) Copy array a into the first portion of array b. Assume double a[11], b[34];
					f) Determine and print the smallest and largest values contained in 99-element floatingpoint array w.
*/


	a.) printf("%d",f[6]);
	
	b.) scanf("%d",b[3]);
	
	c.) size_t i;
		for(i=0;i<5;i++)
			g[i]=8;
			
	d.)int result=0;
	   size_t i;
		for(i=0;i<100;i++)
			result+=c[i];
			
	e.)double a[11],b[34];
	   size_t i;
	   	for(i=0;i<11;i++)
	   		b[i]=a[i];
	   		
	f.)int largest=w[0],smallest=w[0];
	   size_t i;
		for(i=0;i<99;i++){
			if(largest<w[i])
				largets=w[i];
			if(smallest>w[i])
				smallest=w[i];
		}
		
