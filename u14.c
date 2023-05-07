#include<stdio.h>
#include<conio.h>
#include<string.h>
struct date
{   int dd;
    int mm;
    char month[10];
};
struct date s[2];
    int i;
    
    void main()
    {
        clrscr();
        printf("ENTER NUMERIC VALUE.");
        for(i=1; i<=2; i++)
        {
            printf("%d.DATE:",i);
            scanf("%d",&s[i].dd);
            printf("%d.MONTH:",i);
            scanf("%d",&s[i].mm);
        }
        for(i=1; i<=2; i++)
        {
            if(s[i].mm==1)
            strcpy(s[i].month, "JANUARY");
            else if(s[i].mm==2) 
            strcpy(s[i].month, "FEBUARY");
            else if(s[i].mm==3)
            strcpy(s[i].month,"MARCH");
            else if(s[i].mm==4)
            strcpy(s[i].month,"APIRL");
            else if(s[i].mm==5)
            strcpy(s[i].month, "MAY");
            else if(s[i].mm==6) 
            strcpy(s[i].month,"JUNE");
            else if(s[i].mm==7) 
            strcpy(s[i].month, "JULY");
            else if(s[i].mm==8)
            strcpy(s[i].month,"AUGST");
            else if(s[i].mm==9) 
            strcpy(s[i].month,"SEPTMBER");
            else if(s[i].mm==10) 
            strcpy(s[i].month, "OCTMBER");
            else if(s[i].mm==11)
            strcpy(s[i].month, "NEVMBER");
            else if(s[i].mm==12)
            strcpy(s[i].month, "DESEMBER");
            else if(s[i].mm<=0 || s[i].mm>=13) 
            strcpy(s[i].month, "Invalid Enter Value.");
        }
        for(i=1;i<=2;i++)
        {
        printf("\n%d DATE:%d",i,s[i].dd);
        printf("\n%d MONTH:%s",i,s[i].month);
        }

        getch();
    }