#include <stdio.h>
float R(int ,int ,int);
int main()
{
   int c,m,n;
   float k;
   printf("nermucel R1  ");
   scanf("%i",&c);
   printf("nermucel R2 ");
   scanf("%i",&m);
   printf("nermucel tip@  ");
   scanf("%i",&n);
        k=R(c,m,n);
    printf("k= %f \n",k);
    return 0;
}
float R(int a,int b,int c)
{
    float r;
    if(c==1)
    r=a+b;
    else
    if(c==2)
    r=a*b/(a+b);
    else
    r=-1;
return r;
}
