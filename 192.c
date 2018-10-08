#include <stdio.h>
float dohod(float,float,float );
int main()
{

   float c,m,n, k;
   printf("nermucel gumar@ ");
   scanf("%f",&c);
   printf("nermucel tokosi chap@ ");
   scanf("%f",&n);
   printf("nermucel oreri qanak@");
   scanf("%f",&m);
        k=dohod(c,n,m);
    printf("k= %.2f \n",k);
    return 0;
}
float dohod(float a,float b,float c)
{
    float p=1;
    p=a*b*c/365/100;
return p;
}
