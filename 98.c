#include <stdio.h>
int main()
{int a;
scanf("%i",&a);
if(a>=1&&a<=999)
{
b=a/100;
c=a/10%10;
d=a/10;
printf("%i",a);
printf("рублей");
e=d*100+c*10+a;
printf("%i",e);
printf("рубль");
}
}