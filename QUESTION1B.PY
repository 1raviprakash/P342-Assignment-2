
# Find the average distance between points 2-d grid.
sum = 0
num = int(input("Give the number of points which you want to be in a row."))
n = num*num
total = n*n
for xi in range(num):
    for yi in range(num):
        for xf in range(num):
            for yf in range(num):
                sum = sum + abs(xi-xf) + abs(yi-yf)
print("Average distance between two points = ", sum/total)
# Average distance between two points =3.888888888888889 for 6 objects in a row.
