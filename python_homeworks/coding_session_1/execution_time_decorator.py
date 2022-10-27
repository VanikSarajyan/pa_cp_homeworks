import time
import math

def execution_time(func):
    def wrapper(*args, **kwargs):
        start = time.time()
        return_value = func(*args, **kwargs)
        end = time.time()

        print(f'{func.__name__} took {end-start:.2f} seconds to execute.')
        return return_value
    return wrapper

@execution_time
def factorial(n):
    return math.factorial(n)

factorial(100000)
