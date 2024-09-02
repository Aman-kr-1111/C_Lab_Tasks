#include <stdio.h>
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);

  int arr[size];
  printf("Input %d elements in the array!!!\n", size);
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  int *ptr = arr;
  printf("\nSample outputs !!!!\n");
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : %d\n", i, *(ptr + i));
  }

  return 0;
}