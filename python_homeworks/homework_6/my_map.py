def my_map(func, it):
    return [func(el) for el in it]

l = [1,2,3]
l_square = my_map(lambda x: x * x, l)
print(l_square)