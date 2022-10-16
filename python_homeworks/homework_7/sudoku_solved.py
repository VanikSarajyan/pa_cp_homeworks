def sudoku_solved(board):
    def correct_row(row_index):
        return len(set(board[row_index])) == 9

    def correct_col(col_index):
        col = [row[col_index]for row in board]
        return len(set(col)) == 9

    def correct_block(i, j):
        pass


    for i in range(9):
        if not correct_row(i):
            return False
        if not correct_col(i):
            return False

    # for i in range(0,9,3):
    #     for j in range(0,9,3):
    #         if not correct_block(i,j):
    #             return False

    return True


board = [[5,3,4,6,7,8,9,1,2],
        [6,7,2,1,9,5,3,4,8],
        [1,9,8,3,4,2,5,6,7],
        [8,5,9,7,6,1,4,2,3],
        [4,2,6,8,5,3,7,9,1], 
        [7,1,3,9,2,4,8,5,6],
        [9,6,1,5,3,7,2,8,4],
        [2,8,7,4,1,9,6,3,5],
        [3,4,5,2,8,6,1,7,9]]

print(sudoku_solved(board))