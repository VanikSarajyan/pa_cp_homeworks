def my_range(end, start = 0, step = 1):
    ls = []
    if step == 0:
        return []

    if start != 0 and step > 0:
        end, start = start, end

    while(start < end):
        if step > 0:
            ls.append(start)
            start += step
        else:
            ls.append(end)
            end += step

    return ls

print(my_range(5))
print(my_range(2, 2))
print(my_range(2, 10, 3))
print(my_range(10, 5, -2))