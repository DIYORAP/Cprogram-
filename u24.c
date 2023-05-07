#include <stdio.h>
#include <string.h>

void upper(char* str) 
{
       while (*str) 
       {
        if (*str >= 'a' && *str <= 'z')
         {
            *str -= 'a' - 'A';
        }
        str++;
    }
}

int main() {
    char str[20];
    printf("Enter a string: ");
    gets(str);
    upper(str);
    printf("The string in uppercase: %s\n", str);
    return 0;
}
