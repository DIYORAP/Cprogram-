#include<stdio.h>
#include<stdlib.h>
struct sll
{
    int info;
    struct sll *link;
}*first=NULL;
typedef struct sll  node;
void create(int);
void display();
void insf(int);

void main()
{ int p;
    int n,m,i;
    printf("enter numbers");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the element");
        scanf("%d",&m);
        create(m);
    }
    display();
    insf(5);
}
void create(int data)

{ 
    node *tem,*p;
    tem=(node*)malloc(sizeof(node));
    tem->info=data;
    tem->link=NULL;
    if(first==NULL)
    {
        first =tem;
    }
    else
    {
        p=first;
        while(p->link!=NULL)
            p=p->link;
        p->link =tem;


    }
    
}
void display()
{
    node *q;
    q=first;
    while(q!=NULL)
    {   printf("%d->",q->info);
        q=q->link;
    }
    printf("\n");
}
void insf(int data)
{
    node *tem;
    tem=(node*) malloc(sizeof(node));
    tem->info=data;
    tem->link=NULL;
    if(first==NULL)
    {
        first= tem ;
    }
    else
    {
     tem->link=first;
    first=tem;
    }
}