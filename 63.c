#include <stdio.h>
//Вычисление силы тока в электрической цепи.
int main()
{float U;//larum
float I;//hosanqi uj
float R;//dimadrutyun
printf("Вычисление силы тока в электрической цепи.\n");
printf("Введите исходные данные:\n");
scanf("%f",&U);
printf("Напряжение (вольт) -> %f\n",U);
scanf("%f",&R);
printf("Сопротивление (Ом) -> %f\n",R);
I=U/R;
printf("Сила тока: %.2f\t",I);
printf("Ампер.");

return 0; 
}
