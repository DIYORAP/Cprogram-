#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
 int no1,no2;
 clrscr();
 printf("enter number 1 and number 2");
 scanf("%d %d",&no1,&no2);
 printf("\nbefore swaping number no1=%d\n no2=%d",no1,no2);

 swap(&no1,&no2);
printf("\nafter swaping number no1=%d\n no2=%d",no1,no2);
getch();
}
void swap(int*a, int*b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
}