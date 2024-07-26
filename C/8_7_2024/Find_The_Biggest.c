#include <stdio.h>
int main()
{
  int num1, num2, num3;
  printf("Enter your first number : ");
  scanf("%d", &num1);
  printf("Enter your second number : ");
  scanf("%d", &num2);
  printf("Enter your third number : ");
  scanf("%d", &num3);

  num1 < num2 &&num2 < num3 &&printf("%d is greatest", num3);
  num1<num2 && num2> num3 &&printf("%d is greatest", num2);
  num1 > num2 &&printf("%d is greatest", num1);

  return 0;
}