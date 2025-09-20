/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:27:35 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:12:09 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Header Guards, just to avoid this being included too many times in a program.
 * Just avoids duplicate declarations which can lead to compilation issues.
 * I don't think #pragma once from CPP works here rip
 */
#ifndef PUZZLE_H
# define PUZZLE_H

/* Note: Do not remove the ifndef section, as this is just to support the
 * 		 possible Unknown way of them testing, I'm assuming to automate the
 * 		 process they Will give us a parameter from compilation
 */
# ifndef GRID_SIZE
#  define GRID_SIZE 4   // default mandatory size
# endif

# define NUM_CONSTRAINTS 16

/* Structure that holds the grid and it's constraints, nothign out of this
 * 		world tbh
 */
typedef struct s_puzzle
{
	int	grid[GRID_SIZE][GRID_SIZE];
	int	constraints[NUM_CONSTRAINTS];
}	t_puzzle_data;

#endif // PUZZLE_H