def education_number(x):
    education = ["p", "g", "s", "w"]
    for key in range(len(education)):
        if x == education[key]:
            x = key

    return x

friendsAmount = int(input())
friends = []

for i in range(friendsAmount):
    friends.append(input().split())

educationSearch = input()
educationSearch = education_number(educationSearch)

for i in range(friendsAmount):
    educationFriend = education_number(friends[i][1])
    if educationFriend >= educationSearch:
        print(friends[i][0])






