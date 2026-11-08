#define _CRT_SECURE_NO_WARNINGS
#define HEADER_H
#ifndef HEADER_H
#endif
#include<stdio.h>
#include<locale.h>
#include"header.h"
int calc(int x);
int check_state(int q, int lcl,int ucl);
int input(void);
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int x, lcl, ucl, a, q, r;
    puts("Здравствуйте, это программа для вычисления значения давления Q(x) компрессорной установки");
    puts("Введите значение верхней и нижней границы для Q(x) и значение x");
    lcl = input();
    ucl = input();
    x = input();
    q = calc(x);
    r = check_state(q, lcl, ucl);
    do {
        puts("\nВыберите действие");
        puts("\n1 - Проверить значение на соответствие заданному диапазону\n2 - Вывести значение Q(x)\n0 - Конец\n");
        scanf("%d",&a);
        switch (a)
        {
        case(1):
            printf("\n1 - Значение Q(x) входит в указанный диапазон\n2 - Значение Q(x) не входит в указаннуй диапазон\n0 - Значение x слишком мало");
            printf("\nОтвет: %d\n", r);
            puts("***************************************");
            break;
        case(2):
            calc(x);
            printf("\nЗначение Q(x) = %d бар(-а)\n", q);
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
