#include <stdio.h>

int main()
{int i;
int n;
float p=1;
printf("���������� ��������� ����� ����: 1+1/2-+-1/3+ ... \n");
printf("������� ���������� ����������� ������ ���� ->");
scanf("%i",&n);
for(i=2;i<=n;i++)
    {
    p=p+1/i;
    }
           printf("����� ������ %i ",n); 
           printf("������������� ����� ����� %f\n",p);

    return 0;
}