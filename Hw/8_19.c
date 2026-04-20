#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    
    printf("Введіть кількість рядків (n) та стовпців (m): ");
    if (scanf("%d %d", &n, &m) != 2) return 1;

    int matrix[n][m];

    printf("Введіть елементи матриці:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;

    for (int i = 0; i < n; i++) {
        int max_in_row = matrix[i][0];
        int col_index = 0;
        
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] > max_in_row) {
                max_in_row = matrix[i][j];
                col_index = j;
            }
        }

        int is_min_in_col = 1;
        for (int k = 0; k < n; k++) {
            if (matrix[k][col_index] < max_in_row) {
                is_min_in_col = 0;
                break;
            }
        }

        if (is_min_in_col) {
            printf("Знайдений елемент: %d\n", max_in_row);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("0\n");
    }

    return 0;
}