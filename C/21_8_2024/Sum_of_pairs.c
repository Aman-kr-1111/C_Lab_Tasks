#include <stdio.h>
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);

  int arr[size];
  for (int i = 0; i < size; i++)
  {
    printf("Element - %d: ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size - i; j++)
    {
      if (arr[i] + arr[j] == 15)
      {
        printf("(%d , %d)\n", arr[i], arr[j]);
      }
    }
  }

  return 0;
}