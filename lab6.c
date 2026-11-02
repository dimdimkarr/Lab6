#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void)
{
//ЗАДАНИЕ 1
int year;
int remainder;

setlocale(LC_ALL, "Russian");

printf("ЗАДАЧА 1: Проверка високосного года\n");
printf("Введите год: ");

if (scanf("%d", &year) != 1 || year <= 0)
{
printf("Ошибка: необходимо ввести положительное целое число.\n");
return 1;
}

remainder = year % 4;

if (remainder == 0)
{
if (year % 100 != 0 || year % 400 == 0)
printf("Год %d високосный.\n\n", year);
else
printf("Год %d не високосный.\n\n", year);
}
else
{
printf("Год %d не високосный.\n\n", year);
}

//ЗАДАНИЕ 2
double x;
double f_x;
int is_first_branch;

printf("ЗАДАЧА 2: Вычисление функции F(x)\n");
printf("Введите значение x: ");

if (scanf("%lf", &x) != 1)
{
printf("Ошибка: необходимо ввести число.\n");
return 1;
}

is_first_branch = (x <= 7);

f_x = is_first_branch ?
(3.0 * x - 9.0) :
(1.0 / (x * x - 4.0));

printf("Результат: F(%.2lf) = %.6lf\n", x, f_x);
printf("Ветвь функции: %s\n",
is_first_branch ? "3x - 9" : "1/(x^2 - 4)");

return 0;
}