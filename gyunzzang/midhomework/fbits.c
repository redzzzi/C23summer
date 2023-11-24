#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main () {
  int n = 0;
  double x = 0.0;
  
  fscanf(stdin, "%d%lf", &n, &x);
  char result[100] = "";

  int add;
  for (int i=1; i<=n; i++) {
    x *= 2;
    add = (int)x;
    char addnum[100];
    snprintf(addnum, sizeof(addnum), "%d", add);
    strcat(result, addnum);
    printf("%d\n", add);
    printf("%s\n", result);
    x -= add;
    if (x==0.0) {
      break;
    }
  }
  result[strlen(result)] = '\0';
  char final[100+strlen(result)+3];
  snprintf(final, sizeof(final), "0.%s", result);
  
  double answer = atof(final);

  printf("%lf\n", answer);

  return 0;
}

