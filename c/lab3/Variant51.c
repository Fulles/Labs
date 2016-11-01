#include <stdio.h>
#include <math.h>

double acosh(double d);

int main() {
    double a, x, g, f, y, v;
    int z, n ;

    printf("Введите x и a \n");
    scanf("%lf", &x);
    scanf("%lf", &a);

    printf("Введите номер функции \n");
    scanf("%d", &z);

    printf("Введите количество шагов(1 шаг равен 0,1 )\n");
    scanf("%d", n);
    for(;;)
    {


        switch (z) {
            case 1:
                if (((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) >= 0) &&
                    ((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) <= 0)) {
                    printf("Нельзя делить на НОЛЬ");
                    if (x < x+n*0,1) continue;
                    else break;
                } else {
                    g = (3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(x, 2))) /
                        (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));
                    printf("g= %f \n", g);
                    break;
                }

            case 2:
                f = 1 / (cos(3 * pow(a, 2) + 5 * a * x + 2 * pow(x, 2)));
                printf("f= %f \n", f);
                break;
            case 3:
                v = (-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                if (v >= 1) {
                    y = acosh(-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                    printf("f= %f \n", y);
                } else {
                    printf("Невозможно извлечь Arccosh,пожалуйста,выберите другие переменные");
                }

                break;
            default:
                printf("Выберите номер функции 1,2 или 3");
        }

        return 0;

    }
}
