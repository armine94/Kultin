#include <stdio.h>
//ѕересчет веса из фунтов в килограммы.
int main()
{float a;//funt
float b;//kg
printf("ѕересчет веса из фунтов в килограммы.\n");
scanf("%f",&a);
printf("¬ведите вес в фунтах -> %f\n",a);
b=405.9*a/1000;
printf("%f\t",a);
printf("фунтов Ч это %.2f",b);
printf("кг\n");

return 0; 
}