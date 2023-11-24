#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
  // const int MAX_LEN = 40;
  // char line[MAX_LEN];
  char first[41], second[41];
  scanf("%40s\n%40s", first, second);
  int vo1=0, co1=0, vo2=0, co2=0;

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
  // printf("vo1 is %d, co1 is %d\nvo2 is %d, co2 is %d\n", vo1, co1, vo2, co2);
  double sqsum = (vo1-vo2)*(vo1-vo2)+(co1-co2)*(co1-co2);
  printf("%.3f\n", round(sqrt(sqsum)*1000)/1000);

  return 0;
}
