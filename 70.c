#include <stdio.h>
//Пересчет расстояния из верст в километры.
int main()
{float a;//mxon
float b;//km
printf("Пересчет расстояния из верст в километры.\n");
scanf("%f",&a);
printf("Введите расстояние в верстах -> %f\n",a);
b=106.68*a/100;
printf("b= %.2f\n",b);

return 0; 
}