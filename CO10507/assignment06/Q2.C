#include <stdio.h>
#include <string.h>

void searchInFile(const char *fileName, const char *searchStr) {
    FILE *fp = fopen(fileName, "r");
    char line[256];
    int lineNumber = 1;

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, searchStr)) {
            printf("Line %d: %s", lineNumber, line);
        }
        lineNumber++;
    }

    fclose(fp);
}

int main() {
    searchInFile("textfile.txt", "searchString");
    return 0;
}
