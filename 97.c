#include <stdio.h>
int main()
{int a;
printf("������� ����� ��� ������ (����� �� 1 �� 7)");
scanf("%i\t",&a);
printf("->%i",a);
if(a>=1a<6)
{
printf("������� ����");
else if(a=6)
printf("�������");
else if(a=7)
printf("�����������");
}
return 0; 
}