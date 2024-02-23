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
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
