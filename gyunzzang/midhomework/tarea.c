// area of triangle

#include<stdio.h>
#include<string.h>
#include<math.h>

double heron(double a, double b, double c) {
  double s = (a+b+c)/2;
  double result = sqrt(s*(s-a)*(s-b)*(s-c));
  // printf("%f\n", result);
  return result;
}

double side(int x1, int y1, int x2, int y2) {
  // printf("(%d, %d) (%d, %d)\n", x1, y1, x2, y2);
  double result = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  return result;
}

int main() {
  char first[41], second[41], third[41];
  scanf("%40s\n%40s\n%40s", first, second, third);
  
  int vo1=0, co1=0, vo2=0, co2=0, vo3=0, co3=0;

  for (int i=0; i<strlen(first); i++) {
  char c = first[i];
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    vo1++;
  else
    co1++;
  }

  for (int j=0; j<strlen(second); j++) {
  char c = second[j];
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    vo2++;
  else
    co2++;
  }
  
  for (int k=0; k<strlen(third); k++) {
  char c = third[k];
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    vo3++;
  else
    co3++;
  }
  
  // printf("vo1 is %d, co1 is %d\nvo2 is %d, co2 is %d\nvo3 is %d, co3 is %d\n", vo1, co1, vo2, co2, vo3, co3);

  double side1 = side(vo1, co1, vo2, co2);
  double side2 = side(vo2, co2, vo3, co3);
  double side3 = side(vo3, co3, vo1, co1);

  // printf("side1 is %f, side2 is %f, side3 is %f\n", side1, side2, side3);

  double fin_result = round(heron(side1, side2, side3)*1000)/1000.0;
  printf("%.3f\n", fin_result);

  return 0;
}
