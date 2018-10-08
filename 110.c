#include <stdio.h>

int main()
{int i;
int n;
float p=1;
printf("Вычисление частичной суммы ряда: 1+1/2-+-1/3+ ... \n");
printf("Введите количество суммируемых членов ряда ->");
scanf("%i",&n);
for(i=2;i<=n;i++)
    {
    p=p+1/i;
    }
           printf("Сумма первых %i ",n); 
           printf("положительных чисел равна %f\n",p);

    return 0;
}