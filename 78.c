#include <stdio.h>
 //Вычисление площади кольца.
int main()
{
float r1;//radius kolca
float r2;//radius otverstiya
float pi=3.1416;
printf("Вычисление площади кольца.");
printf("Введите исходные данные:");
scanf("%f",&r1);
scanf("%f",&r2);
printf("Радиус кольца (см) -> %f\n",r1);
printf("Радиус отверстия (см) ->%f\n",r2);
if(r2>r1)
printf("Ошибка! Радиус отверстия не может быть больше радиуса кольца.");
else 
s=pi*(r1-r2);
printf("s=%f",s);
return 0;
}