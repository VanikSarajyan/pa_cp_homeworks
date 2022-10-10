size = 5
matrix = [[y * size + x + 1 for x in range(size)] for y in range(size)]

if size % 2 == 1:
    for col in range(size // 2):
        matrix[size // 2][col], matrix[size // 2][size - 1 - col] = matrix[size // 2][size - 1 - col], matrix[size // 2][col]
        
for row in range(size // 2):
    for col in range(size):
        matrix[row][col], matrix[size - 1 - row][size - 1 - col] = matrix[size - 1 - row][size - 1 - col], matrix[row][col]

print(matrix)