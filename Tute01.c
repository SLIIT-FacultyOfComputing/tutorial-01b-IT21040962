/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int marks1,marks2;
  float avg;

  printf("enter marks 1 = ");
  scanf("%d",&marks1);

  printf("enter marks 2 = ");
  scanf("%d",&marks2);

  avg = (marks1 +marks2)/2;

  printf("average = %.2f",avg);
  
  return 0;
}

