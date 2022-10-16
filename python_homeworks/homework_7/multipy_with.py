def multiply_with(n):
    def inner(x):
        return x * n
    return inner


multiply_with_5 = multiply_with(5)
multiply_with_4 = multiply_with(4)
print(multiply_with_5, multiply_with_4)
print(multiply_with_5(2), multiply_with_4(2))


def make_multipliers(limit):
    mults = []
    for i in range(1, limit + 1):
        mults.append(lambda x, i=i: i * x)
    return mults

multipliers = make_multipliers(5)
print(multipliers[4](10))