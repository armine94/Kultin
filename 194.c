#include <stdio.h>

int glasn(char tar)

{
int i;

   if(tar=='a'||tar=='e'||tar=='i'||tar=='u'|| tar=='o')

i=0;

else
i=1;

return i;

}

int main()

{ char tarr;

int i;

scanf("%s",&tarr);

  i=glasn(tarr);

 printf("%i\n",i);

 return 0;
}
