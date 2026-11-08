#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calc(int x)
{
    if (x < -10) return 0;
    else if (x < 5) x = 4 * x + 5;
    else if (x >= 5 && x < 10) x = 2 * x + 15;
    else if (x >= 10) x = x + 25;
    return x;
}
int check_state(int q,int lcl,int ucl)
{
    if (q == 0) return 0;
    else if (q >= lcl && q <= ucl) return 1;
    else return 2;
}
int input(void)
{
    int x;
    scanf("%d", &x);
    return x;
}