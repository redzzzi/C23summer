# include <stdio.h>

char last_char(char s[]);

int main()
{
    char s1[] = "HELLO";
    char s2[] = "WORLD";
    printf("Last('%s') = %c\n", s1, last_char(s1));
    printf("Last('%s') = %c\n", s2, last_char(s2));
    return 0;
}

char last_char(char word[])
{
    int i=0;
    char c=word[i];
    while (word[i] != '\0') {
        c=word[i];
        i++;
    }
    return c;
}

char last_char2(char word[]) {
    if (word[0] == '\0' || word[1] == '\0')
        return word[0];
    return last_char(&word[1]);  // strlen(word) >1

     // return last_char(word+1);  // last_cahr(&word[1]);
}
