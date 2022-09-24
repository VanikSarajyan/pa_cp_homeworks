n = abs(int(input('Enter a number: ')))
n_copy = n

sum_of_digits = 0

while(n != 0):
    sum_of_digits += n % 10
    n //= 10

print(f'Sum of digits of {n_copy} is {sum_of_digits}.')