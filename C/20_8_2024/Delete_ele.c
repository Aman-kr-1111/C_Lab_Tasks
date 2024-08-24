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

  int pos, i;
  printf("Input the position which to delete : ");
  scanf("%d", &pos);

  for (i = pos - 1; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }

  for (i = 0; i < size - 1; i++)
    printf("%d ", arr[i]);

  return 0;
}