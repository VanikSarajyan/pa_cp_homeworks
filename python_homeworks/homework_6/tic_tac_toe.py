import random

board = [
    [2,0,2],
    [0,2,0],
    [2,0,1],
]

def do_random_step(player = 2):
    while True:
        row = random.randint(0,2)
        col = random.randint(0,2)
        if board[row][col] == 0:
            board[row][col] = player
            break

do_random_step()
print(board)