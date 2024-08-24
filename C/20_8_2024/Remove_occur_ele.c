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

  int ele, i;
  printf("Input the element that you want to delete : ");
  scanf("%d", &ele);

  for (i = 0; i < size; i++)
  {
    if (arr[i] == 2)
      continue;
    printf("%d ", arr[i]);
  }

  return 0;
}