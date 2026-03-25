#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


//№1 
/*#include <stdio.h>
#include <stdlib.h>


size_t input(double*r, size_t n);{
    for(size_t i=0, i<n; i++);{
        printf("r[%u]=", i);
        int a = scanf("%lf", &r[i]);
        if (a !=1) return i ;
    }
return n;    
}
double sum_sqr(double*r, size_t n);{
    double s=0;
    for(size_t i=0, i<n; i++);{
        S+=r[i]*r[i];
    }
return s;
}
void task_1();{
size_t n;
scanf("%zn", &n);
double*r=(double*);
malloc(size of(double)*n);
size_t k = input(a,n);
double sum= sum_sqr(r,k);
printf ("sum=%lf", sum);
free(r);
}*/

//№2
/*
main () {
size_t input(double*r, size_t n);{
    for(size_t i=0, i<n; i++);{
        printf("r[%u]=", i);
        int a = scanf("%lf", &r[i]);
        if (a !=1) return i ;
    }
return n;    
}

bool is_sqr(int){
    int m = floor(sqrt(n));//floor округлення знизу цілої частини
    return m*m == n;}
}
}
*/


//№3


double* inputh(intn){
    double* h = (double*)c_alloc(sizeof(double));
    for (int=0; i<n; i++){
        scanf("%lf", &h[i]);}
        return h;
    }

int diff(const double* v1,const double* v2, double* v3, int n){
    for (int i=0; i<n; i++){
        v3[i]=v1[i]-v2[i];
    }
    return 0;
}

void task_3(){
    int n;
    double* v1= inputh(n);
    double* v2= inputh(n);
    double* v3= c_alloc(n, sizeof*v3);
    diff(v1,v2,v3,n);
    for (int i=0; i<n; i++){
        printf("%lf", v3[i]);
    }
free(v1);
free(v2);
free(v3);
}