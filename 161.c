#include <stdio.h>
//ekchap zangvaci mijin tvabanakan
int main()
{
    int i,j,a[2][3];
    float s=0;
     for(i=0;i<2;i++)
     for(j=0;j<3;j++)
    {
    printf("a[%i][%i]= ",i,j);
    scanf("%i",&a[i][j]);
    printf("\n");
     }
     for(i=0;i<2;i++)
     {
     for(j=0;j<3;j++)
     s=s+a[i][j];
     }
     printf("s=%f",s/(i*j));
       return 0;
}
