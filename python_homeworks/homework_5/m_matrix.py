size = 5
matrix = [
    [0,"M",0,"M",0],
    [0,0,"M", 0, 0],
    [0,0,0,0, 0],
    ["M","M",0,0,0],
    [0,0,0,"M", 0]
]

for row in range(size):
    for col in range(size):
        if matrix[row][col] == 0:
            adjacent_m = 0
            for i in range(row-1, row+2):
                for j in range(col-1, col+2):
                    if 0 <= i < 5 and 0 <= j < 5:
                        if matrix[i][j] == "M":
                            adjacent_m += 1      
            matrix[row][col] = adjacent_m


print(matrix)