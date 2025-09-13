/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvervisibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:17:42 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:13:30 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int	count_visible_from_left(t_puzzle_data *puzzle, int row_index)
{
	int	max_height_seen;
	int	visible_count;
	int	col;
	int	height;

	max_height_seen = 0;
	visible_count = 0;
	col = 0;
	while (col < GRID_SIZE)
	{
		height = puzzle->grid[row_index][col];
		if (height > max_height_seen)
		{
			visible_count++;
			max_height_seen = height;
		}
		col++;
	}
	return (visible_count);
}

int	count_visible_from_right(t_puzzle_data *puzzle, int row_index)
{
	int	max_height_seen;
	int	visible_count;
	int	col;
	int	height;

	max_height_seen = 0;
	visible_count = 0;
	col = GRID_SIZE - 1;
	while (col >= 0)
	{
		height = puzzle->grid[row_index][col];
		if (height > max_height_seen)
		{
			visible_count++;
			max_height_seen = height;
		}
		col--;
	}
	return (visible_count);
}

int	count_visible_from_top(t_puzzle_data *puzzle, int column_index)
{
	int	max_height_seen;
	int	visible_count;
	int	row;
	int	height;

	max_height_seen = 0;
	visible_count = 0;
	row = 0;
	while (row < GRID_SIZE)
	{
		height = puzzle->grid[row][column_index];
		if (height > max_height_seen)
		{
			visible_count++;
			max_height_seen = height;
		}
		row++;
	}
	return (visible_count);
}

int	count_visible_from_bottom(t_puzzle_data *puzzle, int column_index)
{
	int	max_height_seen;
	int	visible_count;
	int	row;
	int	height;

	max_height_seen = 0;
	visible_count = 0;
	row = GRID_SIZE - 1;
	while (row >= 0)
	{
		height = puzzle->grid[row][column_index];
		if (height > max_height_seen)
		{
			visible_count++;
			max_height_seen = height;
		}
		row--;
	}
	return (visible_count);
}
