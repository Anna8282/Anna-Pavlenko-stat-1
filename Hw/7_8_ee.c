#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPerfectSquare(long long x) {
    if (x < 0) return false;
    long long s = (long long)sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5LL * n * n + 4) || isPerfectSquare(5LL * n * n - 4);
}

int main() {
    int N, count = 0;

    printf("Введіть розмір масиву N: ");
    scanf("%d", &N);

    int arr[N];
    printf("Введіть %d натуральних чисел:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        if (isFibonacci(arr[i])) {
            count++;
        }
    }

    printf("Кількість чисел Фібоначчі в масиві: %d\n", count);

    return 0;
}