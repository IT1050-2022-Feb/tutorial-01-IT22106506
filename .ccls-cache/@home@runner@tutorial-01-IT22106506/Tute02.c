/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

// main function begins program execution
int main() {

  int distance; // distance to be entered by the user
  float amount; // variable in which amount will be stored

  printf("Enter the distance : "); // prompt
  scanf("%d", &distance);          // read the distance by the user

  if (distance <= 30) {
    amount = distance *
             50.00; // calculating the amount for distance within the first 30km
  }                 // end if

  if (distance > 30) {
    amount =
        (30 * 50.00) +
        ((distance - 30) *
         40.00); // calculating the amount if the distance is more than 30km
  }              // end if

  printf("The amount is : %.2f", amount); // print amount

  return 0;
} // end of main function
