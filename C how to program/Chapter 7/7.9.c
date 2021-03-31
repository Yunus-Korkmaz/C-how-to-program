/*
	Name:		  7.9.c
	Author:       Yunus Korkmaz
	Date:		  04.09.20 10:34
	Description:  Answer each of the following. Assume that unsigned integers are stored in 2 bytes and that
					the starting address of the array is at location 1002500 in memory.
						a) Define an array of type unsigned int called values with five elements, and initialize the
						elements to the even integers from 2 to 10. Assume the symbolic constant SIZE has been
						defined as 5.
						b) Define a pointer vPtr that points to an object of type unsigned int.
						c) Print the elements of array values using array subscript notation. Use a for statement
						and assume integer control variable i has been defined.
						d) Give two separate statements that assign the starting address of array values to pointer
						variable vPtr.
						e) Print the elements of array values using pointer/offset notation.
						f) Print the elements of array values using pointer/offset notation with the array name as
						the pointer.
						g) Print the elements of array values by subscripting the pointer to the array.
						h) Refer to element 5 of array values using array subscript notation, pointer/offset notation with the array name as the pointer, 
						pointer subscript notation, and pointer/offset notation.
						i) What address is referenced by vPtr + 3? What value is stored at that location?
						j) Assuming vPtr points to values[4], what address is referenced by vPtr -= 4? What value is stored at that location?
						
*/


	// a.)
		unsigned int values[SIZE]={2,4,6,8,10};
		
	// b.)
		unsigned int *vPtr;

	// c.)
		for(i=0;i<5;i++)
			printf("%u",values[i]);
			
	// d.) 
		vPtr=values;
		vPtr=&values[0];
		
	// e.)
		for(i=0;i<5;i++)
			printf("%u",*(vPtr + i));
			
	// f.) 
		for(i=0;i<5;i++)
			printf("%u",*(values + i));
			
	// g.)
		for(i=0;i<5;i++)
			printf("%u",vPtr[i]);
			
	// h.)
		values[4];
		vPtr[4];
		*(values+4);
		*(vPtr + 4);
		
	// i.)
		values  = 1002500 so vPtr=1002500
		vPtr +3 = 1002500 + 2*3 = 1002506
		
	// j.)
		vPtr -=4 -> 1002508 - 2*4 = 1002500 = values = &values[0]
		*vPtr = 2;
		
		
	
