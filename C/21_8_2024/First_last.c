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

  int i = 0, j = size - 1;
  while (i < j)
  {
    printf("%d %d\n", arr[i++], arr[j--]);
  }
  if (size % 2)
  {
    printf("%d", arr[size / 2]);
  }

  return 0;
}