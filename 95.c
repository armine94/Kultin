#include <stdio.h>
int main()
{float
float
float c;
printf("¬ведите в одной строке через пробел");
printf("рост (см) и вес (кг), затем нажмите <Enter>");
scanf("%f",&a);
scanf("%f",&b);
printf(" ->%.2f",a,b);
c=a-100;
if(c>b)
{
c=c-b;
printf("¬ам надо поправитьс€ на%.2f",c);

printf("кг.");
}
return 0; 
}