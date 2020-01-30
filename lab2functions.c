// CS 271
// Program Name: lab2functions.c
// Author: Jose Franco Baquera
// Date: September 5, 2017
// Purpose: The purpose of this program is to place
// all the four function implementations (ie. printCharArray, moveLetters,
// countLetters, and numMatches ). Note: This program will not have 
// a main function, just the implementation of the four functions. 

// Place include statements.

#include <stdio.h>
#include "lab2functions.h"

// Implementation of printCharArray function.

void printCharArray( char characterArray [ ], int arraySize ) {

   // Declare and initialize a counting variable to zero in order to print
   // 10 chars per line.
    
   int numberCount = 0;
    
   // Declare a variable for the for loop.
   
   int i;
    
   // Make a for loop that will start at zero and end 
   // at arraySize - 1.
   
   for ( i = 0; i < arraySize; i = i + 1 ) {
    
      // Print the element at index i.
       
      printf( "%c ", characterArray[ i ] );
     
      // Increase numberCount by 1, if ten
      // numbers are printed, go to next line.
      
      numberCount = numberCount + 1;
     
      if ( numberCount % 10 == 0 )
          
         printf( "\n" );
                
   } // end for
   
   // Print a blank lane in order for better readability after 
   // printing all the elements.
   
   printf( "\n" );
        
} // end printCharArray function

// Implementation of moveLetters function.

void moveLetters ( char characterArray [ ], int arraySize ) {
    
   // Declare two temporary char variables to make swapping possible.
    
   char temporaryCharOne, temporaryCharTwo;

   // Declare two int variables to use for two for loops.
   
   int i;
   int j;
   
   // Use two for loops. The first loop will chack all the 
   // elements in the char array. If it is a letter, the second
   // for loop will execute. The second for loop will compare
   // the character before the letter. The second for loop only
   // executes if j >= 0 in order to avoid any negative indexes. 
   // The second if-statement will check if the character before
   // is a letter. If it is, do not do anything else. If is,
   // sawp the characters. This algorithm will swap all the letters to 
   // front and everything else to back, without changing the order.
   
   for( i = 0; i < arraySize; i = i + 1 ) { 

      if( isalpha( characterArray[ i ] ) ) {
      
         for ( j = i - 1; j >= 0; j= j - 1 ){
            
            if ( !( isalpha( characterArray[ j ] ) ) ){
            
            temporaryCharOne = characterArray[ j ];
            temporaryCharTwo = characterArray[ j + 1 ];
            characterArray[ j + 1 ] = temporaryCharOne;
            characterArray[ j ] = temporaryCharTwo;
            
            } // end if
            
         } // end inner for
         
      } // end if
      
   } // end for
   
} // end moveLetters function

// Implementation of countLetters function.

int countLetters ( char characterArray [ ], int arraySize ) {
    
   // Declare a variable for the for loop, declare
   // and initialize a variable count to zero 
   // to count all the letters in the array.
    
   int i, count = 0;
   
   // Use for loop to check if each element in the array
   // is a letter or not. If it is, increment count.
   
   for ( i = 0; i < arraySize; i = i + 1 ) {
       
      if ( isalpha( characterArray[ i ] ) )
      
         count = count + 1;       
       
   } // end for
   
   // Return count. 
   
   return count;
       
} // end countLetters function 

// Implementation of numMatches function.

// We assume both array patameters have the same length, so only one array size parameter
// is needed.

int numMatches ( char characterArrayOne [ ], char characterArrayTwo [ ], int arraySizeOfBoth ) {
   
   // Declare a variable for the for loop, declare and initialize a varaible count
   // to zero.
    
   int i, count = 0;
   
   // Use a for loop that starts at zero and stops at the
   // array size - 1. Compare both elements in each array.
   // If they are the same, increment count.
   
   for ( i = 0; i < arraySizeOfBoth; i = i + 1 ) {
       
      if ( characterArrayOne[ i ] == characterArrayTwo[ i ] )
          
         count = count + 1;

   } // end for 
   
   // Return count.
   
   return count; 
    
} // end numMatches function
