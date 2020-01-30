// CS 271
// Program Name: myprogram.cpp
// Author: Jose Franco Baquera
// Date: October 4, 2017
// Purpose: The purpose of this program is to allow
// the user to input a number of double numbers as well 
// as a sentence of words. The program will then print 
// out the two highest double numbers as well as the 
// length of the longest word in the sentence. 

// Place the include statements.

#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Here are the two prototypes for the functions used in this program.

void highTwo ( double array [ ], int size );

int longestWord ( char * cPtr );

// Main method.

int main ( ) {
    
   // Declare some variables that will allow the user to input
   // several double values in an array as well as 
   // to allow for the user to input a sentence.
    
   int arraySize;
   
   double userDouble;
   
   string sentence;   
   
   char *sentencePtr;
   
   cout << endl << "----------Testing highTwo function.----------" << endl << endl;
   
   // Print a prompt to the user that will allow them to enter the array size
   // plus all their numbers into the array.
   
   cout << "How many numbers do you want to enter? (!!!!! Note: Only enter integer sizes that are >= 2 !!!!!)" << endl;
   
   cin >> arraySize;
   
   // Declare an array of double numbers with the given user's array size.
   
   double userArray [ arraySize ];
   
   cout << "Please enter those " << arraySize << " double values. " << endl;
   
   // Use a for loop that will store the numbers inputed by the user.
   
   for ( int index = 0; index < arraySize; index++ ) {
       
      cin >> userArray [ index ];
      
   } // end for.
   
   // Call the highTwo function that will find the two largest double
   // numbers in the array. 
   
   highTwo ( userArray, arraySize );
   
   cout << "----------Testing longestWord function.----------" << endl << endl;
   
   cout << "Please enter a character string to determine the length of the longest word." << endl;
   
   // Get the user's input and store it. Then call the function longestWord with a pointer.
   
   // Because we entered numbers before, we have to ignore the newline that we entered.
   
   cin.ignore( );
   
   getline( cin, sentence );
   
   sentencePtr = &sentence [ 0 ];
   
   cout << "The longest word in the character string you entered is length " << longestWord ( sentencePtr ) << "." << endl << endl;
   
} // end main function.

// Implementation of the highTwo function.

void highTwo ( double array [ ], int size ) {
    
   // Declare two double variables: one for the highest number
   // in the array and another one for the second highest.
    
   double highestDouble, secondHighestDouble;
    
   // We assume that the array has at least two elements.
   // Therefore, use an if statement that will assign 
   // the highest and second highest numbers.
   
   if ( array [ 0 ] > array [ 1 ] ) {
       
      highestDouble = array [ 0 ];
      
      secondHighestDouble = array [ 1 ];
       
   } // end if.
   
   else { 
       
      highestDouble = array [ 1 ];
      
      secondHighestDouble = array [ 0 ];
       
   } // end else.
   
   // Use a for loop that will go trough the entire array
   // and check wether highestDouble and secondHighestDouble
   // need to be updated. Note: We need to start at the 
   // third element in the array ( i.e. index 2 ).
   
   for ( int index = 2; index < size; index++ ) {
       
      // Compare the current element in the array to
      // the other highestDouble and secondHighestDouble
      // variables.
       
      if ( array [ index ] > highestDouble ) {
          
         secondHighestDouble = highestDouble;
         
         highestDouble = array [ index ];          
          
      } // end if.
      
      else if ( array [ index ] > secondHighestDouble ) {
          
         secondHighestDouble = array [ index ];          
          
      } // end else if.
      
      else {
          
         // Since the element was not greater than both of
         // the highest and second highest double values,
         // no more actions are needed.     
          
      } // end else.

   } // end for
   
   // Print out the highest and second highest numbers in the array.
   
   cout << endl << "The highest double number in the array is: " << setprecision( 9 ) << highestDouble << "." << endl
     
        << "The SECOND highest double number in the array is: " << setprecision( 9 ) << secondHighestDouble << "." << endl << endl;
    
} // end highTwo function.

// Implementation ofthe longestWord function.

int longestWord ( char * cPtr ) {
    
   // Declare and inizialize a temp length variable
   // that will count the number of letters in a word.
   // Another variable is needed to keep track of the 
   // length of the longest word.

   int length = 0, longestLength = 0;
   
   // Use a for loop that will go trough the entire array.
   // We assume that words are seperated by one space, that 
   // there are not letters and spaces in the String, that 
   // there's at least one word in the String, and that 
   // there are no extra spaces at the beginning or the
   // end of the String.
   
   for ( int index = 0; index <= strlen ( cPtr ); index++ ) {
       
      // First check if the char at index is neither a space
      // nor the null character. If its its neither, 
      // increment the length of the word.
       
      if ( *( cPtr + index ) != ' ' && *( cPtr + index ) != '\0' ) {
          
         length++;
     
      } // end if.
      
      // If the char was either a space or the null character,
      // "restart" the process to see if there are larger words 
      // in the sentence.     
      
      else {
          
         if ( length > longestLength )
             
            longestLength = length;
         
         length = 0;
          
      } // end else.
       
   } // end for.    
       
   // Return the length of the longest word.
    
   return longestLength;   
    
} // end longestWord function.
