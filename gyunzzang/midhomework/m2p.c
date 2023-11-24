#include <stdio.h>
#include <math.h>

int main() {
  int N;
  if (fscanf(stdin, "%d", &N) != 1) {
    printf("Error reading N.\n");
    return 1;
  }
  // printf("N is %d\n", N);

  double Npyeong = N * 3.3058;
  // printf("Npyeong is %.2f\n", Npyeong);

  double cmp;
  double bigger = 0.0;
  
  while (fscanf(stdin, "%lf", &cmp) == 1) {
    // printf("%lf\n", cmp);
    if (cmp >= bigger && Npyeong >= cmp) {
      bigger = cmp;
      // printf("bigger is %.2f\n", bigger);
    }
    if (getchar() == '\n') {
      break;
    }
  }
  if (bigger == 0.0) {
    // printf("here is IF\n");
    fprintf(stdout, "%.2f\n%.2f\n", 0.00, 0.00);
  } else {
    // printf("here is ELSE\n");
    fprintf(stdout, "%.2f\n%.2f\n", round((bigger / 3.3058) * 1000) / 1000.0, round(bigger * 1000) / 1000.0);
  }
  return 0;
}

