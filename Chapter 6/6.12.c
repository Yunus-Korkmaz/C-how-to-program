/*
	Name:		  6.12.c
	Author:       Yunus Korkmaz
	Date:	      19.07.20 22:33
	Description:  Write loops that perform each of the following single-subscripted array operations:
					a) Initialize the 10 elements of integer array counts to zeros.
					b) Add 1 to each of the 15 elements of integer array bonus.
					c) Read the 12 values of floating-point array monthlyTemperatures from the keyboard.
					d) Print the five values of integer array bestScores in column format.
*/

	
	// a.)
	int counts;
	size_t i;
		for(i=0;i<10;i++)
			counts[i]=0;
			
	// b.)
	size_t i;
		for(i=0;i<15;i++)
			bonus[i]++;
			
	// c.)
	double mountlytempratures[12];
	size_t i;
		for(i=0;i<15;i++)
			scanf("%lf",mountlytempratures[i]);
			
	// d.)
	int bestscores[5];
	size_t i;
		for(i=0;i<5;i++){
			printf("%d",bestscores[i]);
			puts("");
		}
		

