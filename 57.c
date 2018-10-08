#include <stdio.h>
//Вырчисление стоимости покупки.
int main()
{float a;//tetreri gin
float b;//matitneri gin
float k;//komplekti qanak
float c;
printf("Вырчисление стоимости покупки.\n");
printf("Введите исходные данные:\n");
scanf("%f",&a);
printf("Цена тетради (руб.) -> %f\n",a);
scanf("%f",&b);
printf("Цена обложки (руб.) -> %f\n",b);
scanf("%f",&k);
printf("Количество комплектов (шт.) -> \n",k);
c=(a+b)*k;
printf("Стоимость покупки: %.2f\t",c);
printf("руб.\n");

return 0; 
}