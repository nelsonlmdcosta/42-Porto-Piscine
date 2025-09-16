/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 07:50:40 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 22:00:12 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "ft_stocks_str.h"

/* Prototypes from your previous exercises */
t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(struct s_stock_str *par);

/* Optional: helpers from previous exercises (ft_putstr, ft_putnbr) */
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int	main(void)
{
	char *strings[] = {
			"Hello",
			"42",
			"C programming",
			"Test string"
	};
	int count = 4;

	/* Convert array of strings to t_stock_str array */
	t_stock_str *tab = ft_strs_to_tab(count, strings);
	if (!tab)
		return (1);

	/* Show the content of the tab */
	ft_show_tab(tab);

	/* Free the allocated copies */
	for (int i = 0; i < count; i++)
		free(tab[i].copy);
	free(tab);

	return (0);
}