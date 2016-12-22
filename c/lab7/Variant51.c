#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
double acosh(double d);
int main()
{
    double a_from, x, g, f, y, v, p, a, a_to, ad, i, txt1, txt2;
    int n, j, maxi, maxi2, mini, mini2, ar, tabul, cnt, ars, n2, pp, ho, t, r, txt;
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
        maxi, mini, maxi2, mini2, ar, r = 0;
        t = 1;
        FILE *file, *file1;
        file = (FILE *)fopen("/home/fullen/Labs/c/lab7/sososo", "w+");
        struct {
            double x[100];
            int id[100];
            double f[100];
        } G_function;
        struct {
            double x[100];
            int id[100];
            double f[100];
        } Y_function;
        struct {
            double x[100];
            int id[100];
            double f[100];
        } F_function;

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
                printf("\n");

            }else {
                printf("\n");
            }
            f = 1 / (cos(3 * pow(a, 2) + 5 * a * x + 2 * pow(x, 2)));

            G_function.x[r] = x;
            G_function.id[r] = t;
            G_function.f[r] = g;


            F_function.x[ar] = x;
            F_function.id[ar] = t;
            F_function.f[ar] = f;

            fprintf(file, "F_function_id_=_%.0i_,_x_=_%.3lf,_F_=_%.3lf \n" , F_function.id[ar] , F_function.x[ar], F_function.f[ar] );


            Y_function.x[maxi] = x;
            Y_function.id[maxi] = t;
            Y_function.f[maxi] = y;
            t+= 1;
            printf("F_function id = %.0i , x = %.3lf, F = %.3lf \n" , F_function.id[ar] , F_function.x[ar], F_function.f[ar]);
            printf("Y_function id = %.0i , x = %.3lf, Y = %.3lf \n" , Y_function.id[maxi] , Y_function.x[maxi], Y_function.f[maxi]);
            printf("G_function id = %.0i , x = %.3lf, G = %.3lf \n" , G_function.id[r] , G_function.x[r], G_function.f[r]);

            r+= 1;
            ar+= 1;
            maxi+= 1;
        }

        fclose(file);
        memset(&Y_function, 0, sizeof(Y_function));
        file1 = fopen("/home/fullen/Labs/c/lab7/sososo","r");
        while (!feof(file1))
        {
            fscanf(file1, "%s ", shable);
            printf("%s\n", shable);

        }
        fclose(file1);
        printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
        scanf("%d", &j);
    }}






