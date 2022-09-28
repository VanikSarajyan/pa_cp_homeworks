limit = 10000

perfect_numbers = []

for n in range(1, limit):
    s = 0
    for i in range(1, n // 2 + 1):
        if n % i == 0:
            s += i
    if n == s:
        perfect_numbers.append(n)

print(perfect_numbers)