int formula(x)
{
    if (x < -100) return 0;
    else if (x < 5) x = 4 * x + 5;
    else if (x >= 5 && x < 10) x = 2 * x + 15;
    else if (x >= 10) x = x + 25;
    return x;
}
int result(formula, lcl, ucl)
{
    if (formula == 0) return 0;
    else if (formula >= lcl && formula <= ucl) return 1;
    else return 2;
}