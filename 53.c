#include <stdio.h>
//вычисление площади поверхности параллелепипеда
int main()
{float a;//erkarutyun
float b;//laynutyun
float h;//barcrutyun
float s;//makeres
printf("вычисление площади поверхности параллелепипеда\n");
printf("Введите исходные данные:\n");
scanf("%f",&a);
printf("Длина (см) -> %f\n",a);
scanf("%f",&b);
printf("Ширина (см) -> %f\n",b);
scanf("%f",&h);
printf("Высота (см) -> %f\n",h);
s=2*(a*b+a*h+b*h);
printf("Площадь поверхности: %f\n",s);
printf("кв.см.");
return 0; 
}