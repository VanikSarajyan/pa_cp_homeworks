def draw_line(width, symbol, newline):
    print(width * symbol, end="")
    if newline: print()

def draw_side_wall(height, width):
    for level in range(height):
        print("\n|", end="")
        draw_line(width - 2, " ", False)
        print("|")

def draw_roof(width):
    for i in range(1, width + 1, 2):
        draw_line((width - i) // 2, " ", False)
        draw_line(i, "*", True)

width = int(input())
height = width // 5 + 1

draw_roof(width)
draw_line(width, '_', True)
draw_side_wall(height, width)
draw_line(width, '_', True)