#include <stdio.h>
 //���������� ������� ������.
int main()
{
float r1;//radius kolca
float r2;//radius otverstiya
float pi=3.1416;
printf("���������� ������� ������.");
printf("������� �������� ������:");
scanf("%f",&r1);
scanf("%f",&r2);
printf("������ ������ (��) -> %f\n",r1);
printf("������ ��������� (��) ->%f\n",r2);
if(r2>r1)
printf("������! ������ ��������� �� ����� ���� ������ ������� ������.");
else 
s=pi*(r1-r2);
printf("s=%f",s);
return 0;
}