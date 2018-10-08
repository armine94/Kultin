#include <stdio.h>

int main()
{
float y;
float x;
printf( "  x  y    \n");
for(x=-2;x<=2;x+=0.5)
{
    y=-2.4*x*x+5*x-3;
    printf("%.0f\t",x);
printf("%.2f\n",y);
}
    return 0;
}