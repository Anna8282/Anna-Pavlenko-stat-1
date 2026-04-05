#include <stdio.h>
#include <string.h>

#define MAX_PEOPLE 100
#define MAX_NAME_LEN 50

struct Person {
    int nameIndex; 
    char gender;   
    double height; 
};

double averageFemaleHeight(struct Person p[], int n) {
    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].gender == 'f' || p[i].gender == 'F') {
            sum += p[i].height;
            count++;
        }
    }
    return (count > 0) ? sum / count : 0;
}

const char* tallestMaleName(char L[][MAX_NAME_LEN], struct Person p[], int n) {
    int tallestIndex = -1;
    double maxHeight = -1;

    for (int i = 0; i < n; i++) {
        if ((p[i].gender == 'm' || p[i].gender == 'M') && p[i].height > maxHeight) {
            maxHeight = p[i].height;
            tallestIndex = p[i].nameIndex;
        }
    }

    if (tallestIndex != -1) {
        return L[tallestIndex];
    }
    return "Чоловіків не знайдено";
}

int main() {
    char L[3][MAX_NAME_LEN] = {"Анна", "Іван", "Марія"};

    struct Person P[3] = {
        {0, 'f', 170.5}, // Анна
        {1, 'm', 185.0}, // Іван
        {2, 'f', 165.0}  // Марія
    };

    printf("Середній зріст жінок: %.2f см\n", averageFemaleHeight(P, 3));
    printf("Найвищий чоловік: %s\n", tallestMaleName(L, P, 3));

    return 0;
}