import random

number_matrix = [[random.randint(-5,5) for x in range(5)] for x in range(5)]

occurences = {}

for row in number_matrix:
    for number in row:
        if number in occurences:
            occurences[number] += 1
        else:
            occurences[number] = 1

sorted_by_values = sorted(occurences.items(), key=lambda item: item[1])[::-1]

print(dict(sorted_by_values[:3]))
