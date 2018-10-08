#include <stdio.h>

int main()
{int i;
int n;
int s=1;
printf("Вычисление факториала. \n");
printf("Введите число, факториал которого надо вычислить -> ");
scanf("%i",&n);
for(i=1;i<=n;i++)
    {
    s=s*i;;
    }
           printf("Факториал %i ",n); 
           printf("равен %i\n",s);

    return 0;
}