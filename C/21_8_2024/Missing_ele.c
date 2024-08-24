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
    if (arr[i] < arr[i + 1])
    {
      for (int k = arr[i] + 1; k < arr[i + 1]; k++)
      {
        printf("%d ", k);
      }
    }
  }

  return 0;
}