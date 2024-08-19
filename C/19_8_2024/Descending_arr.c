#include <stdio.h>
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d element : ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("After sorting in ascending order : ");
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] < arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int j = 0; j < size; j++)
  {
    printf("%d ", arr[j]);
  }

  return 0;
}