#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int x, lcl, ucl, s;
    puts("Введите значение верхней и нижней границы для Q(x)");
    scanf("%d %d", &lcl, &ucl);
    do {
        puts("Введите значение x");
        scanf("%d", &x);
        if (x < -100) printf("Слишком малое значение x");
        else if (x < 5) {
            printf("Q(x) = %d бар(-а)\n", 4 * x + 5);
            if (4 * x + 5 >= 25 && 4 * x + 5 <= 38) puts("Значение Q(x) находится в указанном диапазоне");
            else puts("Значение Q(x) находится вне указанного диапазона");
        }
        else if (x >= 5 && x < 10) {
            printf("Q(x) = %d бар(-а)\n", 2 * x + 15);
            if (2 * x + 15 >= 25 && 2 * x + 15 <= 38) puts("Значение Q(x) находится в указанном диапазоне");
            else puts("Значение Q(x) находится вне указанного диапазона");
        }
        else if (x >= 10){
            printf("Q(x) = %d бар(-а)\n", x + 25);
            if (x + 25 >= 25 && x + 25 <= 38) puts("Значение Q(x) находится в указанном диапазоне");
            else puts("Значение Q(x) находится вне указанного диапазона");
        }
    } while (x>-100);
    return 0;
}