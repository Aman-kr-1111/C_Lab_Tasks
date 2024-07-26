#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  num > 0 ? printf("%d is Positive number", num) : num == 0 ? printf("%d is zero", num): printf("%d is Negative", num);
  return 0;
}