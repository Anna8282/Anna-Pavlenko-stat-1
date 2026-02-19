#include <stdio.h>
#include <math.h>
2
double median(double a, double b, double c) {
    return 0.5 * sqrt(2*b*b + 2*c*c - a*a);
}

int main() {
    double a, b, c;
    double ma, mb, mc;

    printf("Введіть довжини сторін a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    ma = median(a, b, c);
    mb = median(b, a, c);
    mc = median(c, a, b);

    printf("Медіана ma = %.2lf\n", ma);
    printf("Медіана mb = %.2lf\n", mb);
    printf("Медіана mc = %.2lf\n", mc);

    return 0;
}
