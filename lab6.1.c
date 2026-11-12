#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int check_year(int year);

int main(void)
{
    int year;
    int result;

    setlocale(LC_ALL, "Russian");

    printf("ЗАДАЧА 1: Проверка високосного года\n");
    printf("Введите год: ");

    if (scanf("%d", &year) != 1 || year <= 0)
    {
        printf("Ошибка: необходимо ввести положительное целое число.\n");
        return 1;
    }

    result = check_year(year);

    if (result)
        printf("Год %d високосный.\n\n", year);
    else
        printf("Год %d не високосный.\n\n", year);

    return 0;
}

int check_year(int year)
{
    int remainder;

    remainder = year % 4;

    if (remainder == 0)
    {
        if (year % 100 != 0 || year % 400 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        return 0;
    }
}