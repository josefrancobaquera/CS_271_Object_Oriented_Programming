// CS 271 
// Program Name: Package.cpp
// Author: Jose Franco Baquera
// Date: November 13, 2017
// Purpose: The purpose of the program
// is to contain the function definitions 
// for the Package class.

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Package.h"

using namespace std;

// Implementation of the operator << function.

ostream& operator << ( ostream & out, const Package & temp ) {
    
   // "Concatinate" the ostream in order to output the Package object in 
   // customary format. 
    
   // First, concatinate the sender information.
    
   out << "From: " << endl << temp.getSenderName( ) << endl << temp.getSenderAddress( ) << endl
   
      << temp.getSenderCity( ) << ", " << temp.getSenderState( ) << " " << temp.getSenderZipCode( ) << endl << endl;
      
   // Secondly, concatinate the recipient information.
      
   out << "To: " << endl << temp.getRecipientName( ) << endl << temp.getRecipientAddress( ) << endl
   
      << temp.getRecipientCity( ) << ", " << temp.getRecipientState( ) << " " << temp.getRecipientZipCode( ) << endl << endl;
      
   // Lastly, concatinate the information of the package itself.
      
   out << "The weight of the package above is: " << temp.getWeight( ) << " ounces." << endl << "The cost-per-ounce is: $" 
   
      << temp.getCostPerOunce( ) << " USD" << endl << "The cost to ship this package is: $" << temp.calculateCost( ) << " USD" << endl;    
    
   return out;
    
} // end operator << function.

// Implementation of the constructor.

Package::Package( const string & sname, const string & saddress, const string & scity, const string & sstate, const string & szip, const string & rname, 
                  
                  const string & raddress, const string & rcity, const string & rstate, const string & rzip, double w, double c ) {
    
   // Inizalize the private data members.
    
   setSenderName( sname );
   
   setSenderAddress( saddress );
   
   setSenderCity( scity );
   
   setSenderState( sstate );
   
   setSenderZipCode( szip );
   
   setRecipientName( rname );
   
   setRecipientAddress( raddress );
   
   setRecipientCity( rcity );
   
   setRecipientState( rstate );
   
   setRecipientZipCode( rzip );
   
   setWeight( w );
   
   setCostPerOunce( c );
    
} // end constructor function.

// Implementation of the setSenderName function.

Package& Package::setSenderName( const string & newSenderName ) {
    
   // Assign newSenderName to getSenderName.
    
   senderName = newSenderName;
   
   // Return the calling object.
   
   return *this;
    
} // end setSenderName function.

// Implementation of the getSenderAddress function.

string Package::getSenderName( ) const { 
    
   // Return the private data member senderName.
    
   return senderName;
    
} // end getSenderName function.

// Implementation of the setSenderAddress function.

Package& Package::setSenderAddress( const string & newSenderAddress ) {
    
   // Assign newSenderName to getSenderName.
    
   senderAddress = newSenderAddress;
   
   // Return the calling object.
   
   return *this;
   
} // end setSenderAddress

// Implementation of the getSenderAddress function.

string Package::getSenderAddress( ) const {
    
   // Return the private data member senderAddress.
    
   return senderAddress;
    
} // end getSenderAddress function.

// Implementation of the setSenderCity function.

Package& Package::setSenderCity( const string & newSenderCity ) {
    
   // Assign newSenderCity to senderCity.
    
   senderCity = newSenderCity;
   
   // Return the calling object.
   
   return *this;
    
} // end setSenderCity function.

// Implementation of the getSenderCity function.

string Package::getSenderCity( ) const {
    
   // Return the private data member senderCity
    
   return senderCity;    
    
} // end getSenderCity function.

// Implementation of the setSenderState function.

Package& Package::setSenderState( const string & newSenderState ) {
    
   // Assign newSenderState to senderState.
    
   senderState = newSenderState;
   
   // Return the calling object.
   
   return *this;    
    
} // end setSenderState function.

// Implementation of the getSenderState function.

string Package::getSenderState( ) const {
    
   // Return the private data member senderState.
    
   return senderState;    
    
} // end getSenderState function.

// Implementation of the getSenderZipCode function.

