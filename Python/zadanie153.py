x = int(input())
y = int(input())
z = int(input())

if x > y:
    if x > z:
        print(x)
    else:
        if z > y:
            print(z)
else:
    if y > z:
        print(y)
    else:
        print(z)
