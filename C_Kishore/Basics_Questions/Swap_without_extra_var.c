#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  printf("Before swapping \nnum1 = %d and num2 = %d\n", num1, num2);
  // Method-1
  // num1 += num2;
  // num2 = num1 - num2;
  // num1 -= num2;

  // Method-2
  // num1 *= num2;
  // num2 = num1 / num2;
  // num1 /= num2;

  // Method-3
  num1 ^= num2;
  num2 = num1 ^ num2;
  num1 ^= num2;

  printf("After swapping \nnum1 = %d and num2 = %d\n", num1, num2);
  return 0;
}