#include <stdio.h>
#include <math.h>
int main(void)
{
    double x,a,g;
    int  n;
    scanf("%lf", &x); scanf("%lf", &a);
    for(;;)
    {
        g = (3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(x, 2))) /
            (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));
        printf("%f\n",g);
        x += 0.1;
        n = 10;
        if ((x < x+(n*0,1))) continue;
        else break;
    }
    return 0;
}

