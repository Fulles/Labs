#include <stdio.h>
#include <math.h>

double acosh(double d);

int main()
{
    double a, x, g, f, y ;

    printf ( "Введите x и a \n" );
    scanf ( "%lf", &x );
    scanf ( "%lf", &a );
    g = (3*(-3*pow(a,2)+2*a*x+21*pow(x,2)))/(35*pow(a,2)+37*a*x+6*pow(x,2));
    f = 1/(cos(3*pow(a,2)+5*a*x+2*pow(x,2)));
    y = acosh(-12*pow(a,2)-4*a*x+pow(x,2)+1);
    printf ("g= %f \n", g) ;
    printf ("f= %f \n", f) ;
    printf ("y= %f \n", y) ;

    return 0;

}