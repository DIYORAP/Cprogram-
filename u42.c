#include<stdio.h>
#include<conio.h>

void main()
{

    FILE *fp;
    char ch;
    int size=0;
    clrscr();
    fp=fopen("parthik.txt","w");
    fprintf(fp,"hello parthik");

    if(fp==NULL)
        printf("\n error ");

    else
        printf("\n Flle opend");
    fseek(fp, 0, SEEK_END);
    size=ftell(fp);
    printf("The size of given file is=%d", size);
    fclose(fp);
    getch();
    }