// 2023-10-31
// 7.1 The Maximum Weight
//

#include<stdio.h>

int main() {
  int weight[] = {56, 65, 84, 45, 75, 77, 86, 67, 75, 49};
  int size = sizeof weight /sizeof weight[0];
  int max_weight = 0;

  for (int i=0; i<size; i++) {
    if (weight[i] > max_weight)
      max_weight = weight[i];
  }
  printf("The maximum weight: %d kg\n", max_weight);
  return 0;
}
