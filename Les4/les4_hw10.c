#include <stdio.h>
#include <locale.h>
/*
������ ����� ������ � ������� �������� ������� ����.
������ �� �����:        ����� ����� �� 1 �� 12 - ����� ������.
������ �� ������:       ����� ���� �� ����������: winter, spring, summer, autumn (����������� switch)
������ �1
������ �� �����:        4
������ �� ������:       spring
������ �2
������ �� �����:        1
������ �� ������:       winter
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
        int month=0;
        printf("������� ����� ������:\n");
        scanf("%d", &month);

        switch (month)
        {
            case 1:
            printf("winter");
            break;
            case 2:
            printf("winter");
            break;
            case 3:
            printf("spring");
            break;
            case 4:
            printf("spring");
            break;
            case 5:
            printf("spring");
            break;
            case 6:
            printf("summer");
            break;
            case 7:
            printf("summer");
            break;
            case 8:
            printf("summer");
            break;
            case 9:
            printf("autumn");
            break;
            case 10:
            printf("autumn");
            break;
            case 11:
            printf("autumn");
            break;
            case 12:
            printf("winter");
            break;
            default:
            printf("wrong number, try again");
            break;
        }

    return 0;
}
