/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:13:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:14:18 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"
#include <unistd.h>

void	initialize_puzzledata(t_puzzle_data *puzzledata);
int		solve_grid(t_puzzle_data *puzzledata, int row_index, int column_index);
void	print_grid(t_puzzle_data *puzzledata);

/*
 * Per the document I've setup a basic parsing function that needs more testing
 * 		but it makes enough sense atm. Basically goes through and pulls out all
 * 		the various bits out fo the first parameter, so it will expect a specific
 * 		amount depending on what's configured in the .h file, which is dependant
 * 		on the number of cells we're working with, if that number is NOT present
 * 		then it simply returns an error as requested ont he document/
 * Note: Because they request only 9x9 it's guaranteed, to be a single char which
 * 		 makes processing this all the easier, just to keep us focused on the
 * 		 real problem, smart cheeky guys xD
 */
int	parse_input(char *input_string, t_puzzle_data *puzzle)
{
	int		index;
	char	min_constraint;
	char	max_constraint;

	index = 0;
	min_constraint = '1';
	max_constraint = '0' + GRID_SIZE;
	while (*input_string && index < NUM_CONSTRAINTS)
	{
		if (*input_string >= min_constraint && *input_string <= max_constraint)
			puzzle->constraints[index++] = *input_string - '0';
		else if (*input_string != ' ')
			return (0);
		++input_string;
	}
	return (index == NUM_CONSTRAINTS);
}

/*
 * Main function. As requested on the doc
 * - The idea here is to break the problem down into small chunks that we can
 * 		try fill out some functions and make everything clear with minimal
 * 		effort.
 * - We start by parsing out the arguments, these have to be all passed in with
 * 		no missing numbers, otherwise it's considered invalid input and we return
 * 		error
 * - We then intitialize the grid structure if it is valid, with the empty grid
 * 		itself, and the pre defined constraints in the puzzle.h file, this file
 * 		is there just to help us configure the other games later more easily.
 * 		So the game should be built keeping those mins and maxs in consideration
 * - We then try solve the grid with a backtracking algorithm as suggested online
 * 		and we either print the grid if we managed to get to a solution or error
 */
int	main(int argc, char *argv[])
{
	t_puzzle_data	puzzle;

	initialize_puzzledata(&puzzle);
	if (argc != 2 || !parse_input(argv[1], &puzzle))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve_grid(&puzzle, 0, 0))
		print_grid(&puzzle);
	else
		write(1, "Error\n", 6);
	return (0);
}
