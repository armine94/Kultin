#include <stdio.h>
float fakt(float );
int main()
{

   float c, k;
   printf("nermucel tiv@  ");
   scanf("%f",&c);
        k=fakt(c);
    printf("k= %.2f \n",k);
    return 0;
}
float fakt(float a)
{
    int i,p=1;
    for(i=1;i<=a;i++)
    p=p*i;
return p;
}
