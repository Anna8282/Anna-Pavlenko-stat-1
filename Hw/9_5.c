#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double** create_matrix(int n, int m) {
    double **matrix = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double *)malloc(m * sizeof(double));
    }
    return matrix;
}

void free_matrix(double **matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void calculate_results(double **a, int n, int m) {
    int rank = 0;
    double det = 1.0;
    
    if (n != m) det = 0;

    for (int i = 0; i < n && rank < m; i++) {
        int pivot = i;
        while (pivot < n && fabs(a[pivot][rank]) < 1e-9) pivot++;

        if (pivot == n) {
            det = 0; 
            continue;
        }

        double *temp = a[i];
        a[i] = a[pivot];
        a[pivot] = temp;
        if (i != pivot) det = -det;

        det *= a[i][rank];

        for (int k = i + 1; k < n; k++) {
            double factor = a[k][rank] / a[i][rank];
            for (int j = rank + 1; j < m; j++) {
                a[k][j] -= factor * a[i][j];
            }
        }
        rank++;
    }

    printf("\n--- Результати ---\n");
    printf("Ранг матриці: %d\n", rank);
    if (n == m) {
        printf("Детермінант: %.2f\n", det);
    } else {
        printf("Детермінант неможливо обчислити (матриця не квадратна).\n");
    }
}

int main() {
    int n, m;
    printf("Введіть кількість рядків та стовпців: ");
    scanf("%d %d", &n, &m);

    double **matrix = create_matrix(n, m);

    printf("Введіть елементи матриці:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    calculate_results(matrix, n, m);

    free_matrix(matrix, n);
    return 0;
}