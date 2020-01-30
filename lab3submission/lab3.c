// CS 271
// Program Name: lab3.c
// Author: Jose Franco Baquera
// Date: September 11, 2017
// Purpose: The purpose of the program 
// is to test both the helperfunctions and
// sortingfunctions files through a dynamically
// allocated memory for an array. All functions 
// will be tested trough pointers.

// Include statements.

#include <stdio.h>
#include <stdlib.h>
#include "helperfunctions.h"
#include "sortingfunctions.h"
#define ARRAYSIZEONE 10
#define ARRAYSIZETWO 50

int main ( void ) {

   // Dynamically allocate memory space for arrays.
   
   int *arrayOnePtr = ( int * ) malloc ( ARRAYSIZEONE * sizeof ( int ) );
   int *arrayTwoPtr = ( int * ) malloc ( ARRAYSIZETWO * sizeof ( int ) );
   
   printf( "\n------------------------Testing Array One------------------------" );
   
   // Fill the first array with random integers between -10 and 10.
   
   fillArray ( arrayOnePtr, ARRAYSIZEONE, -10, 10 );
   
   // Print the array, 10 elements per line, field size 5.
   
   printf( "\nThis is the first array with random numbers between -10 and 10, 10 per line, 5 field width:\n" );
   
   neatPrint( arrayOnePtr, ARRAYSIZEONE, 10, 5 );

   // Sort the array using selection sort.

   selectionSort( arrayOnePtr, ARRAYSIZEONE ); 
   
   // Print the array, 10 elements per line, field size 5.
   
   printf( "\nThis is the first array sorted with selection sort:\n" ); 
   
   neatPrint( arrayOnePtr, ARRAYSIZEONE, 10, 5 ); 
   
   // Print the number of comparisons.
   
   int x = selectionSort( arrayOnePtr, ARRAYSIZEONE ); 
   
   printf( "\nSelection sort with the first array had %d comparisons.\n", x );
   
   // Fill array one back again with random integers. This time with numbers
   // between 0 and 20.
   
   fillArray ( arrayOnePtr, ARRAYSIZEONE, 0, 20 );
   
   // Print the array, 5 elements per line, field width of 4.
   
   printf( "\nThis is the first array again but filled with different random numbers between 0 and 20, 5 per line, field width 4:\n" );
   
   neatPrint( arrayOnePtr, ARRAYSIZEONE, 5, 4 ); 
   
   // Sort with insertion sort.
   
   insertionSort( arrayOnePtr, ARRAYSIZEONE );
   
   // Print the array, 5 elements per line, field width 4.
   
   printf( "\nThis is the first array with different random numbers sorted with insertion sort:\n" ); 
   
   neatPrint( arrayOnePtr, ARRAYSIZEONE, 5, 4 );
   
   // Print the number of comparisons.
   
   int y = insertionSort( arrayOnePtr, ARRAYSIZEONE ); 
   
   printf( "\nInsertion sort with the first array with different random integers had %d comparisons.\n", y );
   
   printf( "\n------------------------Testing Array Two------------------------" );
   
   // Fill the second array with random integers between -100 and -20.
   
   fillArray ( arrayTwoPtr, ARRAYSIZETWO, -100, -20 );
   
   // Print the array, 10 elements per line, field size 6.
   
   printf( "\nThis is the second array with random numbers between -100 and -20, 10 per line, 6 field width:\n" );
   
   neatPrint( arrayTwoPtr, ARRAYSIZETWO, 10, 6 );

   // Sort the array using selection sort.

   selectionSort( arrayTwoPtr, ARRAYSIZETWO ); 
   
   // Print the array, 10 elements per line, field size 6.
   
   printf( "\nThis is the second array sorted with selection sort:\n" ); 
   
   neatPrint( arrayTwoPtr, ARRAYSIZETWO, 10, 6 ); 
   
   // Print the number of comparisons.
   
   x = selectionSort( arrayTwoPtr, ARRAYSIZETWO ); 
   
   printf( "\nSelection sort with the second array had %d comparisons.\n", x );
   
   // Fill array one back again with random integers. This time with numbers
   // between 21 and 33.
   
   fillArray ( arrayTwoPtr, ARRAYSIZETWO, 21, 33 );
   
   // Print the array, 3 elements per line, field width of 7.
   
   printf( "\nThis is the second array again but filled with different random numbers between 21 and 33, 3 per line, field width 7:\n" );
   
   neatPrint( arrayTwoPtr, ARRAYSIZETWO, 3, 7 ); 
   
   // Sort with insertion sort.
   
   insertionSort( arrayTwoPtr, ARRAYSIZETWO );
   
   // Print the array, 3 elements per line, field width 7.
   
   printf( "\nThis is the second array with different random numbers sorted with insertion sort:\n" ); 
   
   neatPrint( arrayTwoPtr, ARRAYSIZETWO, 3, 7 );
   
   // Print the number of comparisons.
   
   y = insertionSort( arrayTwoPtr, ARRAYSIZETWO ); 
   
   printf( "\nInsertion sort with the second array with different random integers had %d comparisons.\n", y );  
   
   printf( "\nNOTE: We do not need to test the swap function since sortingfunctions uses the swap function already.\n\n" ); 
   
   // Free the dynamically allocated memory.
   
   free ( arrayOnePtr );
   free ( arrayTwoPtr );
    
} // end main function
