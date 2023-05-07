#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[20];
    printf("Enter a string: ");
    gets(str);
    reverse(str);
    printf("The reversed string: %s\n", str);
    return 0;
}
