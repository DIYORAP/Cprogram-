#include <conio.h>
#include <stdio.h>

void main()
{

    FILE *fp;
    char filename [20];
    int li=0,wo=0,ch=0;
    char c;
    clrscr();
    printf("\n enter file name");
    scanf("%s",filename);
    fp=fopen(filename,"r");

    while((c=getc (fp))!=EOF)
    {
        ch++;

        if(c=='\n')
        {
            li++;
        }

        if(c==' '¦¦c=='\t'¦¦c=='\n')
        {
            wo++;
        }
    }
    fclose(fp);
    printf("\n%d:words",wo);
    printf("\n%d:lines",li);
    printf("\n%d:char", ch);
    getch();
}