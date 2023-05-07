#include<stdio.h>
#include<conio.h>

void main()
{
    int no1,no2,*ptr1=&no1,*ptr2=&no2;
    clrscr();
    printf("\nenter number 1 ");
    scanf("%d",ptr1);
    printf("\nenter number 2 ");
    scanf("%d",ptr2);
    if(*ptr1>*ptr2)
    {
     printf("\n%dgreater",*ptr1);
    }
    else
     {
     printf("\n%dgreater",*ptr2);
     }
    getch();
    
}