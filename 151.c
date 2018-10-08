#include <stdio.h>
//elementi voronum zangvacum,qanaki veradarc
int main()
{
    int i,a[10],j,k=0;
    printf("nermucel tiv@    ");
     scanf("%i",&j);
    for(i=0;i<10;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
     
     for(i=0;i<10;i++)
     {
     if(j==a[i])
     k++;
     }
     printf("element krknutyunneri qanakn e zangvacum  %i\n",k);
    return 0;
}