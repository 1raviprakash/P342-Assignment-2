#Find the average distance between points in a straight line.
num = int(input("Give the number of points whose average distance you want to calculate"))
sum = 0
total = num*num
for x in range(num):
    for y in range(num):
        sum = sum + abs(x-y)
print("Average distance between two points = ", sum/total)
# Average distance between two points =  1.9444444444444444 if the number of point is 6.
