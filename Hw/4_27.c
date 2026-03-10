#include <stdio.h>
#include <math.h> 

int main() {
    int n, k;
    double x, sum = 1.0; 

    printf("Введіть значення x (у радіанах): ");
    scanf("%lf", &x);
    printf("Введіть кількість кроків n: ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        sum = sum + pow(sin(x), k);
    }

    printf("Результат суми: %lf\n", sum);

    return 0;
}