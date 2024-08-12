// Online C compiler to run C program online
#include <stdio.h>

int main()
{
  int num, sum = 0;
  printf("Input number of terms : ");
  scanf("%d", &num);

  printf("The even numbers are : ");
  for (int i = 2; num--; i += 2)
  {
    printf("%d ", i);
    sum += i;
  }

  printf("\nThe Sum of even Natural Number upto 5 terms : %d", sum);

  return 0;
}