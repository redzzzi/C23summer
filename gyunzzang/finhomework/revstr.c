#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char *s;
    int len;
} String;

String revstr(const char* word) {
    String result;
    result.len = strlen(word);
    result.s = (char *)malloc((result.len + 1) * sizeof(char));

    for (int i = 0; i < result.len; i++) {
        result.s[i] = word[result.len - i - 2];
    }
    result.s[result.len - 1] = '\0';  

    return result;
}

int main() {
    char str[256];
    while (fgets(str, sizeof(str), stdin) != NULL) {
        if (str[0] == '\n') {
            break;
        }
        // printf("str is %s", str);  
        String reverse = revstr(str);
        printf("%s \n", reverse.s);
        free(reverse.s);
    }
    return 0;
}

