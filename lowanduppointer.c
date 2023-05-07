#include<stdio.h>

int main()
{
    char str[30],*p1;
    int up=0,lo=0;
    printf("enter string");
    gets(str);
    p1=str;
    while(*p1!='\0')
    {
        if(*p1>='A'&&*p1<='Z')
        {
            up++;
            
        }
        else if(*p1>='a'&&*p1<='z')
        {
            lo++;
        }
        p1++;
        
     }
        printf("%d lower case charector\n\n",up);
        printf("%d uppercase charector",lo);


    }