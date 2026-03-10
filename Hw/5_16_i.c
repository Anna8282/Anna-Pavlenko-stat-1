#include <stdio.h>
#include <math.h>

int main() {
    double x, eps;
    printf("Введіть x (де |x| < 1): ");
    scanf("%lf", &x);
    printf("Введіть точність epsilon: ");
    scanf("%lf", &eps);

    double sum = 1.0;      
    double term = 1.0;     
    int n = 1;

    do {
        term = -term * x * (n + 2) / n;
        sum += term;
        n++;
    } while (fabs(term) > eps);

    printf("Результат суми: %lf\n", sum);
    printf("Точне значення 1/(1+x)^3: %lf\n", 1.0 / pow(1 + x, 3));

    return 0;
}