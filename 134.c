#include <stdio.h>

int main()
{
    int max;
    float a;
   do
   {

     scanf("%f",&a);
     if(a>max)
     {
       max=a;
     }
   }
   while (a>0);

   printf("max = %i\n",max);
return 0;
}
