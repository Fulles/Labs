
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    struct
    {
        int id;
        float height;
        char color[255];
        char material[255];

    } chair;


    chair.id = 42;
    chair.height = 2.54;
    strcpy(chair.color, "green");
    strcpy(chair.material, "wood");

    printf("The chair have: id=%d, height=%2.5f, color=%s, material=%s\n", chair.id, chair.height, chair.color, chair.material);
    return 0;
}


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
double acosh(double d);
int main()
{
    double a_from, x, g, f, y, v, p, a, a_to, ad, i;
    int n, j, maxi, maxi2, mini, mini2, ar, tabul, cnt, ars, n2, pp, ho;
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
        n = atof(string_array);



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

            }}