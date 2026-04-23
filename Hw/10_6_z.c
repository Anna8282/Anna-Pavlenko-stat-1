#include <stdio.h>

struct Point3D {
    double x, y, z;
};

struct Parallelepiped {
    struct Point3D minPoint;
    struct Point3D maxPoint;
};

void inputParallelepiped(struct Parallelepiped *p) {
    printf("Введіть координати мінімальної точки (x y z): ");
    scanf("%lf %lf %lf", &p->minPoint.x, &p->minPoint.y, &p->minPoint.z);
    
    printf("Введіть координати максимальної точки (x y z): ");
    scanf("%lf %lf %lf", &p->maxPoint.x, &p->maxPoint.y, &p->maxPoint.z);
}

void outputParallelepiped(struct Parallelepiped p) {
    printf("\nПрямокутний паралелепіпед:\n");
    printf("Точка Min: (%.2f, %.2f, %.2f)\n", p.minPoint.x, p.minPoint.y, p.minPoint.z);
    printf("Точка Max: (%.2f, %.2f, %.2f)\n", p.maxPoint.x, p.maxPoint.y, p.maxPoint.z);
    
    double a = p.maxPoint.x - p.minPoint.x;
    double b = p.maxPoint.y - p.minPoint.y;
    double c = p.maxPoint.z - p.minPoint.z;
    
    printf("Довжини сторін: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("Об'єм: %.2f\n", a * b * c);
}

int main() {
    struct Parallelepiped myBox;
    
    inputParallelepiped(&myBox);
    outputParallelepiped(myBox);
    
    return 0;
}