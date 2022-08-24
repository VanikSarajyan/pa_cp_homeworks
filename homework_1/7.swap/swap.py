a = int(input())
b = int(input())

# The pythonic way using tuple unpacking
# a,b = b,a 

temp = a
a = b
b = temp

print(a, b)