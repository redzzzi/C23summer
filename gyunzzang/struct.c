#include<stdio.h>

int main() {
  struct student {
    char name[20];
    int stud_id;
    char year;
    char major[20];
  } s;

  printf("size of the struct student: %d\n", sizeof(struct student));
  printf("size of the variable s:     %d\n", sizeof(s));

  return 0;
}
