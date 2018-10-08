#include <stdio.h>

int main()
{int i;
int n;
int p=0;
printf("Вычисление суммы положительных чисел. \n");
printf("Введите количество суммируемых чисел -> ");
scanf("%i",&n);
for(i=1;i<=n;i++)
    {
    p=p+i;
    }
           printf("Сумма первых %i ",n); 
           printf("положительных чисел равна %i\n",p);

    return 0;
}