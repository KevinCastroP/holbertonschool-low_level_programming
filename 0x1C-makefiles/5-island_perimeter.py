#!/usr/bin/python3
"""
Function to return the perimeter of an island
"""


def island_perimeter(grid):
    """Calculating the island perimeter"""
    k = 0
    c = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b] == 1:
                if a > 0 and grid[a - 1][b] == 1:
                    c += 1
                if b > 0 and grid[a][b - 1] == 1:
                    c += 1
                k += 1
    kc = (k * 4) - (c * 2)
    return kc
