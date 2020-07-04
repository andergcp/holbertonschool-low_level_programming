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
    for row in range(len(grid)):
        ''' Goes through rows in grid'''
        for col in range(len(grid[row])):
            '''Goes through columns inside rows'''
            if grid[row][col] == 1:
                '''Validates just went the cell's value is 1'''
                if row == 0:
                    perimeter += 1
                elif grid[row - 1][col] == 0:
                    perimeter += 1

                if row == (len(grid) - 1):
                    perimeter += 1
                elif grid[row + 1][col] == 0:
                    perimeter += 1

                if col == 0:
                    perimeter += 1
                elif grid[row][col - 1] == 0:
                    perimeter += 1

                if col == (len(grid[row]) - 1):
                    perimeter += 1
                elif grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
