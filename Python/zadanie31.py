nums_amount = int(input())
nums = list(map(int, input().split()))
exclude_amount = int(input())
exclude = list(map(int, input().split()))
nums_correct = []

for i in range(exclude_amount):
    counter = 0
    for j in range(len(nums)):
        if exclude[i] == nums[j]:
            nums[j] = -99999
            counter = counter + 1
    for j in range(counter):
        nums.remove(-99999)
    for j in range(len(nums)):
        print(nums[j], end=' ')
    print()





