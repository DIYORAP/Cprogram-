#include<stdio.h>
#include<conio.h>
#include<string.h>
struct product {
 char name[20];
 int proco;
 int price;
};
 void main()
{
   struct product p,*ptr;
   ptr=&p;
   clrscr();
   printf("enter product name ");
   gets(ptr->name);
   printf("enter product code ");
   scanf("%d",&ptr->proco);
   printf("enter price ");
  scanf("%d",&ptr->price);
   ptr->price+=(ptr->price*10/100);
   printf("\n product code:%d",ptr->proco);
   printf("\n product name:%s",ptr->name);
   printf("\n product price%d",ptr->price);

}