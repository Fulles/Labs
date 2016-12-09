#include <stdio.h>
#include <math.h>
#include <string.h>

double acosh(double d);
int main()
{
    double a_from, x, g, f, y, v, p, a, a_to, ad, i;
    int z, n, j, maxi, maxi2, mini, mini2, ar, tabul, cnt, ars, n2, pp, ho;
    char string_array[999], string_array2[9999], shable[1024];
    int compare = 100;
    printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
    scanf("%d", &j);
    while ((j==1)) {

        printf("Введите x \n");
        scanf("%lf", &x);
        printf("Введите a oт \n");
        scanf("%lf", &a_from);
        printf("Введите a до \n");
        scanf("%lf", &a_to);
        printf("Введите количество шагов \n ");
        scanf("%d", &n);
        printf("Введите номер функции \n");
        scanf("%d", &z);
        printf("Введите шаблон \n");
        scanf("%s", shable);
        p = x + (n * 0.1);

        ad = (a_to-a_from)/n;
        double y_array[n];
        double x_array[n];
        cnt = sizeof(y_array)/ sizeof(double);
        ;
        maxi, mini, maxi2, mini2, ar, ars, pp = 0;


        switch (z) {
            case 1:
                while ((x < p)) {
                    x += 0.1;

                    if (((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) > 0) ||
                        ((35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)) < 0)) {
                        for (i =a_from ; i < a_to; i+=ad)
                            a = i;
                        g = (3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(x, 2))) /
                            (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));
                        x_array[ar] = x;
                        y_array[ar] = g;
                        ar += 1;
                        printf("g= %lf \n", g);
                        if (y_array[maxi] < y_array [maxi2]) {
                            maxi = maxi2;
                            maxi2 += 1;
                        } else {
                            maxi2 +=1;
                        }
                        if (y_array[mini] > y_array [mini2]) {
                            mini = mini2;
                            mini2 += 1;
                        } else {
                            mini2 +=1;
                        }

                    } else {
                        printf("Нельзя делить на НОЛЬ \n");
                    }
                }


            case 2:
                while ((x < p)) {
                    x += 0.1;
                    for (i =a_from ; i < a_to; i+=ad)
                        a = i;
                    f = 1 / (cos(3 * pow(a, 2) + 5 * a * x + 2 * pow(x, 2)));
                    x_array[ar] = x;
                    y_array[ar] = f;
                    ar += 1;
                    printf("f= %lf \n", f);
                    if (y_array[maxi] < y_array [maxi2]) {
                        maxi = maxi2;
                        maxi2 += 1;
                    } else {
                        maxi2 +=1;
                    }
                    if (y_array[mini] > y_array [mini2]) {
                        mini = mini2;
                        mini2 += 1;
                    } else {
                        mini2 +=1;
                    }
                }
            case 3:

                v = (-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                while ((x < p)) {
                    x += 0.1;
                    for (i =a_from ; i < a_to; i+=ad)
                        a = i;
                    if (v >= 1) {

                        y = acosh(-12 * pow(a, 2) - 4 * a * x + pow(x, 2) + 1);
                        x_array[ar] = x;
                        y_array[ar] = y;
                        ar += 1;
                        printf("f= %lf \n", y);
                        if (y_array[maxi] < y_array [maxi2]) {
                            maxi = maxi2;
                            maxi2 += 1;
                        } else {
                            maxi2 +=1;
                        }
                        if (y_array[mini] > y_array [mini2]) {
                            mini = mini2;
                            mini2 += 1;
                        } else {
                            mini2 +=1;
                        }
                    }
                    else {

                        printf("Невозможно извлечь Arccosh,пожалуйста,выберите другие переменные \n");
                    }
                }
                break;

            default:
                printf("Выберите номер функции 1,2 или 3");
        }
        while (tabul < n ) {
            printf("%lf\t",y_array[tabul]);
            printf("X = %lf\n",x_array[tabul]);
            tabul+=1;

        }
        printf("Наибольшее число массива = %lf \n", y_array[maxi]);
        printf("Наименьшее число массива = %lf \n", y_array[mini]);
        while (ars < n){
            sprintf(string_array, "%lf", y_array[ars]);
            strcat(string_array2, string_array);
            ars++;
        }
        printf("%s \n" , string_array2);
        ho = strstr(string_array2, shable);
        printf("Жулик = %d \n",ho);
        printf("Хотите запустить программу? Нажмите 1 для продолжения, 2 для выхода \n");
        scanf("%d", &j);
    }

}
