#include <stdio.h>

void mergeFiles(const char *file1, const char *file2, const char *file3) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fp3 = fopen(file3, "w");
    char ch;

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Error opening files.\n");
        return;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    printf("Files merged successfully.\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}

int main() {
    mergeFiles("file1.txt", "file2.txt", "file3.txt");
    return 0;
}
