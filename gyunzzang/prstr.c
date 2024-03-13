#include<stdio.h>
#include<string.h>

int main() {

  char lyrics[] = "I am just a poor boy ~!\n";

  for (int i=0; i<strlen(lyrics); ++i)
    putchar(lyrics[i]);

  return 0;
}

// using character pointer instead
// pointer variable을 통해 위의 코드와 똑같이 동작하도록 하기
// int main() {

//   char lyrics[] = "I am just a poor boy ~!\n", *p = lyrics;

//   for (int i=0; i<strlen(lyrics); ++i)
//     // putchar(*(p+i));
//     putchar(i[p]);

//   return 0;
// }
// int main() {

//   char lyrics[] = "I am just a poor boy ~!\n", *p = lyrics;
//   
//   while (*p)
//     putchar(*p++);

//   return 0;

// }

