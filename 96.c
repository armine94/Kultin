#include <stdio.h>
int main()
{int a;
printf("������� ����� ������ (����� �� 1 �� 12)");
scanf("%i\t",&a);
printf("->%i",a);
if(a>=3a<6)
{
printf("�����");
else if(a>=6&&a<9)
printf("����");
else if(a>=9&&a<12)
printf("�����");
else if(a>=1&&a<3)
printf("����");
else  if(a=12)
printf("����");
else
printf("������ ����� ������");
}
return 0; 
}