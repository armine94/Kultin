#include <stdio.h>

int main()
{int i;
int b=1;
printf("Таблица степеней двойки \n");
for(i=1;i<=10;i++)
{
    printf("%i\t",i);
b=b*2;
printf("%i\n",b);
}
    return 0;
}