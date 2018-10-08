#include <stdio.h>
int main()
{
    int i;
    printf("i=");
   scanf("%i",&i);
   switch(i)
   {
       case 1:
           printf("Erkushabti\n");
           break;
       case 2:
           printf("Ereqshabti\n");
           break;
       case 3:
           printf("Choreqshabti\n");
           break;
       case 4:
           printf("Hingshabti\n");
           break;
       case 5:
           printf("Urbat");
           break;
       case 6: case 7:
           printf("Voch ashxatanwayin or\n");
           break;
       default :
               printf("nman or chka\n");
}
    return 0;
}