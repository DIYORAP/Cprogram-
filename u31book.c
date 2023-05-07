#include<stdio.h>
#include<conio.h>
struct sll
{
  int info;
  struct sll *link;
};
struct sll *first=NULL;
  typedef struct sll node;
  void create(int);
   void display ();
   void insf(int);
   void deletef();
   void deletel();
   void insertdfk(int);
   void insertafk(int);

  void main ()
  {
   struct sll *first=NULL;
  int i,ch,n,m,key;
   do
    {
     printf("\nenter choice");
     scanf("%d",&ch);
      printf("\n1 create list");
      printf("\n2 insert element");
      printf("\n3 delete first");
      printf("\n4 delete lest");
      printf("\n5 ins before key value");
      printf("\n6 ins after key value");
      printf("\n7 display");
      printf("\n exit");
      switch(ch)
    
    {
       case 1:
      printf("\nhow many node add");
      scanf("%d",&n);
      for(i=0;i<n;i++)
       {
         printf("\nenter number");
         scanf("%d",&m);
         create(m);
        }
        break;
        case 2:
         printf("\n enter element");
         scanf("%d",&m);
         insf(m);
         break;
        case 3:
        deletef();
        break;
        case 4:
        deletel();
        break;
        case 5:
        display();
        printf("enter key value");
        scanf("%d",&key);
         insertdfk(key);
        break;
        case 6:
        display();
        printf("enter key value");
        scanf("%d",&key);
         insertafk(key);
         break;
        case 7:
         display();
         break;
        case 8:
         exit(0);
        break;
        }
     } while(ch<=8);
    getch();
    }
    
 void create(int data)
{  
   node *temp,*p;
   temp=(node*)malloc(sizeof(node));
   temp->info=data;
   temp->link=NULL;
      
        if(first==NULL)
         {
           first=temp;
         }
         else
           {
            p=first;
            while(p->link!=NULL)
            p=p->link;
            p->link=temp;
            }
  }
    
    
    
    
    
    
    
    
     
       
