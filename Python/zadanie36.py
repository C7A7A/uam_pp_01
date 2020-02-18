import math

x = int(input())
counter = 0
points = []
circumference = 0
segmentModuleSum = 0

for i in range(x):
    points.append(input().split())

for i in range(x):
    if i == x-1:
        counter = 0

    segmentLen = math.sqrt(((int(points[counter+1][0]) - int(points[counter][0])) ** 2) + (int((points[counter+1][1])) - int(points[counter][1])) ** 2)
    circumference += segmentLen
    counter = counter+1

for i in range(x):
    segmentModule = math.sqrt(((0 - int(points[i][0])) ** 2) + (0 - int(points[i][1])) ** 2)
    segmentModuleSum += segmentModule

print("%.3f %.3f" % (circumference, segmentModuleSum))