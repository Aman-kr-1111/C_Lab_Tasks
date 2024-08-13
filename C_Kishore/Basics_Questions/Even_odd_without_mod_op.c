#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  // Method-1
   printf("%d is an %s number", num, num / 2 * 2 == num ? "Even" : "Odd");

  // Method-2
  // printf("%d is an %s number", num, num & 1 ? "Odd" : "Even");

  return 0;
}