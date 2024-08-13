#include <stdio.h>
int main()
{
  int num1, num2, add;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  // Mehod-1
  // add = num1 - (-num2);
  // Mehod-2
  // add=num1- -num2;
  // Mehod-3
  add = num1 - (~num2) - 1;
  printf("Add = %d", add);
  return 0;
}