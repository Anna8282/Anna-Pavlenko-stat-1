#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    double x, sum = 1.0;
    
    printf("Введіть x та n: ");
    scanf("%lf %d", &x, &n);
    
    for(k = 1; k <= n; k++) {
        sum += pow(sin(x), k);
    }
    
    printf("Результат: %lf", sum);
    return 0;
}