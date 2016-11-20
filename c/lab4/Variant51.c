#include <stdio.h>
#include <math.h>

double acosh(double d);
int main()
{
    double a, x, g, f, y, v, p;
    int z, n, j, maxi, maxi2, mini, mini2, ar;

    printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
    scanf("%d", &j);
    while ((j==1)) {

        printf("Введите x и a \n");
        scanf("%lf", &x);
        scanf("%lf", &a);
        printf("Введите количество шагов \n ");
        scanf("%d", &n);
        printf("Введите номер функции \n");
        scanf("%d", &z);
        p = x + (n * 0.1);
        double y_array[n];
        maxi, mini, maxi2, mini2, ar = 0;

        switch (z) {
            case 1:
                while ((x < p)) {
                    x += 0.1;
                    if (((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) > 0) ||
                        ((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) < 0)) {
                        g = (3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(x, 2))) /
                            (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));
                        y_array[ar] = g;
                        ar += 1;
                        printf("g= %f \n", g);

                    } else {
                        printf("Нельзя делить на НОЛЬ \n");
                    }
                }


            case 2:
                while ((x < p)) {
                    x += 0.1;
                    f = 1 / (cos(3 * pow(a, 2) + 5 * a * x + 2 * pow(x, 2)));
                    y_array[ar] = f;
                    ar += 1;
                    printf("f= %f \n", f);
                }
            case 3:

                v = (-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                while ((x < p)) {
                    x += 0.1;

                    if (v >= 1) {

                        y = acosh(-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                        y_array[ar] = y;
                        ar += 1;
                        printf("f= %f \n", y);


                    }
                    else {
                        printf("Невозможно извлечь Arccosh,пожалуйста,выберите другие переменные \n");
                    }
                }
                break;

            default:
                printf("Выберите номер функции 1,2 или 3");
        }

        printf("min = %lf \n", y_array[mini]);
        printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
        scanf("%d", &j);
    }
}




if (y_array[mini] > y_array[mini2]) {
mini = mini2;
mini2 += 1;
}
else{
mini2 += 1;
}