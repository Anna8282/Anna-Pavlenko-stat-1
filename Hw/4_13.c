#include <stdio.h>
#include <math.h> 

int main() {
    int n, k;
    double x, y = 0;

    printf("Введіть n (ціле число): ");
    scanf("%d", &n);
    printf("Введіть x (число від 0 до 1): ");
    scanf("%lf", &x);

    for (k = 0; k <= n; k++) {
        y = y + k * pow(x, k) * pow(1 - x, n - k);
    }

    printf("Результат y = %lf\n", y);

    return 0;
}