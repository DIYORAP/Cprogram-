#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], c;

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(toupper(c));
    }

    fclose(fp);

    return 0;
}
