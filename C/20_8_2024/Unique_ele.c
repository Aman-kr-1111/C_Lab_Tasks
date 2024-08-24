#include <stdio.h>
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    printf("Element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count == 1)
    {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}