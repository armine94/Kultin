#include <stdio.h>

int main()
{
    int a,k,j,i;
    scanf("%i",&a);
    k=2;
   do
   {
       j=a%k;
       if(j!=0)
       k++;     
    
   }
   while (j!=0);
  if(k==a)
printf("%i tiv@ parz e\n",a);
else
printf("%i tiv@ parz che\n",a);
return 0;
}
