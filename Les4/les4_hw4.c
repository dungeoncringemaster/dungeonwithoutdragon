#include <stdio.h>
#include <locale.h>
/*
���������� ����� ��������� � ��������.

������ �� �����:     ���� ����� ����� ����� ������
������ �� ������:    ���� ����� ����� - ����� ��������� � ��������

������
������ �� �����:     4    15    9    56    4
������ �� ������:    60

*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        int a, b, c, d, e, min, max;
        printf("������� 5 �����:\n");
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
        min = a;
        if (min>b)
            min = b;
        if (min>c)
            min = c;
        if (min>d)
            min = d;
        if (min>e)
            min = e;

        max = a;
        if (max<b)
            max = b;
        if (max<c)
            max = c;
        if (max<d)
            max = d;
        if (max<e)
            max = e;

        printf("min: %d", min+max);

    return 0;
}
