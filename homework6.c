#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
//ЗАДАНИЕ 3(Вариант 7)
int main(void)
{
    int n;
    int sum = 0;
    int temp;

    setlocale(LC_ALL, "Russian");

    printf("ДОМАШНЕЕ ЗАДАНИЕ. Вариант 7\n");
    printf("Введите число N (от 0 до 999): ");

    if (scanf("%d", &n) != 1 || n < 0 || n >= 1000)
    {
        printf("Ошибка: необходимо ввести число от 0 до 999.\n");
        return 1;
    }

    temp = n;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Сумма цифр числа %d: %d\n", n, sum);

    if (sum >= 10 && sum <= 99)
    {
        printf("Сумма цифр является двузначным числом.\n");
    }
    else
    {
        printf("Сумма цифр не является двузначным числом.\n");
    }

    return 0;
}