#include <stdio.h>
//�������� ���� �� ������ � ����������.
int main()
{float a;//funt
float b;//kg
printf("�������� ���� �� ������ � ����������.\n");
scanf("%f",&a);
printf("������� ��� � ������ -> %f\n",a);
b=405.9*a/1000;
printf("%f\t",a);
printf("������ � ��� %.2f",b);
printf("��\n");

return 0; 
}