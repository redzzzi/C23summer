// Assignment 6: Adding Vectors

#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

int main() {
  double v1 = 1.0, v2 = sqrt(3.0);
  double t = v2/v1;
  double ra = atan(t);
  double degree = ra/pi*180.0;

  printf("The angle in radian: %.2f\n", ra);
  printf("The angle in degree: %.2f\n", degree);

  return 0;
}
