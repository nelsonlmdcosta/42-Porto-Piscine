/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 07:50:40 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/13 12:34:03 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stocks_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	int			i;
	char		*format;
	t_stock_str	*tab;

	i = 0;
	tab = ft_strs_to_tab(ac, av);
	format = "[%d] str: %s | copy: %s | size: %d\n";
	while (tab[i].str)
	{
		printf(format, i, tab[i].str, tab[i].copy, tab[i].size);
		i++;
	}
	return (0);
}
