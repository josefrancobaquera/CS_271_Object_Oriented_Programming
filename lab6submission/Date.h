// CS 271 
// Program Name: Date.h
// Author: Jose Franco Baquera
// Date: October 15, 2017
// Purpose: The purpose of the program
// is to serve as the class definition 
// for the Date class.

#ifndef DATE_H
#define DATE_H

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

class Date {

   // Private data members for the Date class.

   private:
    
      unsigned int month;
      unsigned int day;
      unsigned int year;
      
   // Prototypes of the public member functions for class Date.
      
   public:
       
      Date ( );
      Date ( int, int, int );
      void setMonth ( int );
      void setDay ( int );
      void setYear ( int );
      int getMonth ( );
      int getDay ( );
      int getYear ( );
      void print ( );

}; // end class Date.
   
#endif
