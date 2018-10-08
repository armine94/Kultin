#include <stdio.h>
int main()
{int a;
scanf("%i",&a);
if(a>=1&&a<=99)
{if(a>=1&&a<10)
printf("копеек%i",a);
else 
printf("копейка %i",a);
}
}