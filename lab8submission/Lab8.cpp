// CS 271 
// Program Name: Lab8.cpp
// Author: Jose Franco Baquera
// Date: November 26, 2017
// Purpose: The purpose of the program
// is to serve as the test/driver program 
// that will test the member functions of 
// the Package and TwoDayPackage classes.

// Include statements.

#include "Package.h"
#include "TwoDayPackage.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Main function.

int main ( ) {
    
   // Instanziate several Package objects.
    
   Package packageOne ( "Jose Franco", "201 Branding Iron Cir.", "Las Cruces", "New Mexico", "88009", "Sonia Franco", "845 Watson Ln.", "Las Cruces", "New Mexico", 
                        
      "88006", 0.39, 1.69 );
   
   Package packageTwo ( "Joseph Baquera", "123 Onyx Cir.", "El Paso", "Texas", "81009", "Jazmine Guerrero", "789 Waterloo Rd.", "New York City", "New York", "11003", 
   
      9.68, 0.63 );
   
   // Instanziate several TwoDayPackage objects.
   
   TwoDayPackage twoDayPackageOne ( "Alejandro Cruz", "753 Nevada Street", "Seattle", "Washingston", "63699", "Alberto Rivas", "361 Roadrunner Street", "Salt Lake City", 
                                    
      "Utah", "11669", 1.69, 1.99, 9.68 );
   
   TwoDayPackage twoDayPackageTwo ( "Amner Carmona", "983 Canutillo Road", "Midland", "Texas", "11223", "Kassandra Bustamante", "913 Carline Street", "Denver", 
                                    
      "Colorado", "13695", 3.69, 0.36, 10.69 );
   
   // Test the Package class. 
   
   cout << endl << "----------Testing the Package clss----------" << endl << endl;
   
   // Testing the ostream function.
   
   cout << "*****This is packageOne*****" << endl << packageOne << endl;
   
   cout << "*****This is packageTwo*****" << endl << packageTwo << endl;
   
   // Test all the mutators of the Package class.
   
   cout << "Testing all mutators of the Package class." << endl;
   
   cout << "Changing packageOne. Changing its private data memebers to: " << endl;
   
   cout << "Sender Name: Maria OLiver " << endl << "Sender Address: 169 Chihuahua Street" << endl
   
      << "Sender City: Chihuahua" << endl << "Sender State: Washington" << endl << "Sender Zip: 87961" << endl
      
      << "Recipient Name: Caroline Lambert" << endl << "Recipient Address: 999 Utah Road" << endl
      
      << "Recipient City: Nashville" << endl << "Recipient State: Tennesse" << endl << "Recipient Zip: 66119" << endl
      
      << "Weight: 69.3" << endl << "Cost per ounce: 3.69" << endl;
      
   packageOne.setSenderName( "Maria Oliver" ).setSenderAddress( "169 Chihuahua Street" ).setSenderCity( "Chihuahua" );
   
   packageOne.setSenderState( "Washington" ).setSenderZipCode( "87691" ).setRecipientName( "Caroline Lambert" ).setRecipientAddress( "999 Utah Road" );
   
   packageOne.setRecipientCity( "Nashville" ).setRecipientState( "Tennesse" ).setRecipientZipCode( "66119" ).setWeight( 69.3 ).setCostPerOunce( 3.69 );
   
   cout << endl << "This is the new packageOne" << endl;
   
   cout << endl << packageOne << endl;
   
   // Testing the calculateCost member function.
   
   cout << "Testing the calculateCost function" << endl << endl;
   
   cout << "The total cost of the new packageOne should be 69.3 * 3.69." << endl << "The total cost of packageOne is: " << packageOne.calculateCost( ) << endl;
   
   // Test all the accessors of the Package class.
   
   cout << endl << "Testing all the accessors of the Package class" << endl << endl;
   
   cout << "This is all of packageTwo's information" << endl;
   
   cout << "Sender Name: " << packageTwo.getSenderName( ) << endl << "Sender Address: " << packageTwo.getSenderAddress( ) << endl
   
      << "Sender City: " << packageTwo.getSenderCity( ) << endl << "Sender State: " << packageTwo.getSenderState( ) << endl << "Sender Zip: " 
      
      << packageTwo.getSenderZipCode( ) << endl
      
      << "Recipient Name: " << packageTwo.getRecipientName( ) << endl << "Recipient Address: " << packageTwo.getRecipientAddress( ) << endl
      
      << "Recipient City: " << packageTwo.getRecipientCity( ) << endl << "Recipient State: " << packageTwo.getRecipientState( ) << endl 
      
      << "Recipient Zip: " << packageTwo.getRecipientZipCode( ) << endl << "Weight: " << packageTwo.getWeight( ) << endl << "Cost per ounce: " 
      
      << packageTwo.getCostPerOunce( ) << endl;
   
   cout << endl << "----------Testing the TwoDayPackage clss----------" << endl << endl;
   
   // Test the TwoDayPackage class.
   
   // Testing the ostream function.
   
   cout << "*****This is twoDayPackageOne*****" << endl << twoDayPackageOne << endl;
   
   cout << "*****This is twoDayPackageTwo*****" << endl << twoDayPackageTwo << endl;
   
   // Test all the mutators of the TwoDayPackage class.
   
   cout << "Testing all mutators of the TwoDayPackage class." << endl;
   
   cout << "Changing twoDayPackageOne. Changing its private data memebers to: " << endl;
   
   cout << "Sender Name: Fez Hernandez " << endl << "Sender Address: 699 Main Street" << endl
   
      << "Sender City: Boise" << endl << "Sender State: Idaho" << endl << "Sender Zip: 66963" << endl
      
      << "Recipient Name: Adam Lopez" << endl << "Recipient Address: 696 Solano Street" << endl
      
      << "Recipient City: Las Vegas" << endl << "Recipient State: Nevada" << endl << "Recipient Zip: 36966" << endl
      
      << "Weight: -63.9" << endl << "Cost per ounce: -0.69" << endl << "Flat fee: 6.39" << endl;
      
   cout << "NOTE: The weight and cost per ounce are negative. Since the mutators check if the parameter is positive, these two private data members " 
   
   << "should not change." << endl;    
      
   twoDayPackageOne.setSenderName( "Fez Hernandez" ).setSenderAddress( "699 Main Street" ).setSenderCity( "Boise" );
   
   twoDayPackageOne.setSenderState( "Idaho" ).setSenderZipCode( "66963" ).setRecipientName( "Adam Lopez" ).setRecipientAddress( "696 Solano Street" );
   
   twoDayPackageOne.setRecipientCity( "Las Vegas" ).setRecipientState( "Nevada" ).setRecipientZipCode( "36966" ).setWeight( -63.9 ).setCostPerOunce( -0.69 );
   
   twoDayPackageOne.setFlatFee( 6.39 );
   
   cout << endl << "This is the new twoDayPackageOne" << endl;
   
   cout << endl << twoDayPackageOne << endl;
   
   // Testing the calculateCost member function.
   
   cout << "Testing the calculateCost function" << endl << endl;
   
   cout << "The total cost of the new twoDayPackageOne should be ( 1.69 * 1.99 ) + 6.39." << endl << "The total cost of twoDayPackageOne is: " 
   
   << twoDayPackageOne.calculateCost( ) << endl;
   
   // Test all the accessors of the TwoDayPackage class.
   
   cout << endl << "Testing all the accessors of the TwoDayPackage class" << endl << endl;
   
   cout << "This is all of twoDayPackageTwo's information" << endl;
   
   cout << "Sender Name: " << twoDayPackageTwo.getSenderName( ) << endl << "Sender Address: " << twoDayPackageTwo.getSenderAddress( ) << endl
   
      << "Sender City: " << twoDayPackageTwo.getSenderCity( ) << endl << "Sender State: " << twoDayPackageTwo.getSenderState( ) << endl << "Sender Zip: " 
      
      << twoDayPackageTwo.getSenderZipCode( ) << endl << "Recipient Name: " << twoDayPackageTwo.getRecipientName( ) << endl << "Recipient Address: " 
      
      << twoDayPackageTwo.getRecipientAddress( ) << endl << "Recipient City: " << twoDayPackageTwo.getRecipientCity( ) << endl << "Recipient State: " 
      
      << twoDayPackageTwo.getRecipientState( ) << endl << "Recipient Zip: " << twoDayPackageTwo.getRecipientZipCode( ) << endl << "Weight: " 
      
      << twoDayPackageTwo.getWeight( ) << endl << "Cost per ounce: " << twoDayPackageTwo.getCostPerOunce( ) << endl << "Flat fee: " << twoDayPackageTwo.getFlatFee( ) 
      
      << endl << endl;
      
} // end main.
