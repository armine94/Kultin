#include <stdio.h>
//���������� ������� ����������� ���������������
int main()
{float a;//erkarutyun
float b;//laynutyun
float h;//barcrutyun
float s;//makeres
printf("���������� ������� ����������� ���������������\n");
printf("������� �������� ������:\n");
scanf("%f",&a);
printf("����� (��) -> %f\n",a);
scanf("%f",&b);
printf("������ (��) -> %f\n",b);
scanf("%f",&h);
printf("������ (��) -> %f\n",h);
s=2*(a*b+a*h+b*h);
printf("������� �����������: %f\n",s);
printf("��.��.");
return 0; 
}