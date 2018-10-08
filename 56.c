#include <stdio.h>
//Вычисление стоимости покупки.
int main()
{float a;//tetreri gin
float b;//matitneri gin
float j;//tetreri qanak
float k;//matitneri qanak
float c;
printf("Вычисление стоимости покупки.\n");
printf("Введите исходные данные:\n");
scanf("%f",&a);
printf("Цена тетради (руб.) -> %f\n",a);
scanf("%f",&j);
printf("Количество тетрадей -> %f\n",j);
scanf("%f",&b);
printf("Цена карандаша (руб.) -> %f\n",b);
scanf("%f",&k);
printf("Количество карандашей -> %f\n",k);
c=a*j+b*k;
printf("Стоимость покупки: %.2f\t",c);
printf("руб.\n");

return 0; 
}