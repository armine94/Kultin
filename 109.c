#include <stdio.h>

int main()
{int i;
int n;
int p=0;
printf("���������� ��������� ����� ����: 1,3,5,7 ... \n");
printf("������� ���������� ����������� ������ ���� ->");
scanf("%i",&n);
n=n*2;
for(i=1;i<=n;i+=2)
    {
    p=p+i;
    }
           printf("����� ������ %i ",n/2); 
           printf("������������� ����� ����� %i\n",p);

    return 0;
}