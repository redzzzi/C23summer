// 2023-12-05
//

#include <stdio.h>

enum day {Wed, Thu, Fri, Sat, Sun, DAY_MAX};
char *dayname[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

enum day next_day(enum day d) {
  return (enum day)(((int)d+1)%DAY_MAX);
}

#define PRDAY(d1) printf("day[%d] = %s\n", d1, dayname[d1])

int main() {
  enum day d1, d2;
  // auto enum day d1, d2;
  // static enum day d1, d2;

  d1 = Fri;
  d2 = next_day(d1);
  PRDAY(d1);
  PRDAY(d2);
  d2 = next_day(d2);
  PRDAY(d2);
  d2 = next_day(d2);
  PRDAY(d2);

  return 0;
}
