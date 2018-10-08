#include <stdio.h>
//zangvacum rknvox element ka te voch
int main()
{
    int i,a[10],j,k=0;    
    for(i=0;i<10;i++)
    {
    printf("a[%i]= ",i);
    scanf("%i",&a[i]);
    printf("\n");
     }
     
     for(i=0;i<10;i++)
     {
     if(a[i]==a[i+1])
     k=1;
     }
     if(k)
     printf("zangvacum krknvox element ka  \n");
     else
     printf("zangvacum krknvox elementner chkan\n");
    return 0;
}