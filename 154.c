#include <stdio.h>
//pxpjak-achman kargov
int main()
{
    int i,a[10],j,k;
    for(i=0;i<10;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }

     for(i=0;i<10;i++)
     for(j=i+1;j<10;j++)

     if(a[i]>a[j])
     {
    k=a[i];
    a[i]=a[j];
    a[j]=k;
     }
     for(i=0;i<10;i++)
     printf("a[%i] = %i\n",i,a[i]);
    return 0;
}
