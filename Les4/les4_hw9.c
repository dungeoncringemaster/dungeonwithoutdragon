#include <stdio.h>
#include <locale.h>
/*
Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.

Данные на входе:        Три целых числа
Данные на выходе:       Одно слово YES или NO

Пример
Данные на входе:        4 5 17
Данные на выходе:       YES
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
        float a, b, c;
        printf("Введите 3 числа через пробел:\n");
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
