/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:12:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 11:22:14 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 *	Dereference Range First, Then Push Internal Pointer, Then Dereference That To Get The Memory Location
 */
int ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int counter;

	if(min > max)
		return 0;
	length = max - min;
	*range = malloc(sizeof(int) * length);
	counter = 0;
	while(counter < length)
	{
		*((*range) + counter) = (min + counter);
		++counter;
	}
	return length;
}
