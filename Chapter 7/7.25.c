/*
	Name:
	Author:       Yunus Korkmaz
	Date:
	Description:  a
*/
 // Fig. 6.22: fig06_22.c
// Double-subscripted array manipulations.
 #include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

 // function prototypes
void minimum( int grades[][ EXAMS ], size_t pupils, size_t tests );
void maximum( int grades[][ EXAMS ], size_t pupils, size_t tests );
void average( int grades[][ EXAMS ], size_t pupils, size_t tests );
 void printArray( int grades[][ EXAMS ], size_t pupils, size_t tests );

// function main begins program execution
 int main( void )
 {
 size_t student; // student counter

 int studentGrades[ STUDENTS ][ EXAMS ] = 
 { { 77, 68, 86, 73 },
 { 96, 87, 89, 78 },
 { 70, 90, 86, 81 } };

 void (*processGrades[4])(int grades[][ EXAMS ], size_t pupils, size_t tests)={printArray,minimum,maximum,average};
 
 int choice;
 
 do{
 
printf("%s%s%s%s%s","Enter a choice:\n",
 "0 Print the array of grades\n",
 "1 Find the minimum grade\n",
 "2 Find the maximum grade\n",
 "3 Print the average on all tests for each student\n",
 "4 End program");
 
 scanf("%d",&choice);
 
 if(choice<4 && choice>=0)
 processGrades[choice](studentGrades,STUDENTS,EXAMS);
 
 puts("");
}while(choice!=4);
 
	return 0;
 } 
 
 // Find the minimum grade
 void minimum( int grades[][ EXAMS ], size_t pupils, size_t tests )
 {
 size_t i; // student counter
 size_t j; // exam counter
 int lowGrade = 100; // initialize to highest possible grade

 // loop through rows of grades
 for ( i = 0; i < pupils; ++i ) {

 // loop through columns of grades
 for ( j = 0; j < tests; ++j ) {

 if ( grades[ i ][ j ] < lowGrade ) {
	lowGrade = grades[ i ][ j ];
 } // end if
 } // end inner for
 } // end outer for
	printf("\nLowest grade: %d\n",lowGrade); // print minimum grade
 } // end function minimum

 // Find the maximum grade
void maximum( int grades[][ EXAMS ], size_t pupils, size_t tests )
 {
 size_t i; // student counter
 size_t j; // exam counter
int highGrade = 0; // initialize to lowest possible grade

 // loop through rows of grades
 for ( i = 0; i < pupils; ++i ) {

 // loop through columns of grades
for ( j = 0; j < tests; ++j ) {

 if ( grades[ i ][ j ] > highGrade ) {
 highGrade = grades[ i ][ j ];
 } // end if
 } // end inner for
 } // end outer for

 printf("\nHighest grade: %d\n",highGrade); // print maximum grade
 } // end function maximum
// Determine the average grade for a particular student
void average( int grades[][ EXAMS ], size_t pupils, size_t tests  ) 
{ 
 size_t i,j; // exam counter 
 int total = 0; // sum of test grades 
 
 // total all grades for one student 
 for(j=0;j<pupils;j++){
 	for ( i = 0; i < tests; ++i ) 
 total += grades[j][i]; 
 
 printf("The average grade for student %u is %.2f\n",j,(double)total/tests);
 total=0;
 
}
 
 return ; // average 
} // end function average
void printArray( int grades[][ EXAMS ], size_t pupils, size_t tests )
 {
 	printf("The array is:\n");
 size_t i; // student counter
 size_t j; // exam counter

 // output column heads
printf( "%s", " [0] [1] [2] [3]" ); 
// output grades in tabular format
 for ( i = 0; i < pupils; ++i ) {

 // output label for row
 printf( "\nstudentGrades[%d] ", i );

 // output grades for one student
 for ( j = 0; j < tests; ++j ) {
 printf( "%-5d", grades[ i ][ j ] );
 } // end inner for
 } // end outer for
 } // end function printArray

