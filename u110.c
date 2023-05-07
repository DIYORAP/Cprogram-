#include<stdio.h>
#include<conio.h>
struct state
{
    char *name;
    int dist;
    long pop;

};
struct population

{

    long men;
    long women;
    struct state s1;

};
void main() {

    struct population p;
    clrscr();
    printf("State: ");
    scanf("%s",p.s1.name);
    printf(" Districts: ");
    scanf("%d",&p.s1.dist);
    printf ("Men: ");
    scanf("%ld",&p.men);
    printf(" Women : ");
    scanf("%ld",&p.women);
    p.s1.pop-p.men+p.women;
    printf("\n\nState: %s ",p.s1.name);
    printf("\nDistricts: %d",p.s1.dist);
    printf("\nMen: %ld",p.men);
    printf("\nWomen: %ld",p.women);
    printf("\nPopulation :%ld",p.s1.pop);
    }