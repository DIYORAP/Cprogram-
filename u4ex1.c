#include <stdio.h>
#include<conio.h>
#include <ctype.h>

int main() {
    char filename[100];
    char c;

    printf("Enter the file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(toupper(c));
    }

    fclose(fp);
    getch();
}
