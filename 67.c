#include <stdio.h>
//���������� ������ ��������.
int main()
{float r;
float pi=3.1416;
float h;
float v;
printf("���������� ������ ��������.\n");
printf("������� �������� ������:\n");
scanf("%f",&r);
printf("������ ��������� (��) -> %f\n",r);
scanf("%f",&h);
printf("������ �������� (��) -> %f\n",h);
v=pi*r*r*h;
printf("����� �������� %.2f\t",v);
printf("��.���.\n");

return 0; 
}