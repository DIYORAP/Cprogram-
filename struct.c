#include<stdio.h>

struct per
   {
       char nm[20];
       int dy;
       char mn[10];
       int ye;
    float sal;
    };
    void main()
    {
     struct per p1,p2;
     printf("\ninput value");
     scanf("%s %d %s %d %f",p1.nm,&p1.dy,p1.mn,&p1.ye,&p1.sal);
    printf("name=%s\n day=%d \n month=%s \n year=%d\n salley=%f",p1.nm,p1.dy,p1.mn,p1.ye,p1.sal);
    p2=p1;
    printf("%s %d %s %d %f",p2.nm,p2.dy,p2.mn,p2.ye,p2.sal);
    }
    