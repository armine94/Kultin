#include <stdio.h>
//caxser 
int main()
{float a;//erkarutyun
float b;//laynutyun
float s; // makeres
printf("Вычисление площади прямоугольника\n");
printf("Введите исходные данные:\n");
printf("a=");
scanf("%f",a);
printf("b=");
scanf("%f",b);
printf("Длина (см)-> %f\n",a);
printf("Ширина (см)-> %f\n",b);
s=a*b;
printf("Площадь параллелограмма: %.2f\t",s);
printf("кв.см.\n");
return 0; 
}