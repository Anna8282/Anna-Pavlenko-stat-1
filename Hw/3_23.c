#include <stdio.h>

double leakyReLU(double x, double a) {
    if (x < 0)
        return a * x;
    else
        return 0;
}

double dleakyReLU(double x, double a) {
    if (x < 0)
        return a;
    else
        return 0;
}

int main() {
    double x, a;

    printf("Введіть x та a: ");
    scanf("%lf %lf", &x, &a);

    printf("leakyReLU(x,a) = %.4lf\n", leakyReLU(x, a));
    printf("Похідна = %.4lf\n", dleakyReLU(x, a));

    return 0;
}
