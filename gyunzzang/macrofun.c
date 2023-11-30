// 2023-11-30
// Long Macro

#include<stdio.h>

#define TEN_TIMES(MSG)  MSG " " MSG " " MSG " " \
                        MSG " " MSG " " MSG " " \
                        MSG " " MSG " " MSG " " MSG

int main() {
  puts(TEN_TIMES("La"));
  return 0;
}

