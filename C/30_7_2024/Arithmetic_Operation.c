#include <stdio.h>
int main()
{
  int num1, num2;
  char op;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  puts("+");
  puts("-");
  puts("*");
  puts("/");
  puts("%");
  printf("Choose your character : ");
  scanf(" %c", &op);
  switch (op)
  {
  case '+':
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    break;
  case '-':
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    break;
  case '*':
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    break;
  case '/':
    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    break;
  case '%':
    printf("%d % %d = %d\n", num1, num2, num1 % num2);
    break;

  default:
    puts("Invalid input");
    break;
  }

  return 0;
}