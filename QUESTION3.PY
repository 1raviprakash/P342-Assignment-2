# Reading two matrices and printing their products
with open('m.txt', 'r') as f:
    m = [[int(num) for num in line.split()] for line in f]
with open('n.txt', 'r') as j:
    n = [[int(num) for num in line.split()] for line in j]
# This will be my A
a = [6, 4, 2]
# This will load the value of product of the matrices and will be used to print them
p1 = [0, 0, 0]
#  This will load the value of product of the matrices and will be used to print them
p2 = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
for x in range(3):
    for y in range(3):
        p1[x] = p1[x] + (m[x][y] * a[y])
print("Product of M*A: ", p1)
for x in range(3):
    for i in range(3):
        for y in range(3):
            p2[x][i] = p2[x][i] + (m[x][y] * n[y][i])
print("Product of M*N: ")
for r in p2:
    print(r)


# Output
# Product of M*A:  [220, 616, 1012]
# Product of M*N:
# [330, 396, 462]
# [726, 891, 1056]
# [1122, 1386, 1650]
