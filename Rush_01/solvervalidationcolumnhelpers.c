/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvervalidationcolumnhelpers.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:53:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:19:02 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

// Helper Functions To Do With Visibility From A Direction
int		count_visible_from_top(t_puzzle_data *puzzle, int column_index);
int		count_visible_from_bottom(t_puzzle_data *puzzle, int column_index);
void	zero_int_buffer(int *buffer, int size);

/*
 * Checks the column for dupes, sticks them into a seen array that takes the
 * 		value as the index so if we find that index filled, houston we
 * 		have a problem! Otherwise if it survives the while loop then there
 * 		are no dupes
 */
int	check_column_dupes(int *col_values)
{
	int	value;
	int	row_index;
	int	seen[GRID_SIZE + 1];

	row_index = 0;
	zero_int_buffer(seen, GRID_SIZE + 1);
	while (row_index < GRID_SIZE)
	{
		value = col_values[row_index];
		if (value != 0)
		{
			if (seen[value])
				return (1);
			seen[value] = 1;
		}
		row_index++;
	}
	return (0);
}

/*
 * Checks the state of the column to see if it's complete, it's
 * 		just a fancy way to say if it's compeltly filled with
 * 		valid numbers
 */
int	is_column_complete(int *col_values)
{
	int	row_index;

	row_index = 0;
	while (row_index < GRID_SIZE)
	{
		if (col_values[row_index++] == 0)
			return (0);
	}
	return (1);
}

// -------------------------
// Helper: check visibility of column
// -------------------------
int	checkcolumnvisibility(t_puzzle_data *puzzle, int col_index)
{
	int	top_constraint;
	int	bottom_constraint;

	top_constraint = puzzle->constraints[col_index];
	bottom_constraint = puzzle->constraints[GRID_SIZE + col_index];
	if (count_visible_from_top(puzzle, col_index) != top_constraint)
		return (0);
	if (count_visible_from_bottom(puzzle, col_index) != bottom_constraint)
		return (0);
	return (1);
}
