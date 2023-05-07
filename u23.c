#include<stdio.h>
#include<conio.h>
int strlen(char*);
void main()
{
    char str[20];
    int len=0;
    clrscr();
    printf("\n enter string");
    gets(str);
    len=strlen(str);
    printf("string length=%d",len);
    getch();

}
int strlen(char*p)
{
    int sum=0;
            while(*p !='\0')
    {
        sum++;
        p++;
    }
    return sum;
}