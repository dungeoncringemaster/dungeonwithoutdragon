#include <stdio.h>
#include <locale.h>
/*
Ввести три числа и найти наибольшее из них

Данные на входе:    Три целых числа через пробел
Данные на выходе:   Одно наибольшее целое число

Пример
Данные на входе:    4 15 9
Данные на выходе:   15
*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        float a, b, c, max;
        printf("Введите 3 числа через пробел:\n");
        scanf("%f%f%f", &a, &b, &c);
            max = a>b ? a : b>c ? b : c;

        printf("%f", max);

    return 0;
}

