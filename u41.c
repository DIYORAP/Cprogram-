#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[50], ch;
    FILE *fp;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(toupper(ch));
    }

    fclose(fp);

    return 0;
}
