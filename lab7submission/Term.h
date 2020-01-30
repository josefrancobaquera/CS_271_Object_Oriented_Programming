// CS 271 
// Program Name: Term.h
// Author: Jose Franco Baquera
// Date: October 18, 2017
// Purpose: The purpose of the program
// is to serve as the class definition 
// for the Term class.

#ifndef TERM_H
#define TERM_H

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

class Term {

   // The two friend functions for the Term class.

   friend ostream &operator<< ( ostream &, const Term & );
   
   friend istream &operator>> ( istream &, Term & );

   // Private data members for the Term class.

   private:
      
      int coefficient;
      
      int exponent;

   // Prototypes of the public member functions for the Term class.

   public:

      Term ( int coef = 0, int exp = 0 );
      
      void setCoefficient ( int );
      
      void setExponent ( int );
      
      int getCoefficient ( ) const;
      
      int getExponent( ) const;
      
      Term operator+ ( const Term & ) const;
      
      Term operator- ( const Term & ) const;
      
      Term operator* ( const Term & ) const;

}; // end class Term.

#endif
