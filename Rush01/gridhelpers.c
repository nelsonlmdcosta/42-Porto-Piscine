/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridhelpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:19:36 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:19:28 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"
#include <unistd.h>

/*
 * Just a simple 2D Array Initializer Does Nothing More Than Make Sure The Data
 * 		In The Struct Is Zero'd Out For Processing (we all know memory likes to
 * 		have some trashy information in it when first allocated :p
 */
void	initialize_puzzledata(t_puzzle_data *puzzle)
{
	int	row_index;
	int	column_index;

	row_index = 0;
	while (row_index < GRID_SIZE)
	{
		column_index = 0;
		while (column_index < GRID_SIZE)
		{
			puzzle->grid[row_index][column_index] = 0;
			++column_index;
		}
		++row_index;
	}
}

/*
 *	Helper funciton to just make sure the buffer is correctly setup first
 *	character is a space, the second one is the number we want to show
 *	lastly another space. Technically \0 is doing nothing atm just more for
 *	good practice
 */
void	copy_digit_to_buffer(char *buffer, char character)
{
	*(buffer + 0) = character;
	*(buffer + 1) = '\0';
}

/*
 * Just a small helper to print the top or bottom most line,
 * Note: indexing_offset is there to avoid another same function, which
 * helps work with norminettes constraitns too, basically it'll either be
 * - 0 when top row
 * - GRID_SIZE when bottom row
 */
void	print_toporbottomrow(t_puzzle_data *puzzle, int indexingoffset)
{
	int		columnindex;
	int		constraintindex;
	char	outputbuffer[4];
	char	charactertoprint;

	columnindex = 0;
	write(1, "   ", 3);
	while (columnindex < GRID_SIZE)
	{
		constraintindex = indexingoffset + columnindex++;
		charactertoprint = '0' + puzzle->constraints[constraintindex];
		copy_digit_to_buffer(outputbuffer, charactertoprint);
		write(1, outputbuffer, 3);
	}
	write(1, "\n", 1);
}

/*
 * So printing middle requires us to print the left edge first, then
 * the middle blocks, then the right most edge otherwise usual functioning
 * for this code as seen above.
 * NOTE: This function is at the character and length limits! Do be careful
 * 		 when editing it!
 */
void	print_middle(t_puzzle_data *puzzle)
{
	int		row_index;
	int		column_index;
	char	outputbuffer[4];
	char	charactertoprint;

	row_index = 0;
	column_index = 0;
	while (row_index < GRID_SIZE)
	{
		column_index = 0;
		while (column_index < GRID_SIZE)
		{
			charactertoprint = puzzle->grid[row_index][column_index++] + '0';
			copy_digit_to_buffer(outputbuffer, charactertoprint);
			write(1, outputbuffer, 1);
			if (column_index < GRID_SIZE)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		++row_index;
	}
}

void	print_grid(t_puzzle_data *puzzle)
{
	print_middle(puzzle);
}
