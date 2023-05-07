#include <stdio.h>
#include <conio.h>
void strCopy(char *str1, char *str2);
void main()
{
    char str1[30], str2[30];
    printf("Enter a string: ");
    scanf("%s", str1);
    strCopy(str2, str1);
    printf("Copied string: %s\n", str2);
    getch();
}

void strCopy(char *str1, char *str2) {
    int i = 0;
    str1[i] = '\0';
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    
}
