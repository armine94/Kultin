#include <stdio.h>
//mijin tvabanakan aranc max.min
int main()
{
    int i,a[10],j=0,min,max,k=0;
    float s=0;

    for(i=0;i<10;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
    min=a[0];
    max=a[0];
    for(i=1;i<10;i++)
    {
    if(min>=a[i])
    min=a[i];
    if(max<=a[i])
    max=a[i];
    }
    printf("max = %i \n",max);
    printf("min = %i \n",min);
    for(i=0;i<5;i++)
    {
    s=s+a[i];
    }
    s=s-max-min;
    printf("s= %.2f\n",s/8);
    
    return 0;
}