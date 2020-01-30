// CS 271
// Program Name: BankAccount.h
// Author: Jose Franco Baquera
// Date: October 8, 2017
// Purpose: The purpose of this program is to 
// serve as a class definition file for the 
// BankAccount class.

// Note: This is a C++ program.

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

// Include statements.

#include <iostream>
#include <iomanip>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

class BankAccount {
    
// Public function prototypes.

public:
    
   BankAccount( );
   BankAccount( string f, string l, int n );
   void setFirstName( string f );
   void setLastName( string l );
   void setAccountNumber ( int n );
   string getFirstName( );
   string getLastName( );
   int getAccountNumber ( );
   void display ( );
   
// Private attributes/instance variables. 

private:
    
   string firstName;
   string lastName;
   int accountNumber;
   
}; // end class definition.

#endif
