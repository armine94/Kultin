#include <stdio.h>
//Вычисление площади поверхности цилиндра.
int main()
{float r;
float pi=3.1416;
float h;
float s;
printf("Вычисление площади поверхности цилиндра.\n");
printf("Введите исходные данные:\n");
scanf("%f",&r);
printf("Радиус основания (см) -> %f\n",r);
scanf("%f",&h);
printf("Высота цилиндра (см) -> %f\n",h);
s=2*pi*r*(r+h);
printf("Площадь поверхности цилиндра: %.2f\t",s);
printf("кв.см.\n");

return 0; 
}