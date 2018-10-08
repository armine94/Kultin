#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i",&a);
    scanf("%i",&b);
   while (b)
   {
      c = a % b;
      a = b;
      b = c;
   }
printf("%i\n",a);
return 0;
}
