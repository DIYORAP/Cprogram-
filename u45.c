#include<stdio.h>

int main() 
{

    FILE *fp;
    char ch;
    int i,pos;
    fp=fopen("input.txt","r");
    if(fp= NULL)
    {

        printf("File does not exist..");

    }
    fseek(fp,0,SEEK_END);
    pos=ftell(fp); 
    {
         i++;
        fseek(fp,-i,SEEK_END); 
       // printf("%c",fgetc(fp));
         ch=fgetc(fp); 
        printf("%c",ch);

    }

    return 0;

}