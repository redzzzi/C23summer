// 2023-12-07
//
#include <stdio.h>
#include <stdlib.h>

// typedef struct Input {
//   enum {INT, CHAR} tag;
//   union {
//     int number;
//     char alpha;
//   };
// } Input;

void square(int letter);

int main() {
  int case_count = 0;
  char order[case_count];
  scanf("%d", &case_count);
  for (int i=0; i<case_count; i++) {
    int digit = 0;
    char letter;
    scanf("%d", &digit);
    if (digit == 0) {
      scanf("%s", letter);
    }
    order[i] = square(*digit);
  }
  for (int j=0; j<case_count; j++) {
    print(order[case_count-j], case_count);
  }
}

void square(int letter) {
  if (letter = 0)) {
    int ascii() = atoi(letter);
    return ascii * ascii;
  } else {
    return letter * 2; 
  } 
}
