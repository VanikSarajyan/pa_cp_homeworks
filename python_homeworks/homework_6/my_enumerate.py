def my_enumerate(it, index = 0):
    enum = []
    for el in it:
        enum.append((index, el))
        index += 1
    return enum

l = ['a','b','c']
print(my_enumerate(l,5))