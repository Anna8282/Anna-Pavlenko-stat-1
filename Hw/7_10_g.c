#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Введіть кількість елементів n: ");
    scanf("%d", &n);

    int a[n];
    printf("Введіть %d цілих чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k = (int)sqrt(n);
    int count = 0;

    for (int i = 0; i < k; i++) {
        if ((a[i] * a[i]) % 2 == 0) {
            count++;
        }
    }

    printf("Кількість парних квадратів серед перших %d елементів: %d\n", k, count);

    return 0;
}