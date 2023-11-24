#include <stdio.h>

enum Orientation {east, north, west, south};

int main() {
  int x = 0, y = 0;
  enum Orientation orientation = east;

  char instruction;
  int distance;

  while (scanf("%c", &instruction) == 1) {
    if (instruction == 'F' || instruction == 'B') {
      scanf("%d", &distance);
      switch (orientation) {
        case east:
          if (instruction == 'F') x += distance;
          else x -= distance;
          break;
        case north:
          if (instruction == 'F') y += distance;
          else y -= distance;
          break;
        case west:
          if (instruction == 'F') x -= distance;
          else x += distance;
          break;
        case south:
          if (instruction == 'F') y -= distance;
          else y += distance;
          break;
      }
    } else if (instruction == 'L') {
      orientation = (orientation + 1) % 4;
    } else if (instruction == 'R') {
      orientation = (orientation + 3) % 4;
    }
    while (getchar() != '\n');
  }

  printf("%d %d\n", x, y);

  switch (orientation) {
    case east:
      printf("E\n");
      break;
    case north:
      printf("N\n");
      break;
    case west:
      printf("W\n");
      break;
    case south:
      printf("S\n");
      break;
  }
  return 0;
}

