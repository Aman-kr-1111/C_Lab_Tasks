#include <stdio.h>
int main()
{
  int num, store_num, rev_num = 0, rem;
  printf("Enter your number : ");
  scanf("%d", &num);
  store_num = num;

  if (num < 0)
  {
    num = -num;
    printf("-");
  }

  do
  {
    rem = num % 10;
    rev_num = rev_num * 10 + rem;
    num /= 10;
  } while (num);

  do
  {
    rem = rev_num % 10;
    switch (rem)
    {
    case 0:
      printf("Zero ");
      break;
    case 1:
      printf("One ");
      break;
    case 2:
      printf("Two ");
      break;
    case 3:
      printf("Three ");
      break;
    case 4:
      printf("Four ");
      break;
    case 5:
      printf("Five ");
      break;
    case 6:
      printf("Six ");
      break;
    case 7:
      printf("Seven ");
      break;
    case 8:
      printf("Eight ");
      break;
    case 9:
      printf("Nine ");
      break;

    default:
      printf("Invalid input");
      break;
    }
    rev_num /= 10;
  } while (rev_num);

  while (store_num && store_num % 10 == 0)
  {
    printf(" Zero");
    store_num /= 10;
  }

  return 0;
}