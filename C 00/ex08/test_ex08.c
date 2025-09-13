/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 08:56:10 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:39:28 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <io.h>

void	ft_print_combn(int n);

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
}
