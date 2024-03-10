#include <stdio.h>
#include <locale.h>
/*
Даны стороны треугольника a, b, c. Определить, существует ли такой треугольник.
Для того чтобы треугольник существовал, сумма длин любых двух сторон должна быть больше длины третьей стороны.

Данные на входе:        Три целых числа. Стороны треугольника a, b, c.
Данные на выходе:       YES или NO

Пример
Данные на входе:        3 2 4
Данные на выходе:       YES
*/

int main(void)

{   setlocale(LC_ALL,"Rus");
    float a, b, c;
    printf("Введите длины сторон:\n");
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
