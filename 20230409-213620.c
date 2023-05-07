#include <stdio.h>
#include <conio.h>
int i;
struct s
{
    char name[50];
    int pop;
    int li;
    int pri;
};
struct s d[5];
void main()
{   int r=0,f=0;
    for(i=0; i<2; i++)
    {
        printf("enter name%d",i+1);
        scanf("%s",d[i].name);
        printf("population");
        scanf("%d",&d[i].pop);
        printf("literachi rate");
        scanf("%d",&d[i].li);
        printf("per cepita income");
        scanf("%d",&d[i].pri);
}

        for(i=1; i<=2; i++)
        {   if(d[i].li>d[r].li)
            {
                r=i;
            }
        }
    
    printf("max litreche rate =%d",d[r].li);
    for(i=1; i<=2; i++)
        {   if(d[i].pop>d[r].pop)
            {
                f=i;
            }
        }
    
    printf("max litreche rate =%d",d[f].pop);
}