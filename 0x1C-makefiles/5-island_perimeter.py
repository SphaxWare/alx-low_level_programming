#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Return perimeter if the island
    """
    p = 0
    for x, row in enumerate(grid):
        for y, cell in enumerate(row):
            if cell == 1:
                p += 4
                #check right
                if y < len(row) - 1 and row[y + 1] == 1:
                    p -= 1
                #check left
                if y > 0 and row[y - 1] == 1:
                    p -= 1
                #check up
                if x > 0 and grid[x - 1][y] == 1:
                    p -= 1
                #check down
                if x < len(grid) - 1 and grid[x + 1][y] == 1:
                    p -= 1
    return p
