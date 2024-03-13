// 2023-12-14
#include <stdio.h>

int main() {
  struct {
    unsigned int e: 4, c: 4, a: 4, f: 4;
  } face = {14, 12, 10, 15};

  printf("%X%X%X%X\n", face.f, face.a, face.c, face.e);
  printf("sizeof('face') = %d\n", sizeof(face));

  return 0;
}
