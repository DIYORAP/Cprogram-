#include <stdio.h>
#include <conio.h>

struct state
{
    char name[10];
    long pop;
    int dist;
};
void main()
{
    clrscr();
    struct state s;
    printf("\n Enter state name, number of dist. and population: ");
    scanf("%s %d %d",s.name,&s.dist,&s.pop);
    printf("\n State: %s",s.name);
    printf("\n District: %d",s.dist);
    printf("\n Population: %d",s.pop);
    getch();
}