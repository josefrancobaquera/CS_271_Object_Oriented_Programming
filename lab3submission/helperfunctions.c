// CS 271
// Program Name: helperfunctions.c
// Author: Jose Franco Baquera
// Date: September 11, 2017
// Purpose: The purpose of this program is
// to to write the implementations of three 
// functions: the swap function, the fillArray
// function, and the neatPrint function. Note:
// all functions must work with pointers 
// only. 

// Import various functions that we will need.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "helperfunctions.h"

// Implementation of sawp function.

void swap ( int * num1, int * num2 ) {
    
   // Declare and inizialize two temporary integer values for swapping.
   // We need to "derefrence" the pointers in order to exchange the
   // contents of the two memory locations.
       
   int tempIntegerOne = *num1;
   int tempIntegerTwo = *num2;
   
   // Swap the two contents.
   
   *num1 = tempIntegerTwo;
   *num2 = tempIntegerOne;    
    
} // end sawp function

// Implementation of fillArray function.

void fillArray ( int *const data, int size, int min, int max ) {
    
   // Inizialize integer for the for loop
    
   int i;
      
   // Use the srand function to make it more "random."
   
   srand( time( NULL ) );
   
   // Use a for loop to store random integers from min to max.  
   
   for ( i = 0; i < size; i++ ) {
       
      *( data + i ) = ( rand ( ) % (  max  -  min  +  1 ) ) +  min;
      
   } // end for loop    
    
} // end fillArray function

// Implementation of neatPrint function.

void neatPrint ( int * const data, int size, int numPerLine, int fieldSize ) {
    
   // Declare and inizialize a counting variable that will keep
   // track of the number of numbers printed.

   int numberCounter = 0;
        
   // Declare an integer for the for loop.
   
   int i;
   
   // Use a for loop to print all the contents in the array
   // in neat columns with a specified fieldSize.
   
   printf( "\n" );
    
   for ( i = 0; i < size; i++ ) {
       
      printf( "%*d", fieldSize, *( data + i ) );
      
      numberCounter++;
      
      if ( numberCounter % numPerLine == 0 )
          
         printf( "\n" );

   } // end for
   
   printf( "\n" );
    
} // end neatPrint function
