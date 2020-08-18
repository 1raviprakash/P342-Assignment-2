#To create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice (but not random numbers) in the code itself.
#Find A+B and A.B (dot product).
a = [5, 10, 15]
b = [6, 12, 18]
sum = []
dot = 0
for x in range(3):
    sum.append(a[x]+b[x])
for x in range(3):
    dot = dot + (a[x]*b[x])
print("Sum of matrices")
for x in sum:
    print(x)
print("Dot prodduct of the given  Matrices")
print(dot)
#Output says
# Sum of matrices
# 11
# 22
# 33
# Dot product of the given matrices
# 420
