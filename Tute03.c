/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n;
  int count=1 ;
  int sum=0;
  printf("enter number = ");
  scanf("%d",&n);

  for(count=1;count <= n;count++ )
  {
    sum = sum + count;
    printf("%d+",count);
        
  }
  printf("\n");
 printf("sum = %d",sum);

  return 0;
}

