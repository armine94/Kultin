#include <stdio.h>
#define n 5
int main()
{
    int i,j,a[n],c;

    for(i=0;i<n;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
    }
    for(i=0;i<n;i++)
    printf("a[%i]= %i\n",i,a[i]);

    return 0;
}

