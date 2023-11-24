#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    char output[100];
    char *word1, *word2;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        perror("Failed to read input");
        return 1;
    }

    line[strcspn(line, "\n")] = '\0';

    word1 = strtok(line, " ");
    word2 = strtok(NULL, " ");

    if (word1 != NULL && word2 != NULL) {
        int len1 = strlen(word1);
        int len2 = strlen(word2);

        if (len1 >= len2) {
            int outputIndex = 0;
            for (int i = 0; i < len2; i++) {
                output[outputIndex++] = word1[i];
                output[outputIndex++] = word2[i];
            }
            for (int i = len2; i < len1; i++) {
                output[outputIndex++] = word1[i];
            }
            output[outputIndex] = '\0';
        } else {
            strcpy(output, "-");
        }

        printf("%s\n", output);
    } else {
        printf("Invalid input format. Expected two words separated by a space.\n");
    }

    return 0;
}

