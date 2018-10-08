#include <stdio.h>
float procent(float );
int main()
{

   float c, k;
   printf("nermucel tiv@  ");
   scanf("%f",&c);
        k=procent(c);
    printf("k= %.2f \n",k);
    return 0;
}
float procent(float a)
{
    float r;
    r=a/100;
return r;
}
