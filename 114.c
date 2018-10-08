#include <stdio.h>

int main()
{int i;
float a;
float p=0;
printf("Вычисление среднего арифметического последовательности \n");
printf("дробных чисел. После ввода каждого числа нажимайте <Enter> \n");
for(i=1;i<=5;i++)
    {printf("->");
    scanf("%f",&a);
    p=p+a;
    }
    p=p/5;
           printf("Среднее арифметическое введенной последовательности: %.2f \n",p);
printf("Для завершения нажмите <Enter>\n");
    return 0;
}