#include <stdio.h>
//shabatva mijin jermastichan@
int main()
{
    int i,a[7];
    float s=0;
    /*for(i=0;i<10;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }*/
     printf("Erkushabti ->");
     scanf("%i",&a[0]);
     printf("Ereqshabti ->");
     scanf("%i",&a[1]);
     printf("Choreqshabti ->");
     scanf("%i",&a[2]);
     printf("Hingshabti ->");
     scanf("%i",&a[3]);
     printf("Urbat ->");
     scanf("%i",&a[4]);
     printf("Shabat ->");
     scanf("%i",&a[5]);
     printf("Kiraki ->");
     scanf("%i",&a[6]);
     for(i=0;i<7;i++)
     {
     s=s+a[i];
     }
     printf("shabata mijin jermastichanne  %.2f",s/7);
    return 0;
}
