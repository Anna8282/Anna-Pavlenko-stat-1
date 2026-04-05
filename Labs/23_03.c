// н. 1 б)
/*
struct Field{
    char vert;
    unsigned char hor;
};

void printfield(struct Field x){
    printf("%c %hhu", x.vert, x.hor);
}


struct Field inputfield(){
    struct Field f;
    printf("Input chess field:");
    scanf("%c %hhu", &f.vert, &f.hor);
    return f;
}


int main(){
    struct field y;
    y = inputfield();
    printfield(y);
}
*/


//н. 1 a)

/*
struct Date{
    int day;
    int month;
    int year;
};

void printdate(struct Date x){
    printf("%2d.%2d.%4d", x.day, x.month, x.year);
}


int inputdate(struct Date *x){
    printf("Введіть дату:")
    scanf("%d %d %d, &x->day, &x->month, &x->year");
    return true;
}

int main(){
    struct Date y;
    inputdate(&y);
    printdate(y);
}
*/


//н. 
/*
#include <stdio.h>
 struct vertex{
    double x, y;
};

srtuct Rectangle{
    struct vertex lu, rb;
};

void print_Rectangle(struct Rectangle*x){
    printf("(%lf, %lf)->(%lf, %lf)", x->lu.x, x->lu.y, x->rb.y);
}

int input_Rectangle(struct Rectangle*x){
    printf("Input coordinats lu and rb:");
    scanf("%lf %lf", &x->lu.x, &x->lu.y);
    scanf("%lf %lf", &x->rb.x, &x->rb.y);
    return true;
}
*/


//н. 
/*
#include <stdio.h>

struct Polinome {
    size_t n;
    double *x;
};

void print_Polinome(struct Polinome*y){
    printf("%lf", y->x[0]);
    for (size_f i=1, i<y->n, i++){
        printf("+%lf*x^%zu", y->x[i], i);
    }
    }


int input_Polinome(struct Polinome*y){
    y->x=(double*) malloc(y->n*sixe_off(double));
    printf("n=");
    scanf("%zu", &y->n);
    for (size_f i=1, i<y->n, i++){
        printf("a[%zu]", i);
        scanf("%lf", &y->x->x[i]);}
}


void delete_Polinome(struct Polinome*y){
    if (y&&y->x)free(y->x);
}


int main(){
    struct Polinome a;
    input_Polinome(&a);
    output_Polinome(&a);
    delete_Polinome(&a);
}
*/


//

bool queen_turn(struct field f1, struct field f2){
    if (f1.vert==f2.vert || f1.hor==f2.hor || f1.vert-f2.vert == f1.hor-f2.hor || f2.vert-f1.vert==f1.hor-f2.hor);
    return true;
    else return false;
    }