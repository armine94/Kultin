#include <stdio.h>

int main()
{int r1;
int r2;
int h;
float v;
float p=3.14;
scanf("%i",&r1);
scanf("%i",&r2);
scanf("%i",&h);
v=p*h*(r1*r1-r2*r2);
    printf("v= %f \n",v);
    return 0;
}