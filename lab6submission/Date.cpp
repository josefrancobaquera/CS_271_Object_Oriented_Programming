// CS 271 
// Program Name: Date.cpp
// Author: Jose Franco Baquera
// Date: October 15, 2017
// Purpose: The purpose of the program
// is to contain the function definitions 
// for the Date class.

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Date.h"

// Use symbolic constants to avoid using "magic numbers." 

#define MIN_MONTH_DAY 1
#define MAX_MONTH 12
#define MAX_DAY 31
#define MIN_YEAR 1980
#define MAX_YEAR 2100
#define SET_W_TWO 2
#define SET_W_FOUR 4
#define MAX_DAY_30 30
#define FEBRUARY 28

using namespace std;

// Implementation of the default constructor.

Date::Date ( ) {

   // The default constructor will initialize
   // a Date object to 1/1/1980.
    
   setMonth( MIN_MONTH_DAY );
   
   setDay( MIN_MONTH_DAY );
   
   setYear( MIN_YEAR );    
   
} // end default constructor.

// Implementation of the second constructor.

Date::Date ( int m, int d, int y ) {

   // Initializes a Date object using
   // the m, d, and y parameters and 
   // the three mutators.
    
   setMonth( m );
   
   setDay( d );
   
   setYear( y ); 
    
} // end second constructor.

// Implementation of the mutators for
// the three data members.

void Date::setMonth ( int mo ) {
    
   // Validate that the parameter is between 1 and 12.
   // For invalid data, do not change the data member,
   // do not print an error message, or do not throw
   // an exception.
    
   if ( mo >= MIN_MONTH_DAY && mo <= MAX_MONTH )

      month = mo;    
    
} // end setMonth function.

void Date::setDay ( int dy ) {
    
   // Each day needs to be greater than or equal to 1 and MUST not be
   // greater than each months' corresponding max day. For example,
   // February cannot have more tha 28 days, October cannot have more
   // than 31 days, etc.
    
   // For invalid data, do not change the data member,
   // do not print an error message, or do not throw
   // an exception.
    
   const int VALID_DAY [ ] = { MIN_MONTH_DAY, MAX_DAY, FEBRUARY, MAX_DAY, MAX_DAY_30,
       
      MAX_DAY, MAX_DAY_30, MAX_DAY, MAX_DAY, MAX_DAY_30, MAX_DAY, 
      
      MAX_DAY_30, MAX_DAY };
      
   if ( ( dy >= MIN_MONTH_DAY ) && ( dy <= VALID_DAY[ getMonth( ) ] ) )

      day = dy;    
    
} // end setMinute function.

void Date::setYear ( int yr ) {
    
   // Validate that the paramter is between 1980 and 2100.
   // For invalid data, do not change the data member,
   // do not print an error message, or do not throw
   // an exception.
    
   if ( yr >= MIN_YEAR && yr <= MAX_YEAR )

      year = yr;    
    
} // end setSecond function.

// Implementation of the accessors for the 
// three data members.

int Date::getMonth ( ) {
    
   return month;    
    
} // end getMonth function.

int Date::getDay ( ) {
    
   return day;    
    
} // end getDay function.

int Date::getYear ( ) {

   return year;
    
} // end getYear function.

// Implementation of the print function. We need
// to use the accessors for this function.

void Date::print ( ) {
    
   // This function will print the a Date object
   // in format mm/dd/yyyy (i.e. two digits for
   // month/day and 4 digits for year).
    
   cout << setfill( '0' ) << setw( SET_W_TWO ) << getMonth( ) << "/" << setw( SET_W_TWO ) << getDay( ) 
   
      << "/" << setw( SET_W_FOUR ) << getYear( );
      
   // Make the setfill back to default.
      
   cout << setfill( ' ' );
    
} // end print function.
