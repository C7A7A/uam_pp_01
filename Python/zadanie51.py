numbersAbove10 = {
    '10': 'A', '11': 'B', '12': 'C', '13': 'D', '14': 'E',
    '15': 'F', '16': 'G', '17': 'H', '18': 'I', '19': 'J',
    '20': 'K', '21': 'L', '22': 'M', '23': 'N', '24': 'O',
    '25': 'P', '26': 'Q', '27': 'R', '28': 'S', '29': 'T',
    '30': 'U', '31': 'V', '32': 'W', '33': 'X', '34': 'Y',
    '35': 'Z'
}


def change_system(num, base):
    if num == 0 or base == 0:
        return "0"

    new_num = ""
    while num != 0:
        remainder = int(num % base)
        if remainder > 9:
            remainder = numbersAbove10[str(remainder)]
        num = int(num / base)
        new_num = new_num + str(remainder)

    reversed_new_num = new_num[::-1]
    return reversed_new_num


system = eval(input())
first_line = "* |"
second_line = "--+"

for i in range(system):
    if i < 10:
        first_line = first_line + "  " + str(i)
    else:
        first_line = first_line + "  " + numbersAbove10[str(i)]

    second_line = second_line + "---"

print(first_line)
print(second_line)

for i in range(system):
    if i < 10:
        line = str(i) + " |"
    else:
        line = numbersAbove10[str(i)] + " |"

    for j in range(system):
        product = change_system((i * j), system)
        if len(product) == 1:
            line = line + "  " + product
        else:
            line = line + " " + product

    print(line);

