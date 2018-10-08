#include <stdio.h>
//mijin tvabanakan
int main()
{
    int i,a[10],j=0;
    float s=0;

    for(i=0;i<10;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
    for(i=0;i<10;i++)
    if(0!=a[i])
    {
        j++;
    s=s+a[i];
    }
    printf("s= %.2f\t",s/j);
    

    return 0;
}