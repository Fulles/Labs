import math
from matplotlib import pyplot as plt
'''Ввод данных'''
start = int(input("Хотите запустить программу? Если да,то нажмите 1 \n"))
while start == 1:
    x1 = str(input("Введите x \n"))
    x = float(x1)

    s = str(input("Введите a \n"))
    a = float(s)

    z1 = str(input("Введите номер функции \n"))
    z = int(z1)

    n1 = str(input("Введите количество шагов \n"))
    n = int(n1)

    r = 0
    o = x+(n*0.1)
    st1 = str
    st2 = str
    x_values = []
    y_values = []
    s_values = []
    maxi = 0
    maxi2 = 0
    mini = 0
    mini2 = 0
    k = 0
    p = 2
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
                st = str(y_values[r])
                r += 1
                s_values.append(st)
                if k == 0:
                    st2 = st
                    k += 1

                else:
                    st2 = st2 + st
            else:
                print("Нельзя делить на НОЛЬ")
            '''Вторая функция'''
        elif z == 2:
            f = 1/(math.cos(3*a**2+5*a*x+2*x**2))
            print("f= %.3f" % f)
            x_values.append(x)
            y_values.append(f)
            st = str(y_values[r])
            r += 1
            s_values.append(st)

            plt.title('График f')
            if k == 0:
                st2 = st
                k += 1

            else:
                st2 = st2 + st
            if y_values[maxi] < y_values[maxi2]:
                maxi = maxi2
                maxi2 += 1
            else:
                maxi2 += 1
            '''Третья функция'''
        elif z == 3:
            v = (-12*a**2-4*a*x+x**2+1)
            if v >= 1:
                y = math.acosh(-12*a**2-4*a*x+x**2+1)
                print("y= %.3f" % y)
                x_values.append(x)
                y_values.append(y)
                plt.title('График y')
                if y_values[mini] > y_values[mini2]:
                    mini = mini2
                    mini2 += 1
                else:
                    mini2 += 1
                if y_values[maxi] < y_values[maxi2]:
                    maxi = maxi2
                    maxi2 += 1
                else:
                    maxi2 += 1

            else:
                print("Не существует ARCCOSH от заданных переменных, Пожалуйста,введите другие значения переменных ")

        else:
            print("Выберите функцию 1,2 или 3")
    print(y_values[mini])
    print(y_values[maxi])
    print("strin = %s" % st2)

    start = int(input("Хотите запустить программу? Если да,то нажмите 1 \n"))
