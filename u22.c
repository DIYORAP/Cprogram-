#include<stdio.h>
#include<conio.h>
void cals(int*,int*);
void main()
{
    int a=25,b=5;
    clrscr();
    cals(&a,&b);
    getch();
    
}
void cals(int *x,int *y)
{
 int sum,sub,mul,div;
 sum=*x+*y;
 sub=*x-*y;
 mul=*x * *y;
 div=*x / *y;
 printf("\naddition=%d\n subtraction=%d\n multiplication=%d\n division=%d\n",sum,sub,mul,div);
}