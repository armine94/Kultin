#include <stdio.h>

int main()
{int a;
int b;
float c;
float d;
printf("���������� ��������� ��������� �� ��������\n.");
printf("������� �������� ������:\n");
printf("��� ������ ->");
scanf("%i",&a);
switch(a)
{
    case 423:
    {
    printf("������������ (����� ���������� �����)->");
    scanf("%i",&b);
    printf("�����: �����������\n");
    printf("���� ������:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" ��������� ���������: %.2f",d);
    printf("���.\n");
        
    }
    break;
    case 95:
    {
    printf("������������ (����� ���������� �����)->");
    scanf("%i",&b);
    printf("�����: ������\n");
    printf("���� ������:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" ��������� ���������: %.2f",d);
    printf("���.\n");
    }
    break;
    case 815:
    {
    printf("������������ (����� ���������� �����)->");
    scanf("%i",&b);
    printf("�����: ��������\n");
    printf("���� ������:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" ��������� ���������: %.2f",d);
    printf("���.\n");
    }
    break;
    case 846:
    {
    printf("������������ (����� ���������� �����)->");
    scanf("%i",&b);
    printf("�����: ������\n");
    printf("���� ������:\n");
    scanf("%f",&c);
    d=b*c;
    printf(" ��������� ���������: %.2f",d);
    printf("���.\n");
    }
    break;
    default:
    printf("��� �����������\n");
}

    return 0;
}