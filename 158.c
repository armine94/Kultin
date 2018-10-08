#include <stdio.h>
//erkchap zangvaci syuneri gumar
int main()
{
    int i,j,s,a[2][3];

     for(i=0;i<2;i++)
     for(j=0;j<3;j++)
    {
    printf("a[%i][%i]= ",i,j);
    scanf("%i",&a[i][j]);
    printf("\n");
     }
     for(i=0;i<2;i++)
     {s=0;
     for(j=0;j<3;j++)
     {
     s=s+a[i][j];
     }
     printf("s%i= %i   ",i,s);
     }
    return 0;
}
