#include <stdio.h>
#include <locale.h>
/*
���� ����������� �����, ���������� ������������ �����

������ �� �����:      ����� ������������� ����������� �����
������ �� ������:     ���� �����

������
������ �� �����:      435
������ �� ������:     5
*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        int a, b=0, k=1, max=0;
        printf("������� �����:\n");
        scanf("%d", &a);

       while (a>=1)
        {
            b=(a/k)%10;
            k=k*10;

            if (b>max) max = b;

            a=a/k;
        }

        printf("����� ������� �����: %d", max);

    return 0;
}

