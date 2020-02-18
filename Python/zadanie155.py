a = int(input())
b = int(input())
c = int(input())
d = int(input())

integerList = [a, b, c, d]
integerMax = max(integerList)

if a > 0 and b > 0 and c > 0 and d > 0:
    print("brak liczby ujemnej")

for i in integerList:
    if i < 0:
        print(integerMax - i)
