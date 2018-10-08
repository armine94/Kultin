#include <stdio.h>

int main()
{int i;
int n;
int p=0;
printf("Вычисление частичной суммы ряда: 1,3,5,7 ... \n");
printf("Введите количество суммируемых членов ряда ->");
scanf("%i",&n);
n=n*2;
for(i=1;i<=n;i+=2)
    {
    p=p+i;
    }
           printf("Сумма первых %i ",n/2); 
           printf("положительных чисел равна %i\n",p);

    return 0;
}