#include <stdio.h>
#include <locale.h>
/*
������ ��� ����� � ������� �� � ������� �����������.

������ �� �����:     ��� ����� �����
������ �� ������:    ��� ����� �����

������:
������ �� �����:    15 9
������ �� ������:   9 15
*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        float a, b, min, max;
        printf("������� 2 ����� ����� ������:\n");
        scanf("%f%f", &a, &b);
         min = a<b ? a : b;
         max = a>b ? a : b;


        printf("%f %f", min, max);

    return 0;
}

