// CS 271
// Program Name: lab4.c
// Author: Jose Franco Baquera
// Date: October 2, 2017
// Purpose: The purpose of the program 
// is to test both the splitAlpha and 
// printSequences functions in the functions4.c
// file. All functions will be tested trough 
// pointers.

// Include statements.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "functions4.h"
#define ORIGINALARRAYSIZE 100
#define LOWERARRAYSIZE 100
#define UPPERARRAYSIZE 100

int main ( void ) {

   // Make three arrays to test both functions with user input. 
    
   char originalString [ ORIGINALARRAYSIZE ];
   
   char lowerString [ LOWERARRAYSIZE ];
   
   char upperString [ UPPERARRAYSIZE ];
      
   // Make several character arrays to hard-code test both functions.
   
   char oneString [ ] = "The symbol for Intel is INTC.";
   
   char twoString [ ] = "abk123@XY";
   
   char threeString [ ] = "123Ababc s s !@#a XYZXzgjklNmno p q ./d";
   
   char fourString [ ] = "ThIs LAB WAS a Little HARDER than    i ToughT 789 jklmn /21!@#!@";
   
   char oneLower [ 100 ];
   
   char oneUpper [ 100 ];
   
   // Testing the slpitAlpha and printSequences with Hard-Code.
   
   // Testing oneString.
   
   printf( "\n-----------Testing splitAlpha and printSequences Functions with Hard-Code-----------\n\n" );
   
   printf( "********Testing oneString.********\n" );
   
   splitAlpha ( oneString, oneLower, oneUpper );
   
   printf( "For oneString, here are all the lower-case characters: \n" );
   
   printf ( "%s\n", oneLower );
   
   printf( "For oneString, here are all the upper-case characters: \n" );
   
   printf ( "%s\n", oneUpper );
   
   printf( "For oneString, here are all the sequential digits or letters (if any): \n" );
   
   printSequences( oneString );
   
   // Testing twoString.
   
   printf( "********Testing twoString.********\n" );

   splitAlpha ( twoString, oneLower, oneUpper );
   
   printf( "For twoString, here are all the lower-case characters: \n" );
   
   printf ( "%s\n", oneLower );
   
   printf( "For twoString, here are all the upper-case characters: \n" );
   
   printf ( "%s\n", oneUpper );   
      
   printf( "For twoString, here are all the sequencial digits or letters (if any): \n" );
   
   printSequences ( twoString );
   
   // Testing threeString.
   
   printf( "********Testing threeString.********\n" );

   splitAlpha ( threeString, oneLower, oneUpper );
   
   printf( "For threeString, here are all the lower-case characters: \n" );
   
   printf ( "%s\n", oneLower );
   
   printf( "For threeString, here are all the upper-case characters: \n" );
   
   printf ( "%s\n", oneUpper );   
      
   printf( "For threeString, here are all the sequencial digits or letters (if any): \n" );
   
   printSequences ( threeString );
   
   // Testing fourString.
   
   printf( "********Testing fourString.********\n" );

   splitAlpha ( fourString, oneLower, oneUpper );
   
   printf( "For fourString, here are all the lower-case characters: \n" );
   
   printf ( "%s\n", oneLower );
   
   printf( "For fourString, here are all the upper-case characters: \n" );
   
   printf ( "%s\n", oneUpper );   
      
   printf( "For fourString, here are all the sequencial digits or letters (if any): \n" );
   
   printSequences ( fourString );
   
   // Testing the slpitAlpha and printSequences with user input.     
   
   printf( "-----------Testing splitAlpha and printSequences Functions with User Input-----------" );
   
   // Use a while loop that will make it easier to test the splitAlpha function.
   
   printf ( "\n\n(OPTIONAL) Please enter a string of words. NOTE: THE LARGEST NUMBER OF CHARACTERS ALLOWED IS 99. Enter 1 to quit.\n" );
   
   // Use a while loop to store all characters.
   
   int i = 0;
   
   char c;
   
   while ( ( i < ORIGINALARRAYSIZE - 1 ) && ( c = getchar ( ) ) != '\n' ) {
       
      originalString [ i ] = c;
      
      i++;     
       
   } // end input while.
   
   // Note: This is a null-terminated String. 
   
   originalString [ i ] = '\0';  
      
   while ( ! ( ( originalString [ 0 ] == '1' ) && ( originalString [ 1 ] == '\0' ) ) ) {
       
      splitAlpha ( originalString, lowerString, upperString );
      
      printf ( "For the string you inputed, here are all the lower-case characters: " );
      
      printf ( "%s", lowerString );
      
      printf ( "\nFor the string you inputed, here are all the upper-case characters: " );
      
      printf ( "%s", upperString );   
      
      printf ( "\nFor the string you inputed, here are all the sequential digits/letters (if any):\n" );
      
      printSequences ( originalString );
      
      printf ( "\nPlease enter another string of words. NOTE: THE LARGEST NUMBER OF CHARACTERS ALLOWED IS 99. Enter 1 to quit. \n" );
      
      i = 0;
      
      while ( ( i < ORIGINALARRAYSIZE - 1 ) && ( c = getchar ( ) ) != '\n' ) {
       
      originalString [ i ] = c;
      
      i++;     
       
      } // end input while.
   
      originalString [ i ] = '\0'; 
      
   } // end while.
   
} // end main function
