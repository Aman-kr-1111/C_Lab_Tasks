#include <stdio.h>
int main()
{
  int num, sum = 0;
  printf("Enter number of terms : ");
  scanf("%d", &num);

  printf("The even numbers are : ");
  for (int i = 2; num > 0; i += 2)
  {
    printf("%d ", i);
    sum += i;
    num--;
  }

  printf("\nThe Sum of even Natural Number upto 5 terms : %d", sum);

  return 0;
}