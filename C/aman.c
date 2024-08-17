#include <stdio.h>
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d elements : ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Sorting
  for (int i = 0; i <= size - 2; i++)
  {
    for (int j = 0; j <= size - i - 2; j++)
    {
      if (arr[j] > arr[j + 1])
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

  int max = arr[size - 1], max_count, min_count, min = arr[0];

  printf("\n\nnth max number : ");
  scanf("%d", &max_count);
  printf("nth min number : ");
  scanf("%d", &min_count);

  // nth maximum number
  max_count--;
  for (int i = size - 2; i >= 0 && max_count; i--)
  {
    if (max != arr[i] && max > arr[i])
    {
      max = arr[i];
      max_count--;
    }
  }

  // nth minimum number
  min_count--;
  for (int i = 1; i < size && min_count; i++)
  {
    if (min != arr[i] && min < arr[i])
    {
      min = arr[i];
      min_count--;
    }
  }

  max_count ? printf("Not found") : printf("\nmax number : %d", max);

  min_count ? printf("Not found") : printf("\nmin number : %d", min);

  return 0;
}