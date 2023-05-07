#include <stdio.h>
#include <conio.h>

int compare(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(char*)s1 - *(char*)s2;
}

void main() {
    char s1[20], s2[20];
    clrscr();
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    if (compare(s1, s2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    getch();
}
