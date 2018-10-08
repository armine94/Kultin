#include <stdio.h>
//Вычисление объема цилиндра.
int main()
{float a;
float h;
float v;
float pi=3.1416;
printf("Вычисление объема цилиндра.\n");
printf("Введите исходные данные:\n");
scanf("%f",&a);
printf("радиус основания (см) -> %f\n",a);
scanf("%f",&h);
printf("высота иллиндра (см) -> %f\n",h);
v=a*h*h*pi;
printf("Объем цилиндра %f ",v);
printf(" см. куб.\n");
printf("Для завершения нажмите <Enter>\n");

return 0; 
}