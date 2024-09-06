#include <stdio.h>
void userInput(int *, int);
int searchElement(int *, int, int);
int main()
{
  int size, target;
  printf("Enter array size : ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d element in array!!!\n", size);
  userInput(arr, size);

  printf("Enter target element : ");
  scanf("%d", &target);

  printf("Index : %d", searchElement(arr, size, target));
  return 0;
}

void userInput(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}

int searchElement(int *arr, int size, int target)
{

  for (int i = 0; i < size; i++)
  {
    if (target == *(arr + i))
    {
      return i;
    }
    else if (target < *(arr + (i + 1)))
    {
      return i + 1;
    }
  }
  return (size - 1) + (target - arr[size - 1]);
}