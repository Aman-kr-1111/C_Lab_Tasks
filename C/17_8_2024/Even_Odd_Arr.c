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

  printf("The Even elements are : ");
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      printf("%d ", arr[i]);
    }
  }

  printf("\nThe Odd elements are : ");
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 != 0)
    {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}