#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("Оберіть задачу:\n1 - Сума 10-значних чисел\n2 - Матриця (детермінант та ранг)\nВаш вибір: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int n;
        printf("Скільки буде чисел? ");
        scanf("%d", &n);

        unsigned long long sum = 0;
        unsigned long long current_num;

        printf("Вводьте цифри (по 10 для кожного числа):\n");
        for (int i = 0; i < n; i++) {
            scanf("%10llu", &current_num);
            sum += current_num;
        }
        printf("Результат суми: %llu\n", sum);

    } else if (choice == 2) {
        int rows, cols;
        printf("Введіть кількість рядків та стовпців: ");
        scanf("%d %d", &rows, &cols);

        double **matrix = (double **)malloc(rows * sizeof(double *));
        for (int i = 0; i < rows; i++) {
            matrix[i] = (double *)malloc(cols * sizeof(double));
        }

        printf("Заповніть матрицю числами:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%lf", &matrix[i][j]);
            }
        }

        int rank = 0;
        for (int i = 0; i < rows && rank < cols; i++) {
            int pivot = i;
            while (pivot < rows && matrix[pivot][rank] == 0) pivot++;

            if (pivot < rows) {
                double *temp = matrix[i];
                matrix[i] = matrix[pivot];
                matrix[pivot] = temp;

                for (int k = i + 1; k < rows; k++) {
                    double factor = matrix[k][rank] / matrix[i][rank];
                    for (int j = rank; j < cols; j++) {
                        matrix[k][j] -= factor * matrix[i][j];
                    }
                }
                rank++;
            }
        }

        printf("Приблизний ранг матриці: %d\n", rank);
        printf("(Для детермінанта потрібно, щоб матриця була квадратною)\n");

        for (int i = 0; i < rows; i++) free(matrix[i]);
        free(matrix);
    }

    return 0;
}