#include<stdio.h>
#include<conio.h>

struct time {
    int hh;
    int mm;
    int ss;
};
void main()
{
struct time t1,t2,t3;
    clrscr();
printf("Enter First time");
printf("\n Enter hours:");
scanf("%d",&t1.hh);
printf("\n Enter Minites:");
scanf("%d",&t1.mm);
printf("\n Enter Second:");
scanf("%d",&t1.ss);
printf("Enter Second time");
printf("\n Enter hours:");
scanf("%d",&t2.hh);
printf("\n Enter Minites:");
scanf("%d",&t2.mm);
printf("\n Enter Second:");
scanf("%d",&t2.ss);
differance(t1,t2);
getch();
}
differance(struct time t1,struct time t2)
{
printf("\n Differance: %d hours %d Minutes %d Second %d ",t1.hh-t2.hh,t1.mm-t2.mm,t1.ss-t2.ss);

return(0);
}