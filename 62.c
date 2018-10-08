#include <stdio.h>
//Вычисление сопротивления электрической цепи,
int main()
{float R1;//dimadrutyun
float R2;//dimadrutyun
float R;//dimadrutyun
printf("Вычисление сопротивления электрической цепи.\n");
printf("Введите исходные данные:\n");
scanf("%f",&R1);
printf("Величина первого сопротивления (Ом) -> %f\n",R1);
scanf("%f",&R2);
printf("Величина второго сопротивления (Ом) -> %f\n",R2);
R=R1+R2;
printf("Сопротивление цепи: %.2f\t",R);
printf("Ом ");

return 0; 
}