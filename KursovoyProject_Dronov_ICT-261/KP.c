#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include"header.h"
int formula(x);
int result(formula);
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int x, lcl, ucl, a;
    puts("Введите значение верхней и нижней границы для Q(x)");
    scanf("%d %d", &lcl, &ucl);
    do {
        puts("\nВыберите действие");
        puts("\n1 - Проверить значение на соответствие заданному диапазону\n2 - Вывести значение Q(x)\n0 - Конец\n");
        scanf("%d",&a);
        switch (a)
        {
        case(1):
            puts("\nВведите значение x");
            scanf("%d", &x);
            printf("\n1 - Значение Q(x) входит в указанный диапазон\n2 - Значение Q(x) не входит в указаннуй диапазон\n0 - Значение x слишком мало");
            int r = result(formula(x), lcl, ucl);
            printf("\nОтвет: %d\n", r);
            puts("***************************************");
            break;
        case(2):
            puts("\nВведите значение x");
            scanf("%d", &x);
            int f = formula(x);
            printf("\nЗначение Q(x) = %d бар(-а)\n", f);
            puts("***************************************");
            break;
        case(0):
            puts("\nКонец");
            break;
        default:
            puts("\nНеверная команда");
        }
    } while (a != 0);
    return 0;
}