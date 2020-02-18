liczba_porównywana = input()
input()
lista_liczb = list(map(int,input().split()))
for liczba in lista_liczb:
    lista = []
    kopia_liczby = int(liczba_porównywana)
    if kopia_liczby == 0:
        lista.append(0)
    else:
        while kopia_liczby != 0:
            if (kopia_liczby % liczba) <= 9:
                lista.append(kopia_liczby % liczba)
            else:
                lista.append(chr(55+(kopia_liczby % liczba)))
            kopia_liczby //= liczba
    lista.reverse()
    for cyferka in lista:
        print(cyferka, end='')
    print()
