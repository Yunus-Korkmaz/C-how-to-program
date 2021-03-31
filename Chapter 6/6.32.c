/*
	Name:		  6.32.c
	Author:       Yunus Korkmaz
	Date:		  12.08.20 12:54
	Description:  (Linear Search) Modify the program of Fig. 6.18 to use a recursive linearSearch function
					to perform the linear search of the array. The function should receive an integer array, the size of
					the array and the search key as arguments. If the search key is found, return the array subscript; otherwise, return –1.
*/
// Recursive Linear search of an array.
#include <stdio.h>
#define SIZE 100

// function prototype
size_t recursivelinearSearch( const int array[], int key, size_t size ); 

// function main begins program execution
int main( void )
{   
   int a[ SIZE ]; // create array a
   size_t x; // counter for initializing elements 0-99 of array a
   int searchKey; // value to locate in array a
   size_t element; // variable to hold location of searchKey or -1

   // create some data
   for ( x = 0; x < SIZE; ++x ) { 
      a[ x ] = 2 * x;
   } // end for

   puts( "Enter integer search key:" );
   scanf( "%d", &searchKey );

   // attempt to locate searchKey in array a 
   element = recursivelinearSearch( a, searchKey, SIZE );

   // display results
   if ( element != -1 ) {
      printf( "Found value in element %d\n", element );
   } // end if
   else {
      puts( "Value not found" );
   } // end else
} // end main

// compare key to every element of array until the location is found 
// or until the end of array is reached; return subscript of element 
// if key is found or -1 if key is not found                               
size_t recursivelinearSearch( const int array[], int key, size_t size )      
{              
	if(size-1==-1) // base case 
		return -1;
                                                      
   if(array[size-1]==key) // control the item
   		return size-1;
	else
		recursivelinearSearch(array,key,--size);   // if not find call function again for next search
		                      
} // end function recursivelinearSearch                                    


