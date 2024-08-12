#include <stdio.h>
int main()
{
  int num, i = 1;
  printf("Enter number of terms : ");
  scanf("%d", &num);

  while (i <= num)
  {
    switch (i <= num)
    {
    case 1:
      printf("Number is : %d and cube of the %d is : %d\n", i, i, i * i * i);
      break;
    }
    i++;
  }

  return 0;
}