#include <stdio.h>
#include <locale.h>
/*
���� ������� ������������ a, b, c. ����������, ���������� �� ����� �����������.
��� ���� ����� ����������� �����������, ����� ���� ����� ���� ������ ������ ���� ������ ����� ������� �������.

������ �� �����:        ��� ����� �����. ������� ������������ a, b, c.
������ �� ������:       YES ��� NO

������
������ �� �����:        3 2 4
������ �� ������:       YES
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
    float a, b, c;
    printf("������� ����� ������:\n");
    scanf("%f%f%f", &a, &b, &c);

    if (a+b>c)
        if (b+c>a)
            if (a+c>b)
            printf("YES");
            else
            printf("NO");
        else
        printf("NO");
    else
    printf("NO");

    return 0;
}
