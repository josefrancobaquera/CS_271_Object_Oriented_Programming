// CS 271 
// Program Name: Lab7.cpp
// Author: Jose Franco Baquera
// Date: October 23, 2017
// Purpose: The purpose of the program
// is to serve as a "driver" that will 
// test the member functions of the Term class. 

// Include statements. 

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Term.h"

using namespace std;

// Main function.

int main ( ) {

   // Instantiate several Term objects in order test 
   // the member functions in the class Term.
    
   Term testOne( 2, 0 );
   
   Term testTwo( -9, 1 );
   
   Term testThree( 3, 3 );
   
   Term testFour( 0, 6 );
   
   Term testFive( -1, 3 );
    
   Term defaultTerm;
   
   // Declare an integer for user input.
   
   int userInput;
    
   // Testing the constructor and the operator<< member functions.
   
   cout << endl << "----Testing the constructor and the operator<< member functions.----" << endl;
   
   cout << endl << "This is testOne: " << testOne << endl;
   
   cout << "This is testTwo: " << testTwo << endl;
   
   cout << "This is testThree: " << testThree << endl;
   
   cout << "This is testFour: " << testFour << endl;
   
   cout << "This is testFive: " << testFive << endl;
   
   cout << "This is defaultTerm: " << defaultTerm << endl;
   
   // Testing accessors and mutators 
   
   cout << endl << "----Testing the accessors and mutators of the Term class.----" << endl;
   
   cout << endl << "The coefficient of testOne is " << testOne.getCoefficient( ) << " while its exponent is " << testOne.getExponent( ) << "."; 
   
   cout << endl << "The coefficient of testTwo is " << testTwo.getCoefficient( ) << " while its exponent is " << testTwo.getExponent( ) << ".";
   
   cout << endl << "Let's change the coefficient of testTwo to 3 and its exponent to -7.";
   
   testTwo.setCoefficient( 3 );
   
   testTwo.setExponent( -7 );
   
   cout << endl << "The new coefficient of testTwo is " << testTwo.getCoefficient( ) << " while its new exponent is " << testTwo.getExponent( ) << ".";
   
   cout << endl << "Let's change the coefficient of testOne to 5 and its exponent to -7.";
   
   testOne.setCoefficient( 5 );
   
   testOne.setExponent( -7 );
   
   cout << endl << "The new coefficient of testOne is " << testOne.getCoefficient( ) << " while its new exponent is " << testOne.getExponent( ) << ".";
   
   // Testing the operator+, operator-, and operator* member functions.
   
   cout << endl << endl << "----Testing the operator+, operator-, and operator* member functions.----" << endl << endl;
   
   cout << "Here are all the Term objects again, with some of them updated." << endl;
   
   cout << endl << "This is testOne: " << testOne << endl;
   
   cout << "This is testTwo: " << testTwo << endl;
   
   cout << "This is testThree: " << testThree << endl;
   
   cout << "This is testFour: " << testFour << endl;
   
   cout << "This is testFive: " << testFive << endl << endl;
   
   cout << "The sum of testOne and testTwo is: " << ( testOne + testTwo ) << endl;
   
   cout << "The sum of testTwo and testFive is: " << ( testTwo + testFive ) << endl;
   
   cout << "The sum of testThree and testFive is: " << ( testThree + testFive ) << endl;
   
   cout << "The subtraction of testOne - testTwo is: " << ( testOne - testTwo ) << endl;
   
   cout << "The subtraction of testTwo - testOne is: " << ( testTwo - testOne ) << endl;
   
   cout << "The subtraction of testOne - testFour is: " << ( testOne - testFour ) << endl;
   
   cout << "The product of testOne and testFive is: " << ( testOne * testFive ) << endl;
   
   cout << "The product of testThree and testFour is: " << ( testThree * testFour ) << endl;
   
   // Testing the operator>> member function.
   
   cout << endl << "----Testing the operator>> member function.----" << endl << endl;
   
   cout << "This is testOne: " << testOne << endl;
   
   cout << "Lets modify testOne. Please enter a coefficient and an exponent (in that order): ";
   
   cin >> testOne;
   
   cout << "This is the modified testOne: " << testOne << endl;
   
   cout << "This is testTwo: " << testTwo << endl;
   
   cout << "Lets modify testTwo. Please enter a coefficient and an exponent (in that order): ";
   
   cin >> testTwo;
   
   cout << "This is the modified testTwo: " << testTwo << endl;
   
   cout << "The sum of testOne and testTwo is: " << ( testOne + testTwo ) << endl;
   
   cout << "The difference of testOne - testTwo (in that order) is: " << ( testOne - testTwo ) << endl;
   
   cout << "The product of testOne and testTwo is: " << ( testOne * testTwo ) << endl << endl;
   
} // end main.
