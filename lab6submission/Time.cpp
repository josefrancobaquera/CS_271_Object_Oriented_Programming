// CS 271 
// Program Name: Time.cpp
// Author: Jose Franco Baquera
// Date: October 15, 2017
// Purpose: The purpose of the program
// is to contain the function definitions 
// for the Time class.

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Time.h"

// Use symbolic constants to avoid "magic numbers."

#define MAX_HOUR 23
#define MAX_MINUTE_SECOND 59
#define MIN_GENERAL 0
#define SET_W_TWO 2
#define TWELVE 12

using namespace std;

// Implementation of the default constructor.

Time::Time ( ) {
    
   // The default constructor will initialize
   // a Time object to 00:00:00. Note: We do not
   // use 00 as an integer, so use 0 instead of 00.
    
   setHour( MIN_GENERAL );
   
   setMinute( MIN_GENERAL );
   
   setSecond( MIN_GENERAL );   
    
} // end default contstructor.

// Implementation of the second constructor.

Time::Time ( int h, int m, int s ) {
    
   // Initializes a Time object using
   // the h, m, and s parameters, as well 
   // as the mutators.
    
   setHour( h );
   
   setMinute( m );
   
   setSecond( s );    
    
} // end second constructor.

// Implementation of the mutators for
// the three data members.

void Time::setHour ( int hr ) {
    
   // Validate that the paramter is between 0 and 23.
   // For invalid data, do not change the data member,
   // do not print an error message, or do not throw
   // an exception.
    
   if ( hr >= MIN_GENERAL && hr <= MAX_HOUR )

      hour = hr;    
    
} // end setHour function.

void Time::setMinute ( int min ) {
    
   // Validate that the parameter is between 0 and 59.
   // For invalid data, do not change the data member, 
   // do not print an error message, or do not throw
   // an exception.
    
   if ( min >= MIN_GENERAL && min <= MAX_MINUTE_SECOND )

      minute = min;    
    
} // end setMinute function.

void Time::setSecond ( int sec ) {
    
   // Validate that the paramter is between 0 and 59.
   // For invalid data, do not change the data member,
   // do not print an error message, or do not throw
   // an exception.
    
   if ( sec >= MIN_GENERAL && sec <= MAX_MINUTE_SECOND )

      second = sec;    
    
} // end setSecond function.

// Implementation of the accessors for the 
// three data members.

int Time::getHour ( ) {
    
   return hour;   
    
} // end getHour function.

int Time::getMinute ( ) {
    
   return minute;    
    
} // end getMinute function.

int Time::getSecond ( ) {
    
   return second;   
    
} // end getSecond function.

// Implementation of the print function. We need
// to use the accessors for this function.

void Time::print ( ) {
    
   // This function will print the Time object
   // in 24-hour format (hh:mm:ss). Note it is 
   // TWO digits per data member.
    
   // Use the setfill so single digits have a zero 
   // before its printed. setw is not "sticky," so we 
   // must place it before every accessor. 

   cout << setfill( '0' ) << setw( SET_W_TWO ) << getHour( ) 
   
      << ":" << setw( SET_W_TWO ) << getMinute( ) << ":" << setw( SET_W_TWO ) 
      
      << getSecond( );
      
   // Make the setfill back to default.
      
   cout << setfill( ' ' );
    
} // end print function.

// Implementation of the print12 function. We need to 
// use the accesors again for this function.

void Time::print12 ( ) {
    
   // This function will print the Time object
   // in 12-hour format (hh:mm:ss AM or PM). Note
   // it is TWO digits per data member.
    
   // Use the setfill so single digits have a zero 
   // before its printed. setw is not "sticky," so we 
   // must place it after every accessor. 
    
   // Note: Using a ternary condition makes the code less cluttered.
    
   cout << setfill( '0' ) << setw( SET_W_TWO ) << ( ( getHour( ) == 0 || getHour( ) == TWELVE ) ? TWELVE : getHour( ) % TWELVE ) 
   
      << ":" << setw( SET_W_TWO ) << getMinute( ) << ":" << setw( SET_W_TWO ) << getSecond( ) << ( getHour( ) < TWELVE ? " AM" : " PM" ); 
      
   // Make the setfill back to default.
      
   cout << setfill( ' ' );

} // end print12 function.
