#include <stdio.h>
//Вычисление объема параллелепипеда. 
int main()
{float a;//erkarutyun
float b;//laynutyun
float h;//barcrutyun
float v; //caval
printf("Вычисление объема параллелепипеда.\n");
printf("Введите исходные данные:@\n");
scanf("%f",&a);
printf("Длина (см) ->%f\n",a);
scanf("%f",&b);
printf("Ширина (см) ->%f\n",b);
scanf("%f",&c);
printf("Высота (см) ->%f\n",h);
v=a*b*h;
printf("Объем: %f\t",v);
printf("куб.см.\n");
return 0; 
}