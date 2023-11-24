// 2023-11-09
//

#include<stdio.h>

typedef enum {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun} Weekdays;
char *dayname[] = {"", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
  Weekdays day, Dday, deadline;
  for (day = Mon; day <= Sun; ++day)
    printf("day[%d] = %s\n", day, dayname[day]);
  
  return 0;
}
