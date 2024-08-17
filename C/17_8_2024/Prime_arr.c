#include <stdio.h>
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    printf("Enter %d element : ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\nThe Prime numbers are : ");
  for (int i = 0; i < size; i++)
  {
    int flag = 1, ele = arr[i];

    for (int j = 2; j <= ele / 2; j++)
    {
      if (ele % j == 0)
      {
        flag = 0;
        break;
      }
    }

    if (ele != 1 && flag)
    {
      printf("%d ", ele);
    }
  }

  return 0;
}