#include <stdio.h>
#include <string.h>

enum Direction {east, north, west, south};

int main() {
  char instruction[3];
  int distance;
  int x = 0, y = 0;
  enum Direction orientation = east;

  while (scanf("%s", instruction) != EOF) {
    if (instruction[0] == 'F' || instruction[0] == 'B') {
      scanf("%d", &distance);
    }

    switch (orientation) {
      case east:
        if (instruction[0] == 'F') {
          x += distance;
        } else if (instruction[0] == 'B') {
          x -= distance;
        } else if (instruction[0] == 'L') {
          orientation = north;
        } else if (instruction[0] == 'R') {
          orientation = south;
        } break;
      case north:
        if (instruction[0] == 'F') {
          y += distance;
        } else if (instruction[0] == 'B') {
          y -= distance;
        } else if (instruction[0] == 'L') {
          orientation = west;
        } else if (instruction[0] == 'R') {
          orientation = east;
        } break;
      case west:
        if (instruction[0] == 'F') {
          x -= distance;
        } else if (instruction[0] == 'B') {
          x += distance;
        } else if (instruction[0] == 'L') {
          orientation = south;
        } else if (instruction[0] == 'R') {
          orientation = north;
        } break;
      case south:
        if (instruction[0] == 'F') {
          y -= distance;
        } else if (instruction[0] == 'B') {
          y += distance;
        } else if (instruction[0] == 'L') {
          orientation = east;
        } else if (instruction[0] == 'R') {
          orientation = west;
        } break;
    }
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

