#include <stdio.h>
//max-elementi syun@
int main()
{
    int i,j,a[3][3],max,k=0;
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
    {
    printf("a[%i][%i]= ",i,j);
    scanf("%i",&a[i][j]);
    printf("\n");

    }
     max=a[0][0];
    for(i=1;i<3;i++)
    for(j=0;j<3;j++)
    if(max<a[i][j])
    {
    max=a[i][j];
    k=i;
    }

    printf("max= %i\n",max);
    printf("k= %i\n",k);
    return 0;
}
