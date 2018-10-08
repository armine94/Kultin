#include <stdio.h>
//zangvaci poqraguyn element@
int main()
{
    int i,a[5],min;

    for(i=0;i<5;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
     min=a[0];
    for(i=1;i<5;i++)
    if(min>a[i])
    min=a[i];
    printf("zangvaci poqraguyn elementn e");
    printf(" %i\n",min);


    return 0;
}
