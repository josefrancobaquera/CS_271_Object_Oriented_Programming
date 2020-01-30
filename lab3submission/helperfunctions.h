// CS 271
// Program Name: helperfunctions.h
// Author: Jose Franco Baquera
// Date: September 11, 2017
// Purpose: The purpose of this program is 
// to serve as a header file with all the function
// prototypes needed for lab3.c. For this program,
// there are only three function prototypes.

#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

   // Here are the three prototypes.
   
   void swap ( int * num1, int * num2 );
   void fillArray ( int * const data, int size, int min, int max );
   void neatPrint ( int * const data, int size, int numPerLine, int fieldSize );

#endif
