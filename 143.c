#include <stdio.h>
//trvac elementi qanak@ zangvacum
int main()
{
    int i,j=0,a[5];

    for(i=0;i<5;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
    for(i=0;i<5;i++)
    if(0==a[i])
    j++;
    printf("Zangvacum kan ");
    printf(" %i\t",j);
    printf("hat 0-i havasar elementner");

    return 0;
}