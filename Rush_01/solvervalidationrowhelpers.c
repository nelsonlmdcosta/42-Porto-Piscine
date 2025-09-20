/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvervalidationrowhelpers.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:53:35 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:19:30 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

// Helper Functions To Do With Visibility From A Direction
int		count_visible_from_left(t_puzzle_data *puzzle, int row_index);
int		count_visible_from_right(t_puzzle_data *puzzle, int row_index);
void	zero_int_buffer(int *buffer, int size);

/*
 * Checks the row for dupes, sticks them into a seen array that takes the
 * 		value as the index so if we find that index filled, houston we
 * 		have a problem! Otherwise if it survives the while loop then there
 * 		are no dupes
 */
int	check_row_dupes(int *row_values)
{
	int	value;
	int	column_index;
	int	seen[GRID_SIZE + 1];

	column_index = 0;
	zero_int_buffer(seen, GRID_SIZE + 1);
	while (column_index < GRID_SIZE)
	{
		value = row_values[column_index];
		if (value != 0)
		{
			if (seen[value])
				return (1);
			seen[value] = 1;
		}
		column_index++;
	}
	return (0);
}

/*
 * Checks the state of the row to see if it's complete, it's
 * 		just a fancy way to say if it's compeltly filled with
 * 		valid numbers
 */
int	is_row_complete(int *row_values)
{
	int	column_index;

	column_index = 0;
	while (column_index < GRID_SIZE)
	{
		if (row_values[column_index++] == 0)
			return (0);
	}
	return (1);
}

/*
 * Checks to see if the rows "building visibility" state
 * 		Fancy way to see how many numbers are greater than each
 * 		other in order, which is the mathematical equivalent
 * 		of counting the building side in order.
 */
int	check_row_visibility(t_puzzle_data *puzzle, int row_index)
{
	int	left_constraint;
	int	right_constraint;

	left_constraint = puzzle->constraints[2 * GRID_SIZE + row_index];
	right_constraint = puzzle->constraints[3 * GRID_SIZE + row_index];
	if (count_visible_from_left(puzzle, row_index) != left_constraint)
		return (0);
	if (count_visible_from_right(puzzle, row_index) != right_constraint)
		return (0);
	return (1);
}