Package& Package::setSenderZipCode( const string & newSenderZipCode ) {
    
   // Assign newSenderZipCode to senderZip.
    
   senderZip = newSenderZipCode;
   
   // Return the calling object.
   
   return *this;    
    
} // end setSenderZipCode function.

// Implementation of the getSenderZipCode function.
      
string Package::getSenderZipCode( ) const { 
    
   // Return the private data member senderZip.
    
   return senderZip;  
    
} // end getSenderZipCode function.

// Implementation of the setRecipientName function.
      
Package& Package::setRecipientName( const string & newRecipientName ) {
    
   // Assign newRecipientName to recipientName.
    
   recipientName = newRecipientName;
   
   // Return the calling object.
   
   return *this;    
    
} // end setRecipientName function.

// Implementation of the getRecipientName function.     

string Package::getRecipientName( ) const {
    
   // Return the private data member recipientName.
    
   return recipientName;    
    
} // end getRecipientName function.

// Implementation of the setRecipientAddress function.

Package& Package::setRecipientAddress( const string & newRecipientAddress ) {
    
   // Assign newRecipientAddress to recipientAddress.
    
   recipientAddress = newRecipientAddress;
   
   // Return the calling object.
   
   return *this;    
    
} // end setRecipientAddress function.

// Implementation of the getRecipientAddress function.

string Package::getRecipientAddress( ) const {
    
   // Return the private data member recipientAddress.
    
   return recipientAddress;    
    
} // end getRecipientAddress function.

// Implementation of the setRecipientCity function.

Package& Package::setRecipientCity( const string & newRecipientCity ) {
    
   // Assign newRecipientCity to recipientCity.
    
   recipientCity = newRecipientCity;
   
   // Return the calling object.
   
   return *this;    
    
} // end setRecipientCity function.

// Implementation of the getRecipientCity function.
      
string Package::getRecipientCity( ) const {
    
   // Return the private data member recipientCity.
    
   return recipientCity;    
    
} // end getRecipientCity function.

// Implementation of the setRecipientState function.
      
Package& Package::setRecipientState( const string & newRecipientState ) {
    
   // Assign newRecipientState to recipientState.
    
   recipientState = newRecipientState;
   
   // Return the calling object.
   
   return *this;    
    
} // end setRecipientState function.

// Implementation of the getRecipientState function.

string Package::getRecipientState( ) const {
    
   // Return the private data member recipientState.
    
   return recipientState;    
    
} // end getRecipientState function.

// Implementation of the setRecipientZipCode function.
      
Package& Package::setRecipientZipCode( const string & newRecipientZipCode ) {
    
   // Assign newRecipientZipCode to recipientZip.
    
   recipientZip = newRecipientZipCode; 

   // Return the calling object.

   return *this;   
    
} // end setRecipientZipCode function.

// Implementation of the getRecipientZipCode function.
      
string Package::getRecipientZipCode( ) const {

   // Return the private data member recipientZip.
    
   return recipientZip;    
    
} // end getRecipientZipCode function.

// Implementation of the setWeight function.

Package& Package::setWeight( double newWeight ) {
    
   // Make sure that the new weight is a positive value. If not
   // do not change the data member weight.
    
   if ( newWeight > 0 )
       
      weight = newWeight;
   
   // Return the calling object.
   
   return *this;    
    
} // end setWeight function.

// Implementation of the getWeight function.

double Package::getWeight( ) const {
    
   // Return the private data member weight.
    
   return weight;    
    
} // end getWeight function.

// Implementation of the setCostPerOunce function.
      
Package& Package::setCostPerOunce( double newCostPerOunce ) {
    
   // Make sure that the new cost per ounce is a positive value. If not
   // do not change the data member costPerOunce.
    
   if ( newCostPerOunce > 0 )
       
      costPerOunce = newCostPerOunce;
   
   // Return the calling object.
   
   return *this;    
    
} // end setCostPerOunce function.

// Implementation of the getCostPerOunce function.
      
double Package::getCostPerOunce( ) const {
    
   // Return the private data member costPerOunce.
    
   return costPerOunce;    
    
} // end getCostPerOunce function.

// Implementation of the calculateCost function.
    
double Package::calculateCost( ) const {
    
   // The cost to ship a Package is the weight times the costPerOunce.
    
   return ( getWeight( ) * getCostPerOunce( ) );
    
} // end calculateCost function.      
