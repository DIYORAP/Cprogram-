#include<stdio.h>
#include<conio.h>

struct student
{
    char name[20];
    char surname[20];
    char city[20];
    long  phone;
};
void main()
{
    struct student s1;
    clrscr ();
    FILE *fp;
    char ch='y';
  fp=  fopen("dict1.txt","w");
   if(fp==NULL)
      {
        printf("cannot open file");
        exit(1);
        }
        while(ch=='y')
        {
         printf("enter name,surname,city, phone ");
         scanf(" %s %s %s %ld",s1.name,s1.surname,s1.city,&s1.phone);
         fprintf(fp,"%s\t %s\t %s\t %ld\n",s1.name,s1.surname,s1.city,s1.phone);
         printf("enter new student info Y&N");
         ch=getche();
        }
        getch();
}
