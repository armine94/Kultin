#include <stdio.h>
//Вычисление сопротивления электрической цепи.
int main()
{float R;//shxtayi dmiadrutyun
float R1;//arancin dimadrutyun
float R2;//arancin dimadrutyun
int a;//miacman tip@
printf("Вычисление сопротивления электрической цепи..");
printf("Введите исходные данные:");
printf("затем нажмите <Enter>.");
scanf("%f\t",&R1);
scanf("%f\n",&R2);
printf("Величина первого сопротивления (Ом) -> %f",R1);
printf("Величина первого сопротивления (Ом) -> %f",R2);
printf("Тип соединения (1 — последовательное, 2 — параллельное) ->");
printf("Виберите Тип соединения ");
scanf(%i),&a;
if(2==a)
{R=R1*R2/(R1+R2);
prinrf("Сопротивление цепи: %.2f",R);
printf("Ом");
}
return 0; 
}
