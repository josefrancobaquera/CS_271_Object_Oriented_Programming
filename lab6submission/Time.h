// CS 271 
// Program Name: Time.h
// Author: Jose Franco Baquera
// Date: October 15, 2017
// Purpose: The purpose of the program
// is to serve as the class definition 
// for the Time class.

#ifndef TIME_H
#define TIME_H

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

class Time {

   // Private data members for class Time.

   private:
    
      unsigned int hour;
      unsigned int minute;
      unsigned int second;
      
   // Prototypes of the public member functions for the Time class.
      
   public:
       
      Time ( );
      Time ( int, int, int );
      void setHour ( int );
      void setMinute ( int );
      void setSecond ( int );
      int getHour ( );
      int getMinute ( );
      int getSecond ( );
      void print ( );
      void print12 ( );

}; // end class Time.
   
#endif
