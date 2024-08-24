#include <stdio.h>
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);
  int arr[size + 1];
  for (int i = 0; i < size; i++)
  {
    printf("Element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  int ele, i;
  printf("Enter the value to be inserted : ");
  scanf("%d", &ele);

  for (i = size; i >= 0 && arr[i - 1] > ele; i--)
    arr[i] = arr[i - 1];

  arr[i] = ele;
  for (i = 0; i <= size; i++)
    printf("%d ", arr[i]);

  return 0;
}