#include <stdio.h>
#include <locale.h>
/*
������ ���� ����� �  ������� ���������� �� ���
����� ���������� ���������� �����

������ �� �����:     ���� ����� ����� ����������� ��������
������ �� ������:    ���� ����� �����

������ �� �����:     4    15    9    56    4
������ �� ������:    4
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
        float a, b, c, d, e, max;
        printf("������� 5 ����� ����� ������:\n");
        scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

            max = a<b ? a : b<c ? b : c;
            max = max<d ? max : d<e ? d : e;

        printf("%f", max);

    return 0;
}
