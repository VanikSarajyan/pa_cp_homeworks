def my_filter(func, it):
    return [el for el in it if func(el)]

ages = [5,15,25,64,18]
adults = my_filter(lambda x: x >= 18, ages)
print(adults)