#include <stdio.h>

int sum(int n);

int main() {
  int n = 0, big = 0, index = 0, state = 0;
  int numbers[100];
  // while (scanf("%d", &numbers[index]) != EOF) {
    // index++;
  int num = 0;
  while (scanf("%d", &num) == 1) {
    if (getchar() == '\n') {
      numbers[index] = num; 
      index++;
      break;
    }
    numbers[index] = num; 
    index++;
    // puts("Okay, checked.\n");
  }
  for (int i=0; i<index; i++) {
    if (numbers[i] > big) {
      big = numbers[i];
    }
    state += numbers[i];
  }

  // printf("state : %d\n", state);
  // printf("sum : %d\n", sum(big));
  
  // for (int j=0; j<index; j++) {
  //   printf("nubmers[%d] : %d\n", j, numbers[j]);
  // }

  if (state == sum(big)) {
    printf("%d\n", big + 1);
  }
  else {
    printf("%d\n", sum(big) - state);
  }
  return 0;
}

int sum(int n) {
  return n*(n+1)/2;
}
