#!/usr/bin/python3
"""
    Perimetro de la isla 
"""

def island_perimeter(grid):
    perimeter = 0
    """island perimeter"""
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == len(grid[i])-1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
