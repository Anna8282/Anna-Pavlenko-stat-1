#include <stdio.h>
#include <math.h>

// функція f(x)
double f(double x) {
    return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
}

// похідна f'(x)
double df(double x) {
    double fx = f(x);
    return 1 - fx * fx;
}

int main() {
    double x;

    printf("Введіть x: ");
    scanf("%lf", &x);

    printf("f(x) = %.4lf\n", f(x));
    printf("f'(x) = %.4lf\n", df(x));

    return 0;
}
