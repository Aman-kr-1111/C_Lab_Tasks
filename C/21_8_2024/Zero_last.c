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

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j] == 0 && arr[j + 1] != 0)
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}