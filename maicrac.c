#include <stdio.h>
#define n 5
#define m 3
int main()
//2 masivic 1 masiv enq stanum,kpcnelov irar
{
    int i,j=0,a1[n],a2[m],a[n+m];
    for(i=0;i<n;i++)
    {
    printf("a1[%i]= ",i);
    scanf("%i",&a1[i]);
    printf("\n");
    }
     for(i=0;i<m;i++)
     {
    printf("a2[%i]= ",i);
    scanf("%i",&a2[i]);
    printf("\n");
     }
    for(i=0;i<(n+m);i++)
    if(i<n)
    a[i]=a1[i];
    else
    {
    a[i]=a2[j];
    j++;
    }
    for(i=0;i<n+m;i++)
    printf("a[%i]= %i\n",i,a[i]);
}
    
