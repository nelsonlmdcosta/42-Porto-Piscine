/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:03:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:39:44 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Writes a single digit to the screen, nothing really out of this world
 */
void	write_digit(char digit)
{
	write(1, &digit, 1);
}

/*
 *	Prints The Combination Of Characters In Order. Could Use Buffers But
 *		Decided To Follow What Had Been Previously Used.
 */
void	print_combination(int *current_combination, int combination_size)
{
	int	index;

	index = 0;
	while (index < combination_size)
	{
		write_digit(current_combination[index] + '0');
		index++;
	}
	if (current_combination[0] != 10 - combination_size)
		write(1, ", ", 2);
}

/*
 *	Recursive Function To Print Combinations, Was The Best Way I could make it
 *		whilst fulfilling norminettes annoying standards fo spacing, functions
 *		numbers, and line counts.
 *
 *	This essentially Checks As Most Recusrive Functions Do In the Begining If
 *		It's Reached It's Target. If It Has It Prints And Goes Back Down The
 *		Stack.
 *
 *	Otherwise We Ensure We Deal With The Next Digit, Place It Into The Array,
 *		So it can be made ready to submit, to printing when it's filled up
 *		completly.
 *		It will then call itself, to ensure there are no more digits to add.
 *		If it's Reached that end it returns back to here to print in the
 *		abvoe condition mentoned
 */
void	gen_comb(int *curr_comb, int comb_size, int curr_index, int next_digit)
{
	int	digit;

	if (curr_index == comb_size)
	{
		print_combination(curr_comb, comb_size);
		return ;
	}
	digit = next_digit;
	while (digit <= 9)
	{
		curr_comb[curr_index] = digit;
		gen_comb(curr_comb, comb_size, curr_index + 1, digit + 1);
		digit++;
	}
}

/*
 * Function Main Entry Point, It Essentially Allocates a Array Of Our Max
 * 		Combiantions We Then Ensure As Well Our Constraints Are Valid Before
 * 		Passing This Into A Recursive Function, To Generate Combinations
 * 		(name is small due to norminette)
 */
void	ft_print_combn(int n)
{
	int	current_combination[9];

	if (n <= 0 || n >= 10)
		return ;
	gen_comb(current_combination, n, 0, 0);
}

/*
int main()
{
	ft_print_combn(1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(3);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(4);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(5);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(6);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(7);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(8);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(9);

	return 0;
}*/