#include <stdio.h>
void swap_num(int, int);
int num1, num2;
int main()
{
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  printf("Before Swapping!!!\nnum1 = %d\nnum2 = %d\n", num1, num2);
  swap_num(num1, num2);
  printf("After Swapping!!!\nnum1 = %d\nnum2 = %d\n", num1, num2);

  return 0;
}
void swap_num(int n1, int n2)
{
  num1 = n2;
  num2 = n1;
}