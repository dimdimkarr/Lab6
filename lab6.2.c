#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

double f(double x);

int main(void)
{
    double x;
    double f_x;

    setlocale(LC_ALL, "Russian");

    printf("ЗАДАЧА 2: Вычисление функции F(x)\n");
    printf("Введите значение x: ");

    if (scanf("%lf", &x) != 1)
    {
        printf("Ошибка: необходимо ввести число.\n");
        return 1;
    }

    f_x = f(x);

    printf("Результат: F(%.2lf) = %.6lf\n", x, f_x);
    printf("Ветвь функции: %s\n",
        (x <= 7) ? "3x - 9" : "1/(x^2 - 4)");

    return 0;
}

/*
 * Контрольные примеры:
 * Ветвь 1 (x <= 7): F(x) = 3x - 9
 * x = 0  -> 3 * 0 - 9 = -9
 * x = 5  -> 3 * 5 - 9 = 6
 * x = 7  -> 3 * 7 - 9 = 12
 *
 * Ветвь 2 (x > 7): F(x) = 1 / (x^2 - 4)
 * x = 8  -> 1 / (64 - 4) = 1 / 60 = 0.016667
 * x = 10 -> 1 / (100 - 4) = 1 / 96 = 0.010417
 */

double f(double x)
{
    double y;

    if (x <= 7)
        y = 3.0 * x - 9.0;
    else
        y = 1.0 / (x * x - 4.0);

    return y;
}