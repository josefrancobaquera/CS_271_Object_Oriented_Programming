// CS 271 
// Program Name: TwoDayPackage.cpp
// Author: Jose Franco Baquera
// Date: November 13, 2017
// Purpose: The purpose of the program
// is to contain the function definitions 
// for the TwoDayPackage class.

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "TwoDayPackage.h"

using namespace std;

// Implementation of the operator<< friend function.

ostream &operator<< ( ostream& out, const TwoDayPackage & temp ) {
    
   // "Concatinate" the ostream in order to output the TwoDayPackage object in 
   // customary format. 
    
   // First, concatinate the sender information.
    
   out << "From: " << endl << temp.getSenderName( ) << endl << temp.getSenderAddress( ) << endl
   
      << temp.getSenderCity( ) << ", " << temp.getSenderState( ) << " " << temp.getSenderZipCode( ) << endl << endl;
      
   // Secondly, concatinate the recipient information.
      
   out << "To: " << endl << temp.getRecipientName( ) << endl << temp.getRecipientAddress( ) << endl
   
      << temp.getRecipientCity( ) << ", " << temp.getRecipientState( ) << " " << temp.getRecipientZipCode( ) << endl << endl;
      
   // Lastly, concatinate the information of the package itself.
      
   out << "The weight of the package above is: " << temp.getWeight( ) << " ounces." << endl << "The cost-per-ounce is: $" 
   
      << temp.getCostPerOunce( ) << " USD" << endl << "The flat fee is: $" << temp.getFlatFee( ) << " USD" << endl 
      
      << "The cost to ship this package is: $" << temp.calculateCost( ) << " USD" << endl;  
       
   // Return the modified ostream.
   
   return out;   
    
} // end operator<< function.

// Implementation of the constructor. Note: This constructor should pass 12 parameters to the Package constructor.

TwoDayPackage::TwoDayPackage( const string & sname, const string & saddress, const string & scity, const string & sstate, const string & szip, const string & rname, 
                              
                              const string & raddress, const string & rcity, const string & rstate, const string & rzip, double w, double c, double f ) 

                              : Package ( sname, saddress, scity, sstate, szip, rname, raddress, rcity, rstate, rzip, w, c ) {
                                  
   // Inizialize the flatFee private data member.
                                  
   setFlatFee( f );
    
} // end constructor

// Implementation of the setFlatFee function.

TwoDayPackage& TwoDayPackage::setFlatFee( double newFlatFee ) {
    
   // Ensure that flatFee is positive. If not, do not change the 
   // private data member.
    
   if ( newFlatFee > 0 ) 
       
      flatFee = newFlatFee;
   
   // Return the calling object.
   
   return *this;

} // end setFlatFee function.

// Implementation of the getFlatFee function.

double TwoDayPackage::getFlatFee( ) const {
    
   // Return the private data member.
    
   return flatFee;
   
} // end getFlatFee function.

// Implementation of the calculateCost function.

double TwoDayPackage::calculateCost( ) const {
    
   // Return the cost to ship a TwoDayPackage. The cost can 
   // be calulated multiplying the weight times the costPerOunce
   // and adding the flatFee.
    
   return ( getWeight( ) * getCostPerOunce( ) + getFlatFee( ) );
    
} // end calculateCost function.
