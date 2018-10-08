#include <stdio.h>
//stugum zangvac@ achman kargove te voch
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
     if(a[i]>=a[i+1])
     break;
     else
     k=1;
     }
     if(0==k)
     printf("zanvac@ achman kargov che nermucvac\n");
     else
     printf("zanvac@ achman kargov e nermucvac\n");
    return 0;
}
