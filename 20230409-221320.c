#include<stdio.h>
struct employee {
    char name[50];
    float bp;
    float da;
    float hr;
    float ns;
};
struct employee emp[5];
void nets()
{   for(int i=0; i<5; i++)
    {   emp[i].da +=(emp[i].bp*0.10);
            emp[i].hr+=(emp[i].bp*0.20);
              emp[i].ns=emp[i].bp+emp[i].da+emp[i].hr;
    }
}
  /*  void emps()
{   struct employee temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (emp[i].ns< emp[j].ns) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}*/
void empd()
{   printf("Employee details in descending order of net salary:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Basic pay: %.2f\n", emp[i].bp);
        printf("Dearness allowance: %.2f\n", emp[i].da);
        printf("House rent: %.2f\n", emp[i].hr);
        printf("Net salary: %.2f\n", emp[i].ns);
    }
}
void main()
{
    for (int i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter basic pay of employee %d: ", i+1);
        scanf("%f", &emp[i].bp);
    }
    nets();
    //emps();
    empd();

}