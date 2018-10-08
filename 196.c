#include <stdio.h>
int fan(int a,int b,int c )
{ float x1,x2,d ;
int i;
if(a==0)
{
   return -1;
}
d=b*b-4*a*c;
if(d<0)
return 0;
else
{
x1=(-b+sqrt(d))/2*a;
 x2=(-b-sqrt(d))/2*a;
 }
 if(x1==x2)
    return 1;
    else
        return 2;
}
int main()
{
int i,a,b,c;

scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
    printf("%i\n",fan(a,b,c));
    return 0;
}
