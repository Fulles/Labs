import math
'''Ввод данных'''
x = float(input("Введите x "))
a = float(input("Введите a "))
z = int(input("Введите номер функции "))
'''Первая функция'''
if z == 1:
    t = (35*a**2+37*a*x+6*x**2)
    if t == 0.00:
        print("Нельзя делить на НОЛЬ")

    else:
        g = (3*(-3*a**2+2*a*x+21*x**2))/(35*a**2+37*a*x+6*x**2)
        print("g= %.3f" % g)
    '''Вторая функция'''
elif z == 2:
    f = 1/(math.cos(3*a**2+5*a*x+2*x**2))
    print("f= %.3f" % f)
    '''Третья функция'''
elif z == 3:
    v = (-12*a**2-4*a*x+x**2+1)
    if v >= 1:
        y = math.acosh(-12*a**2-4*a*x+x**2+1)
        print("y= %.3f" % y)
    else:print("Не существует ARCCOSH от заданных переменных, Пожалуйста,введите другие значения переменных ")

else:print("Выберите функцию 1,2 или 3")

