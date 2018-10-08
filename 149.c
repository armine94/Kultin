#include <stdio.h>
//elementi voronum zangvacum
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
     k=3;
     else
     k=2;
     }
     if(3==k)
     printf("element@ zangvacic e\n");
     else
        printf("zanvacum nman element chka\n");

    return 0;
}
