#include <stdio.h>
//���������� ������������� ������������� ����,
int main()
{float R1;//dimadrutyun
float R2;//dimadrutyun
float R;//dimadrutyun
printf("���������� ������������� ������������� ����.\n");
printf("������� �������� ������:\n");
scanf("%f",&R1);
printf("�������� ������� ������������� (��) -> %f\n",R1);
scanf("%f",&R2);
printf("�������� ������� ������������� (��) -> %f\n",R2);
R=R1+R2;
printf("������������� ����: %.2f\t",R);
printf("�� ");

return 0; 
}