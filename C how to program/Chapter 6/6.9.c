/*
	Name:		  6.9.c
	Author:       Yunus Korkmaz
	Date:		  19.07.20 19:26
	Description:  Consider a 2-by-5 integer array t.
					a) Write a definition for t.
					b) How many rows does t have?
					c) How many columns does t have?
					d) How many elements does t have?
					e) Write the names of all the elements in the second row of t.
					f) Write the names of all the elements in the third column of t.
					g) Write a single statement that sets the element of t in row 1 and column 2 to zero.
					h) Write a series of statements that initialize each element of t to zero. Do not use a repetition structure.
					i) Write a nested for statement that initializes each element of t to zero.
					j) Write a statement that inputs the values for the elements of t from the terminal.
					k) Write a series of statements that determine and print the smallest value in array t.
					l) Write a statement that displays the elements of the first row of t.
					m) Write a statement that totals the elements of the fourth column of t.
					n) Write a series of statements that print the array t in tabular format. List the column subscripts as headings 
						across the top and list the row subscripts at the left of each row.
*/

	a.) int t[2][5];
	
	b.)2 or 5 depents on how you are think
	
	c.)some logic 2 or 5 depents on how you are think
	
	d.)2*5=10 
	
	e.)if first row and second column t[1][0],t[1][1],t[1][2],t[1][3],t[1][4] or fist column and second row t[0][1],t[1][1]
			// for me first parentheses is row and second parentheses is column 
	f.)t[0][2],[1][2]
	
	g.)for(i=0;i<5;i++){
		t[0][i]=0;
	}
		for(i=0;i<2;i++)
			t[i][1]=0;
			
	h.)t[2][5]={0};
	
	i.)for(i=0;i<2;i++)
		for(j=0;j<5;j++)
			t[i][j]=0;
			
	j.)scanf("%d",t) // given number taken by t[0] means t[0][0]
	
	k.)int smallest=t[0];
		for(i=0;i<2;i++)
			for(j=0;j<5;j++){
			if(smallest>t[i][j])
				smallest=t[i][j];
		}
		printf("%d",smallest);
		
	l.)for(i=0;i<5;i++)
		printf("%d ",t[0][i]);
		
	m.)int result=0;
		for(i=0;i<2;i++)
			result+=t[i][3];	
			
	n.)printf("%6d%3d%3d%3d%3d",0,1,2,3,4);   // I dind't test this code maybe it need to be edit
		for(i=0;i<2;i++){
			printf("%d  ",i);
			for(j=0;j<5;j++)
				printf("%d",t[i][j]);
			puts("");
		}
