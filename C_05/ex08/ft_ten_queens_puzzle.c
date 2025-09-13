/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:23:38 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 20:51:59 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * 	As Requested We Print Out What Row The Queen Is, The Column Indicates What
 * 		Column They Are At.
 */
void	print_solution(int board[10])
{
	int		i;
	char	character;

	i = 0;
	while (i < 10)
	{
		character = board[i++] + '0';
		write(1, &character, 1);
	}
	write(1, "\n", 1);
}

/*
 * Absolute helper, just keeps everything positive
 */
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

/*
 * 	Function To Check If A Specific Spot Is Safe At Any Given Point
 * 		It'll also iterate over the various columns of a specific row
 *
 * 	If we're in the same row as someone else, then we can't be there
 * 		We do this by checking to see if the previous row is filled
 *
 * 	On a chessboard, two queens are on the same diagonal if the absolute
 * 		difference in rows equals the absolute difference in columns.
 *
 * 	So a queen at 0,0 and one at 2,2 means that. (assume its abs)
 * 		x = 0 - 2
 * 		y = 0 - 2
 * 		x == y ? conflict : free; in this case conflict! 2 == 2
 *
 * 		x = 0 - 1
 * 		y = 2 - 0
 * 		x == y ? conflict : free; no conflict 1 != 2
 */
int	is_safe(int board[10], int col, int row)
{
	int	previous_column;
	int	previous_row;

	previous_column = 0;
	previous_row = 0;
	while (previous_column < col)
	{
		previous_row = board[previous_column];
		if (previous_row == row)
			return (0);
		if (ft_abs(previous_row - row) == ft_abs(previous_column - col))
			return (0);
		++previous_column;
	}
	return (1);
}

/*
 *	Recursive Backtracking Solver like Rush01 Just Simpler
 *
 *	column == 10 just means we placed all the queens, so therefore we got to a
 *		solution therefore we print the solution, return 1 and continue
 *		searching.
 *
 *	Otherwise what we're going to do is go through each row, and place a queen
 *		on each one and check if it's safe, if it is we set it permanently, if
 *		it we backtrack and keep searching
 *
 *	Count is to count the total solutions found, as we have to return that
 */
int	solve(int board[10], int column)
{
	int	row;
	int	count;

	if (column == 10)
	{
		print_solution(board);
		return (1);
	}
	row = 0;
	count = 0;
	while (row < 10)
	{
		if (is_safe(board, column, row))
		{
			board[column] = row;
			count += solve(board, column + 1);
		}
		row++;
	}
	return (count);
}

/*
 * Setups Up The Board, This Puzzle Is Just Rush01.
 *		Uses The Backtracking Solver.
 *
 * 	We Will Calculate The 10x10, but use the blow 10 size arrays due to how
 * 		we are requested to print, each column in the number represents the X
 * 		the number itself is the y;
 */
int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (solve(board, 0));
}

/*#include <stdio.h>

int main(void)
{
	int solutions = ft_ten_queens_puzzle();
	printf("Total solutions: %d\n", solutions);
	return 0;
}*/