#include <stdio.h>
#include <locale.h>
/*
������ ��� ����� � ����� ���������� �� ���

������ �� �����:    ��� ����� ����� ����� ������
������ �� ������:   ���� ���������� ����� �����

������
������ �� �����:    4 15 9
������ �� ������:   15
*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        float a, b, c, max;
        printf("������� 3 ����� ����� ������:\n");
        scanf("%f%f%f", &a, &b, &c);
            max = a>b ? a : b>c ? b : c;

        printf("%f", max);

    return 0;
}

