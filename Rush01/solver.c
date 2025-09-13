/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:35:17 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:19:09 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

// solvervalidation.c
int	is_row_valid(t_puzzle_data *puzzle, int row_index);
int	is_column_valid(t_puzzle_data *puzzle, int column_index);

/*
 * Verify you can place the number in the specific row/column otherwise it's
 * 		considered an invalid operation. This must satisfy the uniquness of
 * 		rows and columns as well as the visibility
 */
int	can_place_number(t_puzzle_data *puzzle, int row, int column, int number)
{
	puzzle->grid[row][column] = number;
	if (!is_row_valid(puzzle, row) || !is_column_valid(puzzle, column))
	{
		puzzle->grid[row][column] = 0;
		return (0);
	}
	return (1);
}

/*
 * So this is a backtracking solver, essentially it'll try solve grid element
 * by grid element, if it fails somewhere it goes back one step to try other
 * options and repeats until it either finds a solution, or no solution.
 *
 * As an example a 4x4, if row_index is GRID_SIZE (5) it means we got to the
 * end so we return true, and the printer can just get the information out
 * of the structure as the algorithm writes in place.
 *
 * We then try place numbers into the grid if we place a valid number then we
 * just go ahead and recursively head over to the next index.
 */
int	solve_grid(t_puzzle_data *puzzle, int row_index, int column_index)
{
	int	numbertoplace;
	int	next_row;
	int	next_column;

	numbertoplace = 1;
	next_row = row_index + (column_index + 1) / GRID_SIZE;
	next_column = (column_index + 1) % GRID_SIZE;
	if (row_index == GRID_SIZE)
		return (1);
	while (numbertoplace <= GRID_SIZE)
	{
		if (can_place_number(puzzle, row_index, column_index, numbertoplace++))
		{
			if (solve_grid(puzzle, next_row, next_column))
				return (1);
			puzzle->grid[row_index][column_index] = 0;
		}
	}
	return (0);
}
