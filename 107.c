#include <stdio.h>

int main()
{int i;
int n;
int p=0;
printf("���������� ����� ������������� �����. \n");
printf("������� ���������� ����������� ����� -> ");
scanf("%i",&n);
for(i=1;i<=n;i++)
    {
    p=p+i;
    }
           printf("����� ������ %i ",n); 
           printf("������������� ����� ����� %i\n",p);

    return 0;
}