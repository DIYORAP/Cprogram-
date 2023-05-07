#include <stdio.h>
#include <conio.h>
void strUpper(char *str);
void main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    strUpper(str);
    printf("Uppercase string: %s\n", str);
    getch();
}
void strUpper(char *str) {
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}
