#include <stdio.h>

int main()
{
    int i=0;
    float a,s=0;
   do
   {

     scanf("%f",&a);
     if(a>0)
     {
       s=s+a;
     i=i+1;
     }
   }
   while (a>0);

   printf("s=%f\n",s/i);
return 0;
}
