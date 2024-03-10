#include <stdio.h>
#include <locale.h>
/*
Дано трехзначное число, напечатать максимальную цифру

Данные на входе:      Целое положительное трехзначное число
Данные на выходе:     Одна цифра

Пример
Данные на входе:      435
Данные на выходе:     5
*/

int main(void)

{   setlocale(LC_ALL,"Rus");

        int a, b=0, k=1, max=0;
        printf("Введите число:\n");
        scanf("%d", &a);

       while (a>=1)
        {
            b=(a/k)%10;
            k=k*10;

            if (b>max) max = b;

            a=a/k;
        }

        printf("Самая большая цифра: %d", max);

    return 0;
}

