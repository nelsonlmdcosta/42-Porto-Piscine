/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:56:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 11:12:10 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int length;
	int* buffer;

	if(min > max)
		return 0;
	length = max - min;
	buffer = malloc(sizeof(int) * length);
	while(length >= 0)
	{
		*(buffer + length - 1) = (min + length - 1);
		--length;
	}
	return buffer;
}
