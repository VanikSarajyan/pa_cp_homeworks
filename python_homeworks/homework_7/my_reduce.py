import functools

def my_reduce(func, iter):
    value, *rest = iter
    for el in rest:
        value = func(value, el)
    return value

def my_reduce_general(function, iterable, initializer=None):
    it = iter(iterable)
    if initializer is None:
        value = next(it)
    else:
        value = initializer
    for element in it:
        value = function(value, element)
    return value

ls = [1,2,3,4]

print(my_reduce(lambda x,y: x + y, ls))
print(my_reduce_general(lambda x,y: x + y, ls))
print(functools.reduce(lambda x,y: x + y, ls))