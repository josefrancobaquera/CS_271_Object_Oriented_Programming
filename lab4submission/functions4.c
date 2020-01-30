// CS 271
// Program Name: functions4.c
// Author: Jose Franco Baquera
// Date: October 2, 2017
// Purpose: The purpose of this program is to place
// two function implementations (ie. splitAlpha and 
// printSequences). Note: This program will not have 
// a main function, just the implementation of the 
// two functions. 

// Place include statements.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "functions4.h"

// Implementation of splitAlpha function.

void splitAlpha ( const char * original, char * lower, char * upper ) {
    
   // Declare three integer variables that will make it 
   // possible to go through each array. Each will start 
   // at zero since arrays start at index 0.
    
   int oriCount = 0, lowCount = 0, upCount = 0;
    
   // Use a while loop that will go through the original char
   // array until the null character is reached.
    
   while ( * ( original + oriCount ) != '\0' ) {
       
      // First check if the element is a letter since
      // since non-alphabetic characters may be 
      // found in the original string.
       
      if ( isalpha ( * ( original + oriCount ) ) ) {
      
         // If the letter is lowercase, copy it to 
         // the lower array, else to the upper array.
         // Increment the counters
          
         if ( islower ( * ( original + oriCount ) ) ) {
             
            * ( lower + lowCount ) = * ( original + oriCount );
            
            lowCount = lowCount + 1;
             
         } // end inner if.
         
         else { 
             
            * ( upper + upCount ) = * ( original + oriCount );
            
            upCount = upCount + 1;
            
         } // end else.          
          
      } // end outer if.
      
      // Increment the oriCount in order to go to the
      // next element in the original character array.
             
      oriCount = oriCount + 1;       
       
   } // end while.
   
   // Add in a null character to both the lower and upper arrays in order
   // for them to be proper null-terminated strings. 
   
   * ( lower + lowCount ) = '\0';
   
   * ( upper + upCount ) = '\0';    
    
} // end splitAlpha function.

// Implementation of the printSequences function.

void printSequences ( const char * text ) {
    
   // Inizialize three integers: The first one will
   // keep track if there are sequencial digits/letters,
   // the sencond one will help us go 
   // through the array of characters using the
   // text pointer, and the last one will help us print
   // the characters sequencially. 

   int noSequence = 0;
      
   int textCounter = 0;
   
   int sequeCounter = 0;
      
   // Use a while loop that will go trough the entire 
   // character array until the null character is reached.
    
   while ( * ( text + textCounter ) != '\0' )  {
       
      // First check if the element is a digit or 
      // letter. If not, then go to the next character.
       
      if ( isalnum ( * ( text + textCounter ) ) ) {
          
         // Check wether the current element and the next element are in sequence.
          
         while ( ( * ( text + textCounter ) == * ( text + textCounter + 1 ) - 1 ) ) {
             
            // Increment the integer variables.
             
            textCounter++;
         
            sequeCounter++;
            
            noSequence++;
            
         } // end while.
         
         // If a sequence of digits or letters was found, print them.
         
         if ( sequeCounter >= 1 ) {
         
            while ( sequeCounter > -1 ) {
             
               printf ( "%c", * ( text + ( textCounter - sequeCounter ) ) );
               
               sequeCounter--;
             
            } // end while.
            
            // Print a newline after the sequence is printed for easier read.
            
            printf ( "\n" );
            
         } // end if
         
         // Increment textCounter in order to go to the next element. 

         textCounter++;
        
      } // end if.
      
      else { 
          
         // If the element was not a digit or a letter, go to the next one.
          
         textCounter++;
          
      } // end else.
      
      // "Re-start" the sequeCounter back to zero in order to make it possible to print
      // the next sequential digits or letters.
      
      sequeCounter = 0;
          
   } // end while.
   
   // If the string had no sequencial letters or digits, print an error message.
   
   if ( noSequence == 0 )
       
      printf ( "--Ooops. The string has no sequencial digits or letters.---\n" );
    
} // end printSequences function.
