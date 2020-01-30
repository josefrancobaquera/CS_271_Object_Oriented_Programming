// CS 271 
// Program Name: TwoDayPackage.h
// Author: Jose Franco Baquera
// Date: November 13, 2017
// Purpose: The purpose of the program
// is to serve as the class definition 
// for the TwoDayPackage class.

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

// Import statements.

#include "Package.h"
#include <iostream>
#include <string>

using namespace std;

// Note: TwoDayPackage will inherit all the data members 
// of the class Package (i.e. the TwoDayPackage will be 
// the derived class while Package will be the base 
// class).

class TwoDayPackage : public Package {
    
   // Friend function prototype.

   friend ostream& operator << ( ostream &, const TwoDayPackage & );
    
   // Prototypes of the public member functions for the TwoDayPackage class.
    
   public:
       
      TwoDayPackage( const string &, const string &, const string &, const string &, const string &, const string &, const string &, 
                     
                     const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );
      
      TwoDayPackage& setFlatFee( double );
      
      double getFlatFee( ) const;

      double calculateCost( ) const;
      
   // Private data members for the Term class.
    
   private:
       
      double flatFee;

}; // end class TwoDayPackage.

#endif
