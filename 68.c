#include <stdio.h>
//���������� ������� ����������� ��������.
int main()
{float r;
float pi=3.1416;
float h;
float s;
printf("���������� ������� ����������� ��������.\n");
printf("������� �������� ������:\n");
scanf("%f",&r);
printf("������ ��������� (��) -> %f\n",r);
scanf("%f",&h);
printf("������ �������� (��) -> %f\n",h);
s=2*pi*r*(r+h);
printf("������� ����������� ��������: %.2f\t",s);
printf("��.��.\n");

return 0; 
}