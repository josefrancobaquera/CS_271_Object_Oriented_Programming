// CS 271
// Program Name: lab2.c
// Author: Jose Franco Baquera
// Date: September 5, 2017
// Purpose: The purpose of this program is to include 
// a main function that will test all the implemented functions
// in lab2functions.c. The output will clearly state which 
// function is being tested. 

#include "lab2functions.h"
#include <stdio.h>

int main ( void ) {
    
   // Declare various char arrays in order to test toroughly 
   // all four functions. 
    
   char testArrayOne [ ] = { 'A', 'C', '9', 'L', '$' };
   char testArrayTwo [ ] = { 'B' };
   char testArrayThree [ ] = { '3' };
   char testArrayFour [ ] = { 'A', 'b', 'a', 'a', 'a', '8', '8', '1', 'Z' };
   char testArrayFive [ ] = { 'A', 'b', '8', '%', '+', '8', '*', ']', 'Z' };
   char testArraySix [ ] = { 'A', 'b', '8', '%', '+', '8', '*', ']', 'Z', 'A', 'C', '9', 'L', '$', 'a', 'a', 'a' };
      
   // Test the printCharArray function. 
   
   printf( "\n----------Testing printCharArray Function----------\n\n" );
   
   // Call all functions to print the arrays. 
   
   printf( "Testing testArrayOne:\n" );
   printCharArray( testArrayOne, 5 );
   printf( "Testing testArrayTwo:\n" );
   printCharArray( testArrayTwo, 1 );
   printf( "Testing testArrayThree:\n" );
   printCharArray( testArrayThree, 1 );
   printf( "Testing testArrayFour:\n" );
   printCharArray( testArrayFour, 9 );
   printf( "Testing testArrayFive:\n" );
   printCharArray( testArrayFive, 9 );
   printf( "Testing testArraySix:\n" );
   printCharArray( testArraySix, 17 );
   
   // Test the countLetters function.
   
   // Declare an int for the for loop.
   
   int i;
   
   // Print meaningful pessages to the user.
   
   printf( "\n----------Testing countLetters Function----------\n\n" );
   
   printf( "   ***testArrayOne Array***   \n" );
   
   printf( "This is testArrayOne: " );
   
   for ( i = 0; i < 5; i = i + 1 ) {
       
      printf( "%c ", testArrayOne[ i ] );       
       
   } // end for
   
   printf( "\ntestArrayOne has %d letter(s).\n", countLetters( testArrayOne, 5 ) );
   
   printf( "   ***testArrayTwo Array***   \n" );
   
   printf( "This is testArrayTwo: " );
   
   for ( i = 0; i < 1; i = i + 1 ) {
       
      printf( "%c ", testArrayTwo[ i ] );       
       
   } // end for
   
   printf( "\ntestArrayTwo has %d letter(s).", countLetters( testArrayTwo, 1 ) );
   
   printf( "\n   ***testArrayThree Array***   \n" );
   
   printf( "This is testArrayThree: " );
   
   for ( i = 0; i < 1; i = i + 1 ) {
       
      printf( "%c ", testArrayThree[ i ] );       
       
   } // end for
   
   printf( "\ntestArrayThree has %d letter(s).", countLetters( testArrayThree, 1 ) );
   
   printf( "\n   ***testArrayFour Array***   \n" );
   
   printf( "This is testArrayFour: " );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFour[ i ] );       
       
   } // end for
   
   printf( "\ntestArrayFour has %d letter(s).", countLetters( testArrayFour, 9 ) );
      
   printf( "\n   ***testArrayFive Array***   \n" );
   
   printf( "This is testArrayFive: " );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFive[ i ] );       
       
   } // end for
   
   printf( "\ntestArrayFive has %d letter(s).", countLetters( testArrayFive, 9 ) );
   
   printf( "\n   ***testArraySix Array***   \n" );
   
   printf( "This is testArraySix: " );
   
   for ( i = 0; i < 17; i = i + 1 ) {
       
      printf( "%c ", testArraySix[ i ] );       
       
   } // end for
   
   printf( "\ntestArraySix has %d letter(s).\n", countLetters( testArraySix, 17 ) );

   // Test the numMatches function.

   printf( "\n----------Testing numMatches Function----------\n\n" );
   
   printf( " ***testArrayFour Array/testArrayFive Array***\n" );
   
   printf( "This is testArrayFour: " );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFour[ i ] );
       
   } // end for
   
   printf( "\nThis is testArrayFive: " );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFive[ i ] );
             
   } // end for
   
   printf( "\ntestArrayFour and testArrayFive have %d elements that are the same.\n", numMatches( testArrayFour, testArrayFive, 9 ) );
   
   // Test the moveLetters function.  
   
   // Print meaningful pessages to the user, including the array
   // before the modification and after the moveLetters method is called.
   
   printf( "\n----------Testing moveLetters Function----------\n\n" );
   
   printf( " ***testArrayOne Array***\n" );
   
   printf( "This is the array before calling the method: " );
   
   for ( i = 0; i < 5; i = i + 1 ) {
       
      printf( "%c ", testArrayOne[ i ] );       
       
   } // end for
   
   printf( "\nThis is the array after calling the method:  " );
   
   moveLetters( testArrayOne, 5 );
   
   for ( i = 0; i < 5; i = i + 1 ) {
       
      printf( "%c ", testArrayOne[ i ] );       
       
   } // end for
   
   printf( "\n ***testArrayTwo Array***\n" );
   
   printf( "This is the array before calling the method: " );
   
   for ( i = 0; i < 1; i = i + 1 ) {
       
      printf( "%c ", testArrayTwo[ i ] );       
       
   } // end for
   
   printf( "\nThis is the array after calling the method:  " );
   
   moveLetters( testArrayTwo, 1 );
   
   for ( i = 0; i < 1; i = i + 1 ) {
       
      printf( "%c ", testArrayTwo[ i ] );       
       
   } // end for  
      
   printf( "\n ***testArrayThree Array***\n" );
   
   printf( "This is the array before calling the method: " );
   
   for ( i = 0; i < 1; i = i + 1 ) {
       
      printf( "%c ", testArrayThree[ i ] );       
       
   } // end for
   
   printf( "\nThis is the array after calling the method:  " );
   
   moveLetters( testArrayThree, 1 );
   
   for ( i = 0; i < 1; i = i + 1 ) {
       
      printf( "%c ", testArrayThree[ i ] );       
       
   } // end for

   printf( "\n ***testArrayFour Array***\n" );
   
   printf( "This is the array before calling the method: " );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFour[ i ] );       
       
   } // end for
   
   printf( "\nThis is the array after calling the method:  " );
   
   moveLetters( testArrayFour, 9 );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFour[ i ] );       
       
   } // end for
   
   printf( "\n ***testArrayFive Array***\n" );
   
   printf( "This is the array before calling the method: " );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFive[ i ] );       
       
   } // end for
   
   printf( "\nThis is the array after calling the method:  " );
   
   moveLetters( testArrayFive, 9 );
   
   for ( i = 0; i < 9; i = i + 1 ) {
       
      printf( "%c ", testArrayFive[ i ] );       
       
   } // end for

   printf( "\n ***testArraySix Array****\n" );
   
   printf( "This is the array before calling the method: " );
   
   for ( i = 0; i < 17; i = i + 1 ) {
       
      printf( "%c ", testArraySix[ i ] );       
       
   } // end for
   
   printf( "\nThis is the array after calling the method:  " );
   
   moveLetters( testArraySix, 17 );
   
   for ( i = 0; i < 17; i = i + 1 ) {
       
      printf( "%c ", testArraySix[ i ] );       
       
   } // end for
   
   printf( "\n" );
   
} // end main function
