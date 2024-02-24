#!/usr/bin/python3
"""
This module contains a function that calculates the perimeter of an island
in a grid.
"""

def island_perimeter(grid):
    """
    Function to calculate the perimeter of an island in a grid.

    Parameters:
    grid (list): A list of list of integers where 0 represents a water zone
    and 1 represents a land zone.

    Returns:
    int: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
