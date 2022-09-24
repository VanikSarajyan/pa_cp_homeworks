side = int(input('Enter a side of square: '))

for i in range(side):
    if i == 0 or i == side - 1:
        print(side * '*')
    else:
        print('*', (side - 2) * ' ', '*', sep='')