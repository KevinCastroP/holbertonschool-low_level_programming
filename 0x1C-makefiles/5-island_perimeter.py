#!/usr/bin/python3
"""
Function to return the perimeter of an island
"""


def island_perimeter(grid):
    """Calculating the island perimeter"""
    k = 0
    for a in range(len(grid)):
        for b in range(len(grid[a]) - 1):
            if grid[a][b] == 1:
                k += 1
                break
        for b in range(len(grid) - 1, 0, -1):
            if grid[a][b] == 1:
                k += 1
                break
    for a in range(len(grid)):
        for b in range(len(grid[a]) - 1):
            if grid[b - 1][a] == 1:
                k += 1
                break
        for b in range(len(grid) - 1, 0, -1):
            if grid[b][a] == 1:
                k += 1
                break
    return k
