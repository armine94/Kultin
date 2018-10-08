#include <stdio.h>
//erkchap zangvaci toxeri gumr@
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
     for(j=0;j<3;j++)
     {s=0;
     for(i=0;i<2;i++)
     {
     s=s+a[i][j];
     }
     printf("s%i= %i   ",j,s);
     }
    return 0;
}
