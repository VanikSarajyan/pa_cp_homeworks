n = int(input('Enter a number: '))

while n <= 0:
    n = int(input('Please enter a number >= 1: '))

pre_last, last = 0, 1

if n == 1:
    fn = pre_last
elif n == 2:
    fn = last
else:
    for i in range(3, n + 1):
        fn = pre_last + last
        pre_last = last
        last = fn

print(f'The {n}th Fibonacci number is {fn}.')

