#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
  char   str[41] = "Hello world!";
  size_t len = strlen(str);
  int    x = 0, y = 0;

  for (int i=0; i<len; ++i) {
    char c = str[i];
    // printf("%c\n", c);
    if ('a'<c && c<'z' || 'A'<c && c<'Z')
      x++;
    else
      y++;
  }
  double sqsum = x * x + y * y;
  printf("d(\"%s\") = %f\n", str, sqrt(sqsum));
  
  return 0;
}
