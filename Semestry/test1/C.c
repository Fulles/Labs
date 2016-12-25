#include<stdio.h>

int main() {
    double G,P;
    printf("Введите число: ");
    scanf("%lf", &G);
    P = G;
    while (P*P!=G){
        P = (P + (G/P))/2;
    }
    printf("Квадратный корень числа равен: %.3lf", P);
    return 0;
}