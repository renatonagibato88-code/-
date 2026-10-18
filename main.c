#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculateQ(double x)
{
    if (x < 1.5)
    {
        return (x - 1.5) * (x - 1.5) / 1.0 + 8;
    }
    else if (x <= 3.5)
    {
    
        return 2 * sqrt(x - 2.5 + 2) + 42;
    }
    else
    {
        return 3 * (x - 3.5) + 60;
    }
}

int main()
{
    double x;
    double q;

    printf("Введите давление на выходе X: ");
    scanf("%lf", &x);

    q = calculateQ(x);

    printf("Q = %.2f\n", q);

    return 0;
}
