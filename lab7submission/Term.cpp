// CS 271 
// Program Name: Term.cpp
// Author: Jose Franco Baquera
// Date: October 18, 2017
// Purpose: The purpose of the program
// is to contain the function definitions 
// for the Term class.

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Term.h"

using namespace std;

// Implementation of the operator<< friend function.

ostream &operator<< ( ostream& out, const Term& printTerm ) {
    
   // "Concatinate" the ostream in order to output the Term object in 
   // customary format. Note: We need to use the chracter '^' to indicate 
   // the exponent of the term.
    
   out << printTerm.getCoefficient( ) << "x^" << printTerm.getExponent( );   
   
   // Return the modified ostream.
   
   return out;   
    
} // end operator<< function.

// Implementation of the operator>> friend function.

istream &operator>> ( istream& in, Term& inputTerm ) {
    
   // Declare two new int variables that will store the 
   // user's input.
    
   int newCoefficient;
   
   int newExponent;
   
   // Get the user's input through the istream.
   
   in >> newCoefficient; 
   
   in >> newExponent;
   
   // Call mutators of the object parameter in order 
   // to assign new values to its data members.
   
   inputTerm.setCoefficient( newCoefficient );
   
   inputTerm.setExponent( newExponent );
   
   // Return the modified istream.
   
   return in;   
    
} // end operator>> function.

// Implementation of the constructor.

Term::Term ( int coef, int exp ) {
    
   // Assign the data members to the new values in the parameters.
   // If the constructor is called with the parameters, the 
   // default values will be both zeros.
    
   coefficient = coef;
      
   exponent = exp;  
    
} // end default contstructor.

// Implementation of the coefficient mutator.

void Term::setCoefficient( int newCoeff ) {
    
   // Set the data member "coefficient" to the new value
   // in the parameter.
    
   coefficient = newCoeff;    
    
} // end setCoefficient function.

// Implementation of the exponent mutator.

void Term::setExponent ( int newExpo ) {
    
   // Set the data member "exponent" to the new value
   // in the parameter.
    
   exponent = newExpo;
    
} // end setExponent function.

// Implementation of the coefficient accessor.

int Term::getCoefficient ( ) const {
    
   // Return the value of the data member "coefficient."
    
   return coefficient;
    
} // end getCoefficient function.

// Implementation of the exponent accessor.

int Term::getExponent ( ) const {
    
   // Return the value of the data member "exponent."
    
   return exponent;
    
} // end getExponent function.

// Implementation of the operator+ overloading function.

Term Term::operator+ ( const Term& parameterTerm ) const {
    
   // Instantiate a new Term object with default arguments.
    
   Term answer;

   // First check if the exponents of the calling object 
   // and the parameter object are equal. If they are equal,
   // set the coefficient in object answer to the sum
   // of the coefficients of both the parameter and calling object.
   // If not, do not change Term answer.
    
   if ( getExponent( ) == parameterTerm.getExponent( ) ) {
       
      answer.setCoefficient( getCoefficient( ) + parameterTerm.getCoefficient( ) );
      
      // Since both exponents are equal, we could have also used
      // the data member "exponent" of the calling object.
      
      answer.setExponent( parameterTerm.getExponent( ) );
    
   } // end if.
   
   // Return the Term object answer.

   return answer;
    
} // end operator+ function.

// Implementation of the operator- overloading function.

Term Term::operator- ( const Term& parameterTerm ) const {
    
   // Instantiate a new Term object with default arguments.
    
   Term answer;

   // First check if the exponents of the calling object 
   // and the parameter object are equal. If they are equal,
   // set the coefficient in object answer to the difference
   // of the coefficients of the calling object first, then 
   // of the parameter object. If not, do not change Term answer.
    
   if ( getExponent( ) == parameterTerm.getExponent( ) ) {
       
      answer.setCoefficient( getCoefficient( ) - parameterTerm.getCoefficient( ) );
      
      // Since both exponents are equal, we could have also used
      // the data member "exponent" of the calling object.
      
      answer.setExponent( parameterTerm.getExponent( ) );
    
   } // end if.
   
   // Return the Term object answer.

   return answer;
    
} // end operator- function.

// Implementation of the operator* overloading function.

Term Term::operator* ( const Term& parameterTerm ) const {
    
   // Instantiate a new Term object with default arguments.
    
   Term answer;

   // Set the coefficient in object answer to the multiple of
   // both the coefficients of the calling and parameter objects.
   // After this line executes, set the exponent of the 
   // answer object to the sum of both the exponents
   // of the calling and parameter objects.
   
   answer.setCoefficient( getCoefficient( ) * parameterTerm.getCoefficient( ) );
   
   answer.setExponent( getExponent( ) + parameterTerm.getExponent( ) ); 
   
   // Return the Term object answer.

   return answer;
    
} // end operator+ function.
