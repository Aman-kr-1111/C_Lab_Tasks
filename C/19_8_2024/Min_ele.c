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

  int min = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }

  printf("Min element is : %d", min);

  return 0;
}