#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int x, lcl, ucl;
    puts("Введите значение верхней и нижней границы");
    scanf("%d %d", &lcl, &ucl);
    for (x = lcl; x <= ucl; x++)
    {
        if (x < 5) printf("Q(x) = %d бар(-а)\n", 4 * x + 5);
        else if (x >= 5 && x < 10) printf("Q(x) = %d бар(-а)\n", 2 * x + 15);
        else printf("Q(x) = %d бар(-а)\n", x + 25);
        // при lcl = 25 и ucl = 38 значения Q(x) = 50,51,52,53,54,55,56,57,58,59,60,61,62,63 бар(-а)
    }
}