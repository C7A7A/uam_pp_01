def nwd(num_list):
    while (num_list[0] != num_list[1]) or (num_list[1] != num_list[2]) or (num_list[2] != num_list[3]):
        num_max = max(num_list)
        num_min = min(num_list)

        key_max = 0
        while num_max != num_list[key_max]:
            key_max = key_max + 1

        key_min = 0
        while num_min != num_list[key_min]:
            key_min = key_min + 1

        num_list[key_max] = num_list[key_max] - num_list[key_min]

    print(num_list[0])


sets_of_numbers = int(input())
numbers = []
for i in range(sets_of_numbers):
    numbers = list(map(int, input().split()))
    nwd(numbers)
    numbers.clear()