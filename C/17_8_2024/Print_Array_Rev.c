#include <stdio.h>
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    printf("Enter %d element : ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("The values store into the array are : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\nThe values store into the array in reverse are : ");
  for (int i = size - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}