import math
from matplotlib import pyplot as plt
'''Ввод данных'''
start = int(input("Хотите запустить программу? Если да,то нажмите 1 \n"))
while start == 1:
    x = float(input("Введите x \n"))
    a = float(input("Введите a \n"))
    z = int(input("Введите номер функции \n"))
    n = int(input("Введите количество шагов \n"))
    o = x+(n*0.1)
    x_values = []
    y_values = []

    while x < o:
        x += 0.1
        '''Первая функция'''
        if z == 1:
            if ((35*a**2+37*a*x+6*x**2) > 0) or ((35*a**2+37*a*x+6*x**2) < 0):
                g = (3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)) / (35 * a ** 2 + 37 * a * x + 6 * x ** 2)
                print("g= %.3g" % g)
                x_values.append(x)
                y_values.append(g)
                plt.title('График g')
            else:
                print("Нельзя делить на НОЛЬ")
            '''Вторая функция'''
        elif z == 2:
            f = 1/(math.cos(3*a**2+5*a*x+2*x**2))
            print("f= %.3f" % f)
            x_values.append(x)
            y_values.append(f)
            plt.title('График f')
            '''Третья функция'''
        elif z == 3:
            v = (-12*a**2-4*a*x+x**2+1)
            if v >= 1:
                y = math.acosh(-12*a**2-4*a*x+x**2+1)
                print("y= %.3f" % y)
                x_values.append(x)
                y_values.append(y)
                plt.title('График y')
            else:
                print("Не существует ARCCOSH от заданных переменных, Пожалуйста,введите другие значения переменных ")

        else:
            print("Выберите функцию 1,2 или 3")
    plt.plot(x_values, y_values)
    plt.grid()
    plt.xlabel('X')
    plt.ylabel('Y')
    plt.show()

start = int(input("Хотите запустить программу? Если да,то нажмите 1 \n"))

