#include <stdio.h>
#include <math.h>

int main() {
    double r, a, b, c;
    double y1, y2;
    int count = 0;

    printf("Введіть r, a, b, c: ");
    scanf("%lf %lf %lf %lf", &r, &a, &b, &c);

    if (r*r - a*a < 0) {
        printf("Кількість точок перетину: 0\n");
        return 0;
    }

    y1 = sqrt(r*r - a*a);
    y2 = -y1;

    if (y1 >= b && y1 <= b + c*c)
        count++;

    if (y2 >= b && y2 <= b + c*c)
        count++;

    printf("Кількість точок перетину: %d\n", count);

    return 0;
}
