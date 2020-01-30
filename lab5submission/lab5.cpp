// CS 271
// Program Name: lab5.cpp
// Author: Jose Franco Baquera
// Date: October 8, 2017
// Purpose: The purpose of this program is to
// be the test file that will create several
// BankAccount objects and test the member function 
// definitions of the BankAccount class.

// Include Statements.

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "BankAccount.h"

using namespace std;

// Main Function.

int main ( ) {

   // Create several BankAccount objects using both
   // the default contructor and second contructor.
    
   BankAccount joesChecking( "Joe", "Smith", 1234 );
   
   BankAccount kassandrasChecking( "Kassandra", "Valles", 5649 );
   
   BankAccount unknownCheckingOne;
   
   BankAccount unknownCheckingTwo;
   
   BankAccount userInputOne;
   
   string first = "", last = "";
   
   int number = 0;
   
   // Test the default constructor, second constructor, and display functions.
   
   cout << "---Testing the default contructor, second constructor, and display functions---" << endl << endl;
   
   joesChecking.display( );
   
   kassandrasChecking.display( );
   
   unknownCheckingOne.display( );
   
   unknownCheckingTwo.display( );
   
   // Testing the three mutators.
   
   cout << "---Testing the three mutators setFirstName, setLastName, and setAccountNumber functions---" << endl << endl;
   
   joesChecking.setFirstName( "Jose" );
   
   joesChecking.setAccountNumber( 5913 );
   
   kassandrasChecking.setLastName( "Lopez" );
   
   kassandrasChecking.setAccountNumber( 6549 );   
   
   unknownCheckingOne.setFirstName( "Jazmine" );
   
   unknownCheckingOne.setLastName( "Guerrero" );
   
   unknownCheckingOne.setAccountNumber( 1369 );
   
   unknownCheckingTwo.setFirstName( "Stefani" );
   
   unknownCheckingTwo.setLastName( "Germonnatta" );
   
   unknownCheckingTwo.setAccountNumber( 6549 );
   
   cout << "Here are the updated bank account objects: " << endl;
   
   joesChecking.display( );
   
   kassandrasChecking.display( );
   
   unknownCheckingOne.display( );
   
   unknownCheckingTwo.display( );
   
   // Testing the three accessors.
   
   cout << "---Testing the three accesors getFirstName, getLastName, and getAccountNumber functions---" << endl << endl;
   
   cout << "The first name of the joesChecking object is: " << joesChecking.getFirstName( ) << endl;
   
   cout << "The account number of the joesChecking object is: " << joesChecking.getAccountNumber( ) << endl;
   
   cout << "The last name of the kassandrasChecking object is: " << kassandrasChecking.getLastName( ) << endl;
   
   cout << "The account number of the kassandrasChecking object is: " << kassandrasChecking.getAccountNumber( ) << endl;
   
   cout << "The first name of the unknownCheckingOne object is: " << unknownCheckingOne.getFirstName( ) << endl;
   
   cout << "The last name of the unknownCheckingOne object is: " << unknownCheckingOne.getLastName( ) << endl;
   
   cout << "The account number of the unknownCheckingOne object is: " << unknownCheckingOne.getAccountNumber( ) << endl;

   cout << "The first name of the unknownCheckingTwo object is: " << unknownCheckingTwo.getFirstName( ) << endl;
   
   cout << "The last name of the unknownCheckingTwo object is: " << unknownCheckingTwo.getLastName( ) << endl;
   
   cout << "The account number of the unknownCheckingTwo object is: " << unknownCheckingTwo.getAccountNumber( ) << endl << endl;
   
   // Make the user input the first name, last name, and account number of a new BankAccount object.
   
   cout << "---Testing user input for new BankAccount object.---" << endl;
   
   cout << "Please enter the first name of the new bank account." << endl;
   
   getline( cin, first );
   
   userInputOne.setFirstName( first );
   
   cout << "The first name you entered was: " << userInputOne.getFirstName( ) << endl;
   
   cout << "Please enter the last name of the new bank account." << endl;
   
   getline( cin, last );
   
   userInputOne.setLastName( last );
   
   cout << "The last name you entered was: " << userInputOne.getLastName( ) << endl;
   
   cout << "Please enter the account number of the new bank account." << endl;
   
   cin >> number;
   
   userInputOne.setAccountNumber( number );
   
   cout << "The account number you entered was: " << userInputOne.getAccountNumber( ) << endl;
   
   cout << "This is the new bank account that you just created!!!!!!!!: " << endl << endl;
   
   userInputOne.display( ); 
   
} // end main.
