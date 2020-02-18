students = int(input())
studentsHeight = []
data = input().split()

for i in range(students):
    studentsHeight.append(data[i])

studentsHeight.sort()

print(studentsHeight[students-1], studentsHeight[students-2])