#include <stdio.h>

int main()
{int i;
int n;
int p=0;
printf("���������� ����� ������ ������������� �����. \n");
printf("������� ���������� ����������� ����� � ������� <Enter> ->");
scanf("%i",&n);
n=n*2;
for(i=2;i<=n;i+=2)
    {
    p=p+i;
    }
           printf("����� ������ %i ",n/2); 
           printf("������������� ����� ����� %i\n",p);

    return 0;
}