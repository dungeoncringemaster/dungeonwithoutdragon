#include <stdio.h>
#include <locale.h>
/*
������ ��� ����� � ����������, ����� ��, ��� ��� ��������� � ������� �����������.

������ �� �����:        ��� ����� �����
������ �� ������:       ���� ����� YES ��� NO

������
������ �� �����:        4 5 17
������ �� ������:       YES
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
        float a, b, c;
        printf("������� 3 ����� ����� ������:\n");
        scanf("%f%f%f", &a, &b, &c);

        if (a<=b)
            if (b<=c)
                printf("YES");

            else
                printf("NO");

        else
            printf("NO");

    return 0;
}
