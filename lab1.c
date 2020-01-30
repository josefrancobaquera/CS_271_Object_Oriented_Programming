// CS 271
// Program Name: lab1.c
// Author: Jose Franco Baquera
// Date: August 21, 2017
// Purpose: The purpose of this program is for the user to input four test 
// scores until the user inputs -1 0 0 0 as the test scores. THe program will 
// then calulate the average and print it, along with the original four
// test scores and its corresponding letter grade. 

// Import statements needed.

#include <stdio.h>
#include <math.h>

int main (void) {
    
   // Need to inizialize variables. One for each exam score, sum, and average. Letter grade is a char.
   
   float firstExamScore, secondExamScore, thirdExamScore, fourthExamScore, averageExamScore, sumExamScore = 0;
   
   char letterGrade;
   
   // Ask for a prompt, then scan the value inputted. Use -1 0 0 0 as the sentenial value.
   
   printf( "Enter the 4 test scores of the student. Use -1 0 0 0 to stop.\n" );
   
   scanf( "%f%f%f%f", &firstExamScore, &secondExamScore, &thirdExamScore, &fourthExamScore );
   
   // Use sentenial while loop. When the user inputs -1 0 0 0, the loop will stop.
   
   while ( ! ( firstExamScore == -1 && secondExamScore == 0 && thirdExamScore == 0 && fourthExamScore == 0 ) ) {
       
      // Calculate the sum and average.
      
      sumExamScore = firstExamScore + secondExamScore + thirdExamScore + fourthExamScore;
      
      averageExamScore = sumExamScore / 4.0;
      
      // Use nested if-else statements to determine the letter grade of the average score.
      
      if ( averageExamScore < 60.0 )
         
         letterGrade = 'F';
          
      else if ( averageExamScore < 70.0 )
      
         letterGrade = 'D';
      
      else if ( averageExamScore < 80.0 )
          
         letterGrade = 'C';
      
      else if ( averageExamScore < 90.0 )
      
         letterGrade = 'B';
      
      else 

          letterGrade = 'A';
           
      // Print all the information related to the input.
      
      printf( "Exam Scores:  %0.2f  %0.2f  %0.2f  %0.2f\n", firstExamScore, secondExamScore, thirdExamScore, fourthExamScore );
      
      printf( "Average:      %0.2f\n", averageExamScore );
      
      printf( "Letter Grade: %c\n", letterGrade );
      
      // Prompt the user for another four test scores. Read in the values. 
      
      printf( "Enter the 4 test scores of the student. Use -1 0 0 0 to stop.\n" );

      scanf( "%f%f%f%f", &firstExamScore, &secondExamScore, &thirdExamScore, &fourthExamScore );
      
   } // end while loop

} // end main function main
