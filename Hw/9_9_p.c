#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatrix(double **matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%7.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Введіть розмір матриці N x M: ");
    scanf("%d %d", &n, &m);

    double **matrix = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double *)malloc(m * sizeof(double));
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = ((double)rand() / RAND_MAX) * 7.0 - 2.0;
        }
    }

    printf("\nПочаткова матриця:\n");
    printMatrix(matrix, n, m);

    int new_m = 0;
    for (int j = 0; j < m; j++) {
        int all_less_than_one = 1;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] >= 1.0) {
                all_less_than_one = 0;
                break;
            }
        }

        if (!all_less_than_one) {
            if (new_m != j) {
                for (int i = 0; i < n; i++) {
                    matrix[i][new_m] = matrix[i][j];
                }
            }
            new_m++;
        }
    }

    m = new_m;

    printf("\nМатриця після видалення стовпців (де всі елементи < 1):\n");
    if (m > 0) {
        printMatrix(matrix, n, m);
    } else {
        printf("Усі стовпці було видалено.\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}