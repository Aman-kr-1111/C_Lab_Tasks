#include <stdio.h>
void swap(int *, int *, int *);
int main()
{
  int num1, num2, num3;
  printf("Enter 1st number : ");
  scanf("%d", &num1);
  printf("Enter 2nd number : ");
  scanf("%d", &num2);
  printf("Enter 3rd number : ");
  scanf("%d", &num3);

  printf("Before swapping!!!\nnum1 = %d\nnum2 = %d\nnum3 = %d", num1, num2, num3);
  swap(&num1, &num2, &num3);

  printf("\nAfter swapping!!!\nnum1 = %d\nnum2 = %d\nnum3 = %d", num1, num2, num3);
  return 0;
}

void swap(int *num1, int *num2, int *num3)
{
  // First swapping
  int temp = *num3;
  *num3 = *num1;
  *num1 = temp;

  // Second swapping
  temp = *num3; // 5
  *num3 = *num2;
  *num2 = temp;
}