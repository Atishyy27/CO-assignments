#include <stdio.h>
#include <ctype.h>

int countWords(const char *fileName) {
    FILE *fp = fopen(fileName, "r");
    char ch;
    int count = 0;
    int inWord = 0;

    if (fp == NULL) {
        printf("Error opening file.\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }

    fclose(fp);
    return count;
}

int main() {
    int wordCount = countWords("textfile.txt");
    if (wordCount != -1) {
        printf("Number of words: %d\n", wordCount);
    }
    return 0;
}
