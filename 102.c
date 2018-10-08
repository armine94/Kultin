#include <stdio.h>

int main()
{int a;
int b;
float c;
float d;
printf("Вычисление стоимости разговора по телефону\n.");
printf("Введите исходные данные:\n");
printf("Код города ->");
scanf("%i",&a);
switch(a)
{
    case 423:
    {
    printf("Длительность (целое количество минут)->");
    scanf("%i",&b);
    printf("Город: Владивосток\n");
    printf("Цена минуты:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" Стоимость разговора: %.2f",d);
    printf("руб.\n");
        
    }
    break;
    case 95:
    {
    printf("Длительность (целое количество минут)->");
    scanf("%i",&b);
    printf("Город: Москва\n");
    printf("Цена минуты:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" Стоимость разговора: %.2f",d);
    printf("руб.\n");
    }
    break;
    case 815:
    {
    printf("Длительность (целое количество минут)->");
    scanf("%i",&b);
    printf("Город: Мурманск\n");
    printf("Цена минуты:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" Стоимость разговора: %.2f",d);
    printf("руб.\n");
    }
    break;
    case 846:
    {
    printf("Длительность (целое количество минут)->");
    scanf("%i",&b);
    printf("Город: Самара\n");
    printf("Цена минуты:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" Стоимость разговора: %.2f",d);
    printf("руб.\n");
    }
    break;
    default:
    printf("Код неизвестень\n");
}

    return 0;
}