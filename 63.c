#include <stdio.h>
//���������� ���� ���� � ������������� ����.
int main()
{float U;//larum
float I;//hosanqi uj
float R;//dimadrutyun
printf("���������� ���� ���� � ������������� ����.\n");
printf("������� �������� ������:\n");
scanf("%f",&U);
printf("���������� (�����) -> %f\n",U);
scanf("%f",&R);
printf("������������� (��) -> %f\n",R);
I=U/R;
printf("���� ����: %.2f\t",I);
printf("�����.");

return 0; 
}
