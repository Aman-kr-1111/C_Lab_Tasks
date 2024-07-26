#include <stdio.h>
int main()
{
  float costPrice, repairCost, coloringCost, accessoriesCost, desiredProfit, sellingPrice;
  printf("Enter Cost price : ");
  scanf("%f", &costPrice);
  printf("Enter Repair cost : ");
  scanf("%f", &repairCost);
  printf("Enter Coloring cost : ");
  scanf("%f", &coloringCost);
  printf("Enter Accessories cost : ");
  scanf("%f", &accessoriesCost);
  printf("Enter Desired profit : ");
  scanf("%f", &desiredProfit);

  sellingPrice = costPrice + repairCost + coloringCost + accessoriesCost + desiredProfit;

  printf("\nCost price : %.2f\n", costPrice);
  printf("Repair cost : %.2f\n", repairCost);
  printf("Coloring cost : %.2f\n", coloringCost);
  printf("Accessories cost : %.2f\n", accessoriesCost);
  printf("Desired profit : %.2f\n", desiredProfit);
  printf("Selling price : %.2f\n", sellingPrice);
  return 0;
}