#include <stdio.h>
//zangvacneri poxanakum
#define n 5
#define m 4
int main()
{int a1[n],a2[m];
int c,i,p;
for(i=0;i<n;i++)
    {
    printf("a1[%i]= ",i);
    scanf("%i",&a1[i]);
    printf("\n");
    }
    for(i=0;i<m;i++)
    {
    printf("a2[%i]= ",i);
    printf("\n");
    }
    if(n>=m)
    p=n;
    else
    p=m;
for(i=0;i<p;i++)
{
c=a1[i];
a1[i]=a2[i];
a2[i]=c;
   printf("a1[%i]=   %i\n",i,a1[i]);
    printf("a2[%i]=   %i\n",i,a2[i]);
}

    return 0;
}
