#include <stdio.h>
//Вычисление стоимости покупки.
int main()
{float a;//gin
float b;//qash
float c;
printf("Вычисление стоимости покупки.\n");
printf("Введите исходные данные:\n");
scanf("%f",&a);
printf("Цена одного килограмма яблок (руб.) -> %f\n",a);
scanf("%f",&b);
printf("Вес яблок (кг) -> %f\n",b);
c=a*b;
printf("Стоимость покупки: %f\t",c);
printf("руб.\n");

return 0; 
}