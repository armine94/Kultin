#include <stdio.h>

int main()
{
    int min;
    float a;
   do
   {

     scanf("%f",&a);
     if(a>0)
     {
         if(a<min)
         {
             min=a;
         }

     }
   }
   while (a>0);

   printf("min = %i\n",min);
return 0;
}