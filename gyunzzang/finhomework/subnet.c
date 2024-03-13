// 2023-12-14
// Programming Lab 13: subnet.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bits(unsigned int n) {
  int cnt = 0;
  while (n > 0) {
    cnt += n & 1;
    n >>=1;
  }
  return cnt;
}

int bitcmp(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int b1, unsigned int b2, unsigned int b3, unsigned int b4) {
  int cnt1 = 0;
  if (a1 > b1) {
    cnt1 = bits(b1);
  } cnt1 = bits(a1);

  int cnt2 = 0;
  if (a2 > b2) {
    cnt2 = bits(b2);
  } cnt2 = bits(a2);

  int cnt3 = 0;
  if (a3 > b3) {
    cnt3 = bits(b3);
  } cnt3 = bits(a3);

  int cnt4 = 0;
  if (a4 > b4) {
    cnt4 = bits(b4);
  } cnt4 = bits(a4);

  return cnt1 + cnt2 + cnt3 + cnt4;
}

struct {
  unsigned int ia: 4, ib: 4, ic: 4, id: 4;
  unsigned int sa: 4, sb: 4, sc: 4, sd: 4;
} IP;

int main() {
    char ip[16];
    fgets(ip, 16, stdin);

    printf("%s\n", ip);

    char *ptr_ip = strtok(ip, ".");
    int count = 0;

    while (ptr_ip != NULL && count < 4) {
      printf("%s\n", ptr_ip);
      switch (count) {
      case 0:
        IP.ia = atoi(ptr_ip);
        break;
      case 1:
        IP.ib = atoi(ptr_ip);
        break;
      case 2:
        IP.ic = atoi(ptr_ip);
        break;
      case 3:
        IP.id = atoi(ptr_ip);
        break;
      }
      ptr_ip = strtok(NULL, ".");
      count++;
    }

    char sub[16];
    fgets(sub, 16, stdin);

    char *ptr_sub = strtok(sub, ".");
    int count2 = 0;
    while (ptr_sub != NULL && count < 4) {
      printf("%s\n", ptr_sub);
      switch (count2) {
        case 0:
          IP.sa = atoi(ptr_sub);
          break;
        case 1:
          IP.sb = atoi(ptr_sub);
          break;
        case 2:
          IP.sc = atoi(ptr_sub);
          break;
        case 4:
          IP.sd = atoi(ptr_sub);
          break;
        }
        ptr_sub = strtok(NULL, ".");
        count2++;
    }

  int result = bitcmp(IP.ia, IP.ib, IP.ic, IP.id, IP.sa, IP.sb, IP.sc, IP.sd);
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", IP.ia, IP.ib, IP.ic, IP.id, IP.sa, IP.sb, IP.sc, IP.sd);

  printf("%d\n", result);

  return 0;
}
