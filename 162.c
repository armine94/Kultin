#include <stdio.h>
int main()
{
    int i,j,a[2][3];
    float s=0;
     for(i=0;i<2;i++)
     for(j=0;j<2;j++)
    {
    printf("a[%i][%i]= ",i,j);
    scanf("%i",&a[i][j]);
    printf("\n");
     }

     s=a[0][0]*a[1][1]-a[0][1]*a[1][0];

     printf("s=%f\n",s);
       return 0;
}
