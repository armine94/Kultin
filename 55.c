#include <stdio.h>
//���������� ������ ��������.
int main()
{float a;
float h;
float v;
float pi=3.1416;
printf("���������� ������ ��������.\n");
printf("������� �������� ������:\n");
scanf("%f",&a);
printf("������ ��������� (��) -> %f\n",a);
scanf("%f",&h);
printf("������ �������� (��) -> %f\n",h);
v=a*h*h*pi;
printf("����� �������� %f ",v);
printf(" ��. ���.\n");
printf("��� ���������� ������� <Enter>\n");

return 0; 
}