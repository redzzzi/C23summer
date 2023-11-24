// 2023-11-09
//

#include<stdio.h>

enum Weekdays {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun} day;

int main() {
  enum Weekdays Dday, deadline;
  day = Mon;
  Dday = day;
  printf("Dday: %d\n", Dday);

  return 0;
}
