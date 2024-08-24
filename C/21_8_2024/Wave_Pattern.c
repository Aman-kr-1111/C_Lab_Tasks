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

  for (int i = 0; i < size - 1; i += 2)
  {
    if (arr[i] < arr[i + 1])
    {
      int temp = arr[i];
      arr[i ] = arr[i+1];
      arr[i+1] = temp;
    }
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}