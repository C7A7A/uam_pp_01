import math


def hypotenuse(a, b):
    return math.sqrt(a**2 + b**2)


def angle(a, b, c):
    if a >= b:
        x = (c ** 2 + a ** 2 - b ** 2) / (2 * a * c)
        return math.degrees(math.acos(x))
    else:
        x = (c ** 2 + b ** 2 - a ** 2) / (2 * b * c)
        return math.degrees(math.acos(x))


data_amount = eval(input())
sides = []
for i in range(data_amount):
    sides = list(map(int, input().split()))
    hypnot = hypotenuse(sides[0], sides[1])
    print(math.ceil(hypnot), round(angle(sides[0], sides[1], hypnot)))
