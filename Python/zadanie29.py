import math


def distance(circles_list, a, b):
    x1 = circles_list[a - 1][0]
    y1 = circles_list[a - 1][1]
    x2 = circles_list[b - 1][0]
    y2 = circles_list[b - 1][1]

    return math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)


def circle_area(circles_list, a, b):
    area1 = 3.14 * (circles_list[a - 1][2] ** 2)
    area2 = 3.14 * (circles_list[b - 1][2] ** 2)

    if area1 >= area2:
        return area1
    else:
        return area2


circle_amount = eval(input())
circles = []
for i in range(circle_amount):
    circles.append(input().split())
    circles[i] = list(map(int, circles[i]))

pair_amount = eval(input())
pairs = []
for i in range(pair_amount):
    pairs = list(map(int, input().split()))
    print("%.2f %.2f" % (distance(circles, int(pairs[0]), int(pairs[1])), circle_area(circles, int(pairs[0]), int(pairs[1]))))


