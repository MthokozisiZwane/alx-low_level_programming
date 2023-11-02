#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
    - grid: List of lists of integers where 0 represents
    water and 1 represents land.

    Returns:
    - The perimeter of the island.
    """

    if not grid or not grid[0]:
        return 0

    rows, colms = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(colms):
            if grid[i][j] == 1:
                perimeter += 4

                # subtract 1 for each connected land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < colms - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
