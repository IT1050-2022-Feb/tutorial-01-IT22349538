/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a, b, sum;
  float avg;

  printf("Enter the marks of the first subject: ");
  scanf("%d", &a);

  printf("Enter the marks of the second subject: ");
  scanf("%d", &b);

  sum = a + b;
  avg = sum / 2.0;

  printf("Average = %.2f", avg);
  
  return 0;
}

