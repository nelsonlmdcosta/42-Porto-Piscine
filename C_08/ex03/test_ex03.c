/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:36:11 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/16 11:37:11 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}