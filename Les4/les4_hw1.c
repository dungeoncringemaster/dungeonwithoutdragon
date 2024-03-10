#include <stdio.h>
#include <locale.h>
/*
Ввести два числа и вывести их в порядке возрастания.

Данные на входе:     Два целых числа
Данные на выходе:    Два целых числа

Пример:
Данные на входе:    15 9
Данные на выходе:   9 15
*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        float a, b, min, max;
        printf("Введите 2 числа через пробел:\n");
        scanf("%f%f", &a, &b);
         min = a<b ? a : b;
         max = a>b ? a : b;


        printf("%f %f", min, max);

    return 0;
}

