/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:16:44 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/07 17:19:31 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

// TODO: Copy over the other buffer for chars

void	zero_int_buffer(int *buffer, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		*(buffer + index++) = 0;
	}
}
