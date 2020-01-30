// CS 271 
// Program Name: Package.h
// Author: Jose Franco Baquera
// Date: November 13, 2017
// Purpose: The purpose of the program
// is to serve as the class definition 
// for the Package class.

#ifndef PACKAGE_H
#define PACKAGE_H

// Include Statements.

#include <iostream>
#include <string>

using namespace std;

class Package {

   // Friend function prototype.

   friend ostream& operator << ( ostream &, const Package & );
   
   // Prototypes of the public member functions for the Package class.

   public: 
       
      Package( const string &, const string &, const string &, const string &, const string &, const string &, 
                
                const string &, const string &, const string &, const string &, double = 0.0, double = 0.0 ); 

      Package& setSenderName( const string & );
      
      string getSenderName( ) const;
      
      Package& setSenderAddress( const string & );
      
      string getSenderAddress( ) const;
      
      Package& setSenderCity( const string & );
      
      string getSenderCity( ) const;
      
      Package& setSenderState( const string & );
      
      string getSenderState( ) const;
      
      Package& setSenderZipCode( const string & );
      
      string getSenderZipCode( ) const;
      
      Package& setRecipientName( const string & );
      
      string getRecipientName( ) const;
      
      Package& setRecipientAddress( const string & );
      
      string getRecipientAddress( ) const;
      
      Package& setRecipientCity( const string & );
      
      string getRecipientCity( ) const;
      
      Package& setRecipientState( const string & );
      
      string getRecipientState( ) const;
      
      Package& setRecipientZipCode( const string & );
      
      string getRecipientZipCode( ) const;
      
      Package& setWeight( double );
      
      double getWeight( ) const;
      
      Package& setCostPerOunce( double );
      
      double getCostPerOunce( ) const;
    
      double calculateCost( ) const;
      
   // Private data members for the Package class.
      
   private:

      string senderName;
      
      string senderAddress;
      
      string senderCity;
      
      string senderState;
      
      string senderZip;
      
      string recipientName;
      
      string recipientAddress;
      
      string recipientCity;
      
      string recipientState;
      
      string recipientZip;
      
      double weight;
      
      double costPerOunce;

}; // end class Package.

#endif
