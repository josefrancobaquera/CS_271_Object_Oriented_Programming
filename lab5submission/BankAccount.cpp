// CS 271
// Program Name: BankAccount.cpp
// Author: Jose Franco Baquera
// Date: October 8, 2017
// Purpose: The purpose of this program is to
// be the function definitions/implementations
// file for the BankAccount class.

// Note: This is a C++ program.

// Include statements.

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

// Implementation of the BankAccount class. 

// Contains member function definitions.

// Default Constructor.

BankAccount::BankAccount( ) {
    
   // Inizialize the attributes to empty strings/zero.
    
   firstName = "";
   
   lastName = "";
   
   accountNumber = 0;
    
} // end default constructor.

// Second Constructor.

BankAccount::BankAccount( string f, string l, int n ) {

   setFirstName(f);
   
   setLastName(l);
   
   setAccountNumber(n);

} // end constructor.

// firstName Mutator.

void BankAccount::setFirstName( string f ) {
    
    firstName = f;

} // end setFirstName.

// lastName Mutator.

void BankAccount::setLastName( string l ) {

   lastName = l;

} // end setLastName.

// accountNumber Mutator.

void BankAccount::setAccountNumber ( int n ) {

   accountNumber = n;

} // end setAccountNumber.

// firstName Accessor.

string BankAccount::getFirstName( ) {

   return firstName;
      
} // end getFirstName.

// lastName Accessor.

string BankAccount::getLastName( ) {

   return lastName;

} // end getLastName.

// accountNumber Accessor.

int BankAccount::getAccountNumber ( ) {
    
   return accountNumber;
      
} // end getAccountNumber.

// Implementation of display function.

void BankAccount::display ( ) {
    
   // Print out the bank account information with the given 
   // format.
        
   cout << "Customer: " << firstName << " " << lastName << endl;
   
   cout << "Account:  " << accountNumber << endl << endl;   
    
} // end display function.
