/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 07:50:40 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/13 12:40:15 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stocks_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(struct s_stock_str *par);

int	main(int ac, char **av)
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
	return (0);
}
