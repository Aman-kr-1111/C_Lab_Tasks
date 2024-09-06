#include <stdio.h>
void swap_Num(int *, int *);
int main()
{
  int num1, num2;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);

  printf("Before Swapping!!!\nnum1 = %d\nnum2 = %d\n", num1, num2);
  swap_Num(&num1, &num2);
  printf("After Swapping!!!\nnum1 = %d\nnum2 = %d\n", num1, num2);

  return 0;
}
void swap_Num(int *n1, int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}