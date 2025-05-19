#include<stdio.h>
#include<stddef.h>
#include"vettori.h"
#define N 5

int main(void){
    double x[N] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double y[N] = {5.0, 4.0, 3.0, 2.0, 1,.0};
    size_t n = sizeof(x) / sizeof(double);
    double ps = prodotto_scalare(x,y,n);
    
    printf("x\t");
    for(int i=0; i<N; i++){
        printf("%1.1f\t", x[i]);
    }
    printf("\n");
    printf("y\t");
    for(int i=0; i<N; i++){
        printf("%1.1f\t", y[i]);
    }
    printf("\n");
    printf("<x,y>\t");
    for(int i=0; i<N; i++){
        printf("%0.1f\t", x[i]*y[i]);
    }
    printf("%.1lf\n", ps);
    return 0;
}