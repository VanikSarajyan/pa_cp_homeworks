n = int(input())

n_copy = n
m = 1

while n != 0:
    n //= 10
    m *= 10

while m != 1:
    digit = (n_copy % m ) // (m // 10)
    m //= 10
    print(digit, end=" ")
