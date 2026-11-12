#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int sum_digits(int n);

int main(void)
{
    int n;
    int sum;

    setlocale(LC_ALL, "Russian");

    printf("ДОМАШНЕЕ ЗАДАНИЕ. Вариант 7\n");
    printf("Введите число N (от 0 до 999): ");

    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000)
    {
        printf("Ошибка: необходимо ввести число от 0 до 999.\n");
        return 1;
    }

    sum = sum_digits(n);

    printf("Сумма цифр числа %d: %d\n", n, sum);

    if (sum >= 10 && sum <= 99)
        printf("Сумма цифр является двузначным числом.\n");
    else
        printf("Сумма цифр не является двузначным числом.\n");

    return 0;
}

int sum_digits(int n)
{
    int hundreds;
    int tens;
    int units;
    int sum;

    hundreds = n / 100;
    tens = (n / 10) % 10;
    units = n % 10;

    sum = hundreds + tens + units;

    return sum;
}