#include <stdio.h>
//����������� ��������� �������.
int main()
{float a;//tetreri gin
float b;//matitneri gin
float k;//komplekti qanak
float c;
printf("����������� ��������� �������.\n");
printf("������� �������� ������:\n");
scanf("%f",&a);
printf("���� ������� (���.) -> %f\n",a);
scanf("%f",&b);
printf("���� ������� (���.) -> %f\n",b);
scanf("%f",&k);
printf("���������� ���������� (��.) -> \n",k);
c=(a+b)*k;
printf("��������� �������: %.2f\t",c);
printf("���.\n");

return 0; 
}