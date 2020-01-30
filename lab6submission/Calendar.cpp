// CS 271 
// Program Name: Calender.cpp
// Author: Jose Franco Baquera
// Date: October 16, 2017
// Purpose: The purpose of the program
// is to serve as a "driver" that will 
// test the Date and Time classes. 

// Include statements. 

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Date.h"
#include "Time.h"

// Symbolic constants to avoid "magic numbers."

#define ARRAYSIZE 5
#define HOUR_MN_SECOND_MIN 0
#define HOUR_MAX 23
#define MINUTE_SECOND_MAX 59

using namespace std;

// Main method.

int main ( ) {
    
   // Declare two arrays of size 5. One array
   // will be able to refer to Time objects 
   // while the other one will refer to Date objects.
    
   Time arrayTime [ ARRAYSIZE ];
  
   Date arrayDate [ ARRAYSIZE ];
   
   // Create a Time and Data object to test boudary values, as well as constant
   // variables to avoid "magic numbers."
   
   const int INVALID_HOUR = 24, INVALID_MINUTE = -1, INVALID_SECOND = 60;
   
   const int INVALID_MONTH = 13, INVALID_DAY = 0, INVALID_YEAR = 2101;
   
   const int FEBRUARY = 2, FEBRUARY_YEAR = 2017, INVALID_DAY_FEB_29 = 29, INVALID_DAY_FEB_30 = 30, INVALID_DAY_FEB_31 = 31;
   
   const int VALID_DAY_FEB_28 = 28;
   
   Time testTimeObject;
   
   Date testDateObject;

   // Declare an integer variable for user input.   
   
   int userInput;
   
   // Use srand to make the integers more "random."
   
   srand( time( NULL ) );    

   // Instantiate 5 different Time objects with random times 
   // and store them in arrayTime. 
   
   for ( int i = 0; i < ARRAYSIZE; i++ ) {
       
      Time timeObject;
      
      timeObject.setHour( rand( ) % ( HOUR_MAX - HOUR_MN_SECOND_MIN + 1 ) + HOUR_MN_SECOND_MIN );
      
      timeObject.setMinute( rand( ) % ( MINUTE_SECOND_MAX - HOUR_MN_SECOND_MIN + 1 ) + HOUR_MN_SECOND_MIN );
      
      timeObject.setSecond( rand( ) % ( MINUTE_SECOND_MAX - HOUR_MN_SECOND_MIN + 1) + HOUR_MN_SECOND_MIN );
    
      arrayTime[ i ] = timeObject;
    
   } // end for.
   
   cout << endl << "Here are the " << ARRAYSIZE << " Time objects in 24-hour format with random times." << endl;
   
   // Print the 5 Time objects in 24-hour format.

   for ( int i = 0; i < ARRAYSIZE; i++ ) {
       
      arrayTime[ i ].print( );
      
      cout << endl;
       
   } // end for.
   
   cout << endl << "Here are the same " << ARRAYSIZE << " random Time objects in 12-hour format." << endl;
   
   // Print the 5 Time objects in 12-hour format.
   
   for ( int i = 0; i < ARRAYSIZE; i++ ) {
       
      arrayTime[ i ].print12( );
      
      cout << endl;
       
   } // end for.
   
   // Use a loop that will instantiate 5 Date objects with user input. Make sure to 
   // use the mutators from the Date class.
   
   cout << endl << "Lets create " << ARRAYSIZE << " Date objects. Will you help me?" << endl;
   
   for ( int i = 0; i < ARRAYSIZE; i++ ) {
       
      Date dateObject;
      
      cout << "Creating Date object number: " << ( i + 1 ) << endl;
      
      cout << "Please enter the Month (Note: Only integer numbers from 1 to 12 are acceptable). ";
      
      cin >> userInput;
    
      dateObject.setMonth( userInput );
      
      cout << "Please enter the Day (Note: January only has 1 - 31 days, February has 1 - 28 days, April only has 1 - 30 days, etc). ";
      
      cin >> userInput;
    
      dateObject.setDay( userInput );
      
      cout << "Please enter the Year (Note: Only integer numbers from 1980 to 2100 are acceptable). ";
      
      cin >> userInput;
    
      dateObject.setYear( userInput );
    
      arrayDate[ i ] = dateObject;

   } // end for.
   
   // Printing the 5 Date objects. 
   
   cout << endl << "Here are the " << ARRAYSIZE << " Date objects. If an invalid input was inputted, the data members were "
   
      << "not changed." << endl;
   
   for ( int i = 0; i < ARRAYSIZE; i++ ) {
       
      arrayDate[ i ].print( );
      
      cout << endl;
     
   } // end for.
   
   cout << endl;
   
   // Testing the boundary values using the accesors and mutators for both 
   // the Time class and Date class.
   
   cout << "All mutators and accessors were tested using the print functions in the class. " << endl
   
      << "Lets now test some of the boundary values and default constructors." << endl
    
      << "Here is a default Time object and a default Date object. " << endl;
      
   testTimeObject.print( );
   
   cout << endl;
   
   testTimeObject.print12( );
   
   cout << endl;
   
   testDateObject.print( );
   
   cout << endl << "Lets set hour to 24, minute to -1, second to 60, month to 13, day to 0, and year to 2101."
   
      << endl << "All of these are invalid numbers, so the dafult objects should not change. Here they are. " << endl;
   
   testTimeObject.setHour( INVALID_HOUR );
   
   testTimeObject.setMinute( INVALID_MINUTE );
   
   testTimeObject.setSecond( INVALID_SECOND );
   
   testDateObject.setMonth( INVALID_MONTH );
   
   testDateObject.setDay( INVALID_DAY );
   
   testDateObject.setYear( INVALID_YEAR );
   
   testTimeObject.print( );
   
   cout << endl;
   
   testTimeObject.print12( );
   
   cout << endl;
   
   testDateObject.print( );
   
   cout << endl << endl << "Testing the all accesors for both default objects." << endl;
   
   cout << "Here is the hour: " << testTimeObject.getHour( ) << endl;
   
   cout << "Here is the minute: " << testTimeObject.getMinute( ) << endl;
   
   cout << "Here is the second: " << testTimeObject.getSecond( ) << endl;
   
   cout << "Here is the month: " << testDateObject.getMonth( ) << endl;
   
   cout << "Here is the day: " << testDateObject.getDay( ) << endl;
   
   cout << "Here is the year: " << testDateObject.getYear( ) << endl << endl;
   
   // Testing the February date since its the outlier in the Date class.
   
   cout << "Testing the February month since it can only have days ranging from 1 to 28. " << endl
   
      << "Setting the month of the default Date object 2 and year to 2017. Here is the Date object. " << endl;
      
   testDateObject.setMonth( FEBRUARY );
   
   testDateObject.setYear( FEBRUARY_YEAR );
   
   testDateObject.print( );
   
   cout << endl << "Lets try to set the day to 29, then 30, then 31." << endl 
   
      << "Since these are all invalid dates for Feb, the date object should remain unchanged. " << endl;
      
   cout << "Here is the date object after trying 29 as day." << endl;
   
   testDateObject.setDay( INVALID_DAY_FEB_29 );
   
   testDateObject.print( );
      
   cout << endl << "Here is the date object after trying 30 as day." << endl;
   
   testDateObject.setDay( INVALID_DAY_FEB_30 );
   
   testDateObject.print( );
      
   cout << endl << "Here is the date object after trying 31 as day." << endl;
   
   testDateObject.setDay( INVALID_DAY_FEB_31 );
   
   testDateObject.print( );
   
   cout << endl << "The day object did not change, so data validation is working." << endl
   
      << "Now let's try to change the day to 28. Since this is a valid day, the date object should change." << endl
      
      << "Here is the date object." << endl;
      
   testDateObject.setDay( VALID_DAY_FEB_28 );
   
   testDateObject.print( );
   
   cout << endl;  
   
} // end main method.
