#include <stdio.h>
//���������� ������ ����.
int main()
{float a;//erkarutyun
float s;//makeres
printf("���������� ������ ����.\n");
printf("������� ����� ����� (��) � ������� �������� <Enter> ->\n");
scanf("%f",&a);
printf("a=%f\n",a);
s=a*a*a;
printf("����� ����: %.2f ",s);
printf("���.��. \n");
return 0; 
}