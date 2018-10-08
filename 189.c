#include <stdio.h>
int ast(int ,int );
int main()
{
   int c,m;
   float k;
   printf("nermucel tiv@  ");
   scanf("%i",&c);
   printf("nermucel tiv@  ");
   scanf("%i",&m);
        k=ast(c,m);
    printf("k= %f \n",k);
    return 0;
}
int ast(int a,int b)
{
    int i,p=1;
    for(i=1;i<=b;i++)
    p=p*a;
return p;
}
