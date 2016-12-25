G = float(input("Введите число: "))
P = G
while P*P != G:
    P = (P + (G/P))/2
print("Корень равен: ", P)
