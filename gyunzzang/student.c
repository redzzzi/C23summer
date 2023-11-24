#include<stdio.h>

struct student {
  int id;
  char name[20];
  char major[20];
} st;

void printinfo(struct student st); // prototype

int main() {
  struct student st;
  
  printf("Name: "); scanf("%s", st.name);
  printf("ID: "); scanf("%d", &st.id);
  printf("Major: "); scanf("%s", st.major);
  printinfo(st);

  return 0;
}

void printinfo(struct student st) {
  printf("Student information for %s:\n", st.name);
  printf("\tID:     %d\n", st.id);
  printf("\tMajor:  %s\n", st.major);
}
