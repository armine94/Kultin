#include <stdio.h>
int main()
{int a;
printf("Введите номер месяца (число от 1 до 12)");
scanf("%i\t",&a);
printf("->%i",a);
if(a>=3a<6)
{
printf("Весна");
else if(a>=6&&a<9)
printf("Лето");
else if(a>=9&&a<12)
printf("Осень");
else if(a>=1&&a<3)
printf("Зима");
else  if(a=12)
printf("Зима");
else
printf("Ошибка ввода данных");
}
return 0; 
}