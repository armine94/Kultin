#include <stdio.h>

int main()
{int i;
int n;
int s=1;
printf("���������� ����������. \n");
printf("������� �����, ��������� �������� ���� ��������� -> ");
scanf("%i",&n);
for(i=1;i<=n;i++)
    {
    s=s*i;;
    }
           printf("��������� %i ",n); 
           printf("����� %i\n",s);

    return 0;
}