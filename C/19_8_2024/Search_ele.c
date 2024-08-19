#include <stdio.h>
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);

  int arr[size], find_num, flag = 1;
  printf("Enter %d element : ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number you want to search : ");
  scanf("%d", &find_num);

  for (int i = 0; i < size; i++)
  {
    if (find_num == arr[i])
      printf("The element which you have sreached is present inside the %dth index.\n", i, flag = 0);
  }

  if (flag)
  {
    printf("The element which you have sreached isn't present inside the Array.");
  }

  return 0;
}