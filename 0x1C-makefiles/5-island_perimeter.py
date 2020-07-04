#!/usr/bin/python3

"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    '''
    Calculates the perimeter of the island
    0 means a water zone
    1 means a land zone
    '''
    perimeter = 0
    for row in range(1, len(grid) - 1):
        for col in range(1, len(grid[row]) - 1):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    perimeter += 1
                if grid[row + 1][col] == 0:
                    perimeter += 1
                if grid[row][col - 1] == 0:
                    perimeter += 1
                if grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
