#include <stdio.h>
#include <locale.h>
/*
Ввести номер месяца и вывести название времени года.
Данные на входе:        Целое число от 1 до 12 - номер месяца.
Данные на выходе:       Время года на английском: winter, spring, summer, autumn (используйте switch)
Пример №1
Данные на входе:        4
Данные на выходе:       spring
Пример №2
Данные на входе:        1
Данные на выходе:       winter
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
        int month=0;
        printf("Введите номер месяца:\n");
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
