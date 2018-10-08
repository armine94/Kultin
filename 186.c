#include <stdio.h>
float maximum(float,float);

int main()
{
    float c,d,u;
    printf("Nermucel tiv@\t");
    scanf("%f",&c);
    printf("Nermucel tiv@\t");
    scanf("%f",&d);
    u=maximum(c,d);
    printf("max=%.4f\n",u);
    return 0;
}
float maximum(float a,float b)
{
    float max;
    if(a>=b)
    max=a;
    else 
    max=b;
    return max;
}