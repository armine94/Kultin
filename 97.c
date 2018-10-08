#include <stdio.h>
int main()
{int a;
printf("Введите номер дня недели (число от 1 до 7)");
scanf("%i\t",&a);
printf("->%i",a);
if(a>=1a<6)
{
printf("Рабочий день");
else if(a=6)
printf("Суббота");
else if(a=7)
printf("Воскресенье");
}
return 0; 
}