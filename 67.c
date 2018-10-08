#include <stdio.h>
//Вычисление объема цилиндра.
int main()
{float r;
float pi=3.1416;
float h;
float v;
printf("Вычисление объема цилиндра.\n");
printf("Введите исходные данные:\n");
scanf("%f",&r);
printf("Радиус основания (см) -> %f\n",r);
scanf("%f",&h);
printf("Высота цилиндра (см) -> %f\n",h);
v=pi*r*r*h;
printf("Объем цилиндра %.2f\t",v);
printf("см.куб.\n");

return 0; 
}