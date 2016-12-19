#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
double acosh(double d);
int main()
{
    double a_from, x, g, f, y, v, p, a, a_to, ad, i;
    int n, j, maxi, maxi2, mini, mini2, ar, tabul, cnt, ars, n2, pp, ho, t, r;
    char string_array[999], string_array2[9999], shable[1024];
    int compare = 100;
    printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
    scanf("%d", &j);
    while ((j==1)) {

        printf("Введите x \n");
        scanf("%s", string_array);
        x = atof(string_array);
        printf("Введите a oт \n");
        scanf("%s", string_array);
        a_from = atof(string_array);
        printf("Введите a до \n");
        scanf("%s", string_array);
        a_to = atof(string_array);
        printf("Введите количество шагов \n ");
        scanf("%s", string_array);
        n = atoi(string_array);
        p = x + (n * 0.1);
        ad = (a_to-a_from)/n;
        double y_array[n];
        double x_array[n];
        maxi, mini, maxi2, mini2, ar, t, r = 0;



                while ((x < p)) {
                    x += 0.1;
                    for (i =a_from ; i < a_to; i+=ad)
                        a = i;
                    if (((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) > 0) ||
                        ((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) < 0)) {
                        g = (3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(x, 2))) /
                            (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));
                        }
                        else {
                        printf("Нельзя делить на ноль \n");
                    }
                    v = (-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                    if (v >= 1) {
                        y = acosh(-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                        printf("y = %lf \n", y);
                    }else {
                        printf("\n");
                    }
                    f = 1 / (cos(3 * pow(a, 2) + 5 * a * x + 2 * pow(x, 2)));
                    struct {
                        double x[100];
                        int id[100];
                        double f[100];
                    } G_function;
                    G_function.x[r] = x;
                    G_function.id[r] = t;
                    G_function.f[r] = g;

                    struct {
                        double x[100];
                        int id[100];
                        double f[100];
                    } F_function;
                    F_function.x[ar] = x;
                    F_function.id[ar] = t;
                    F_function.f[ar] = f;

                    struct {
                        double x[100];
                        int id[100];
                        double f[100];
                    } Y_function;
                    Y_function.x[maxi] = x;
                    Y_function.id[maxi] = t;
                    Y_function.f[maxi] = y;
                    t+= 1;
                    printf("F_function id = %.0i , x = %.3lf, F = %.3lf \n" , F_function.id[ar] , F_function.x[ar], F_function.f[ar]);
                    printf("Y_function id = %.0i , x = %.3lf, Y = %.3lf \n" , Y_function.id[maxi] , Y_function.x[maxi], Y_function.f[maxi]);
                    printf("G_function id = %.0i , x = %.3lf, G = %.3lf \n" , G_function.id[r] , G_function.x[r], G_function.f[r]);
                    r+= 1;
                    ar+= 1;

                }

        printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
        scanf("%d", &j);
    }}





