#include <stdio.h>
#include <locale.h>
/*
Ввести пять чисел и  вывести наименьшее из них
Нужно напечатать наименьшее число

Данные на входе:     Пять целых чисел разделенных пробелом
Данные на выходе:    Одно целое число

Данные на входе:     4    15    9    56    4
Данные на выходе:    4
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
        float a, b, c, d, e, max;
        printf("Введите 5 чисел через пробел:\n");
        scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

            max = a<b ? a : b<c ? b : c;
            max = max<d ? max : d<e ? d : e;

        printf("%f", max);

    return 0;
}
