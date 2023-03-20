/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

// main function begins program execution
int main() {

  int number; // n number that user will be entered
  int sum;    // variable in which sum of the n numbers will be stored
  int i;      // variable for the FOR loop

  printf("Enter the number : "); // prompt
  scanf("%d", &number);          // read the n number by the user

  sum = 0; // assign 0 to sum

  for (i = 1; i <= number; i++) {
    sum = sum + i; // calculating the sum
  }                // end for

  printf("Sum is : %d", sum); // print sum

  return 0;
} // end of main function
