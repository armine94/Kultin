#include <stdio.h>

int main()
{int i;
float a;
float p=0;
printf("���������� �������� ��������������� ������������������ \n");
printf("������� �����. ����� ����� ������� ����� ��������� <Enter> \n");
for(i=1;i<=5;i++)
    {printf("->");
    scanf("%f",&a);
    p=p+a;
    }
    p=p/5;
           printf("������� �������������� ��������� ������������������: %.2f \n",p);
printf("��� ���������� ������� <Enter>\n");
    return 0;
}