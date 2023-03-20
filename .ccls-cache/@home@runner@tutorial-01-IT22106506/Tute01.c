/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

// main function begins program execution
int main() {

  int mark1;     // first mark to be entered by the user
  int mark2;     // second mark to be entered by the user
  float average; // variable in which average will be stored

  printf("Enter the mark 1 : "); // prompt
  scanf("%d", &mark1);           // read the mark from user

  printf("Enter the mark 2 : "); // prompt
  scanf("%d", &mark2);           // read the mark from user

  average = (mark1 + mark2) / 2.0; // calculating the average

  printf("The average is : %.2f", average); // print average

  return 0;
} // end of main function
