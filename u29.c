#include<stdio.h>
#include<conio.h>

 void fact(int,int*);
 void main ()
  {
    int fat,num;
     clrscr();
    printf("enter number ");
    scanf("%d",&num);
    fact(num,&fat);
    printf("factorial: %d",fat);
    }
    void fact(int n, int *f)
    {
     int i;
     *f=1;
    for(i=1;i<=n;i++)
    {
     *f=*f*i;
     }
    }