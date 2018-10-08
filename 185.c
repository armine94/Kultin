#include <stdio.h>
float caval(int,int);
//cavali hashvum funkciayov
int main()
{
    int a,b;
    float u;
    printf("Nermucel sharavix@\t");
    scanf("%i",&a);
    printf("Nermucel barcrutyn@\t");
    scanf("%i",&b);
    u=caval(a,b);
    printf("u=%.4f\n",u);
    return 0;
}
float caval(int r,int h)
{
    float v;
    float pi=3.1416;
    v=pi*r*r*h;
    return v;
}