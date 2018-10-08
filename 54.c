#include <stdio.h>
//Вычисление объема куба.
int main()
{float a;//erkarutyun
float s;//makeres
printf("Вычисление объема куба.\n");
printf("Введите длину ребра (см) и нажмите клавиигу <Enter> ->\n");
scanf("%f",&a);
printf("a=%f\n",a);
s=a*a*a;
printf("Объем куба: %.2f ",s);
printf("куб.см. \n");
return 0; 
}