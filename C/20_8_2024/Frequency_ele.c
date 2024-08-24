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
    int count = 1;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
        arr[j] = -1;
      }
    }
    if (arr[i] != -1)
    {
      printf("%d occurs %d times\n", arr[i], count);
    }
  }

  return 0;
}