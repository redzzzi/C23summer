// 2023-11-16
// 9.1 Finding a Character

#include<stdio.h>
#include<string.h>

int D(int a) {
  return a * 2;
}

int A(int a) {
  return a + 1; 
}

int S(int a) {
  return a - 1; 
}

int H(int a) {
  return a / 2;
}

int main() {
  int n;
  scanf("%d", &n);

  char operations[100];
  scanf("%s", operations);

  int result = n;
  for (int i = 0; operations[i] != '\0'; i++) {
    switch (operations[i]) {
      case 'D':
        result = D(result);
        break;
      case 'A':
        result = A(result);
        break;
      case 'S':
        result = S(result);
        break;
      case 'H':
        result = H(result);
        break;
    }
  }

  // Print the final result
  printf("%d\n", result);

  return 0;
}
