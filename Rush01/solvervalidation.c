/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvervalidation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:17:35 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:12:44 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

// All Helpers in separate files because of Norminette :)
// Helpers For The Rows
int	check_row_dupes(int *row_values);
int	is_row_complete(int *row_values);
int	check_row_visibility(t_puzzle_data *puzzle, int row_index);

// Helpers For The Columns
int	check_column_dupes(int *row_values);
int	is_column_complete(int *row_values);
int	checkcolumnvisibility(t_puzzle_data *puzzle, int col_index);

int	is_row_valid(t_puzzle_data *puzzle, int row_index)
{
	int	row_values[GRID_SIZE];
	int	columnindex;

	columnindex = 0;
	while (columnindex < GRID_SIZE)
	{
		row_values[columnindex] = puzzle->grid[row_index][columnindex];
		columnindex++;
	}
	if (check_row_dupes(row_values))
		return (0);
	if (is_row_complete(row_values))
		if (!check_row_visibility(puzzle, row_index))
			return (0);
	return (1);
}

/*
 * Checks to see if the rows "building visibility" state
 * 		Fancy way to see how many numbers are greater than each
 * 		other in order, which is the mathematical equivalent
 * 		of counting the building side in order.
 */
int	is_column_valid(t_puzzle_data *puzzle, int col_index)
{
	int	row;
	int	col_values[GRID_SIZE];

	row = 0;
	while (row < GRID_SIZE)
	{
		col_values[row] = puzzle->grid[row][col_index];
		row++;
	}
	if (check_column_dupes(col_values))
		return (0);
	if (is_column_complete(col_values))
		if (!checkcolumnvisibility(puzzle, col_index))
			return (0);
	return (1);
}
