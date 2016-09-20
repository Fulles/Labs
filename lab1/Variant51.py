import math
x = float(input("Введите x "))
a = float(input("Введите a "))
z = int(input("Введите номер функции "))
if z == 1:
    g = (3*(-3*a**2+2*a*x+21*x**2))/(35*a**2+37*a*x+6*x**2)
    print("g= %.3f" % g)
elif z == 2:
    f = 1/(math.cos(3*a**2+5*a*x+2*x**2))
    print("f= %.3f" % f)
elif z == 3:
    y = math.acosh(-12*a**2-4*a*x+x**2+1)
    print("y= %.3f" % y)

