#include <stdio.h>
void mak(int a,int b,int c )
{ float s,v;
v=a*b*c;
s=2*(a*b+b*c+a*c);
    printf("s=%.0f ",s);
    printf("v=%.0f ",v);
    printf("\n");
}
int main()
{
int k,l,m;
printf("nermucel erkarutyun@\n");
scanf("%i",&k);
printf("nermucel barcrutyun@\n");
scanf("%i",&l);
printf("nermucel laynutyun@\n");
scanf("%i",&m);
    mak(k,l,m);
    return 0;
}