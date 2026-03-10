#include <stdio.h>

int main() {
    double a, t, v;
    double s, time_to_v;

    printf("Введіть прискорення a: ");
    scanf("%lf", &a);

    printf("Введіть час t: ");
    scanf("%lf", &t);

    printf("Введіть швидкість v: ");
    scanf("%lf", &v);

    s = a * t * t / 2;

    time_to_v = v / a;

    printf("\nВідстань s = %.2lf\n", s);
    printf("Час досягнення швидкості v = %.2lf\n", time_to_v);

    return 0;
}
