#include <stdio.h>
//���������� ��������� �������.
int main()
{float a;//tetreri gin
float b;//matitneri gin
float j;//tetreri qanak
float k;//matitneri qanak
float c;
printf("���������� ��������� �������.\n");
printf("������� �������� ������:\n");
scanf("%f",&a);
printf("���� ������� (���.) -> %f\n",a);
scanf("%f",&j);
printf("���������� �������� -> %f\n",j);
scanf("%f",&b);
printf("���� ��������� (���.) -> %f\n",b);
scanf("%f",&k);
printf("���������� ���������� -> %f\n",k);
c=a*j+b*k;
printf("��������� �������: %.2f\t",c);
printf("���.\n");

return 0; 
}