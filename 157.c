#include <stdio.h>
//mijinic barcr hasak unecoxneri qanak
int main()
{
    int i,j,a[5],c,m=0;
   float s=0;
     for(i=0;i<5;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
     for(i=0;i<5;i++)
     {
     s=s+a[i];
     }
     s=s/5;
     for(i=0;i<5;i++)
     {
     if(a[i]>s)
     m++;
     }
     printf("dasaranum ka mijin hasaki  %i mard\n",m);
    return 0;
}
