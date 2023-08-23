#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """function that returns the perimeter of the island described in grid"""

    heigth = len(grid)
    width = len(grid[0])
    p = 0

    for i in range(heigth):
        for j in range(width):
            if grid[i][j] == 1:
                if i > 0 and grid[i - 1][j] == 0:
                    p += 1
                if j > 0 and grid[i][j - 1] == 0:
                    p += 1
                if j < width and grid[i][j + 1] == 0:
                    p += 1
                if i < heigth and grid[i + 1][j] == 0:
                    p += 1
    return p
