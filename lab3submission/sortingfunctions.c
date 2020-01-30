// CS 271
// Program Name: sortingfunctions.c
// Author: Jose Franco Baquera
// Date: September 11, 2017
// Purpose: The purpose of the program is to 
// implement two functions: the selectionSort function 
// and insertionSort function. Note: All of the
// functions will execute using ONLY pointers. 
 
// Include statements.

#include <stdio.h>
#include "sortingfunctions.h"

// Implementation of the selectionSort function.

int selectionSort ( int * const data, int size ) {
   
   // Declare an integer and integer pointer that will keep track 
   // of the smallest integer and its memory address.
    
   int smallestInteger;
   int *smallestIntegerPtr;
    
   // Declare and inizialize a counting variable that will count the number
   // of comparisons that are made.
   
   int numOfComparisons = 0;

   // Declare two integers for the for loops. 
   
   int i, k;
   
   for ( i = 0; i < size - 1; i++ ) {
       
      // Assume element i is the smallest
      // integer in the array.
       
      smallestInteger = *( data + i );
      smallestIntegerPtr = data + i;
      
      for ( k = i + 1; k < size; k++ ) {
          
         // Update the pointer and integer pointer
         // if integer at element k is smaller.
    
         if ( *( data + k ) < smallestInteger ) {
             
            smallestInteger = *( data + k );
            
            smallestIntegerPtr = data + k;
        
         } // end if statement
         
         numOfComparisons++;  
          
      } // end inner for loop  
      
      // If the smallest integer is at i, then no swapping is necessary, else
      // swap the contents of element i and the contents of the element
      // that has the smallest integer.
      
      if ( smallestIntegerPtr != ( data + i ) ) {
          
         swap( ( data + i), smallestIntegerPtr );
          
      } // end if statement.   
      
      numOfComparisons++;         
       
   } // end outer for loop.
   
   return numOfComparisons;
    
} // end selectionSort function

// Implementation of the insertionSort function.

int insertionSort ( int * const data, int size ) {

   // Declare and inizialize a counting variable that will count the number
   // of comparisons that are made.
   
   int numOfComparisons = 0;

   // Declare two integers for the for loops. 
   
   int i, k;
   
   // Use two for loops. The outer loop will check all the 
   // elements in the array. The inner loop will check the
   // element before i. Use if statement that will check 
   // the elements and swap them (using the swapping function)
   // if the element before is larger than the element after. The 
   // inner loop will only execute until k >= 0 in order to not 
   // go beyond the left most element.
   
   for ( i = 0; i < size; i++ ) {
              
      for ( k = i - 1; k >= 0; k-- ) {
          
         if ( *( data + k + 1) < *( data + k ) ) {
             
            swap( ( data + k ), ( data + k + 1 ) );
        
         } // end if statement.
         
         numOfComparisons++;
        
      } // end inner for loop.
       
   } // end outer for loop.
   
   return numOfComparisons;
   
} // end insertionSort function.
