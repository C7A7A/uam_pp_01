def sito(n):
    if n == 1 or n == 2:
        print("T")
    else:
        flag_prime = True
        x = 2
        while x <= int(n**0.5):
            if n % x == 0:
                print("N")
                flag_prime = False
                break
            x = x + 1

        if flag_prime:
            print("T")


numbers = int(input())
for i in range(numbers):
    number = int(input())
    sito(number)