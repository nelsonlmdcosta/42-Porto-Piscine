/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:12:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 21:43:42 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * 	Same idea just with a double pointer to write memory into. Double pointer
 * 		is just so we
 *
 *	Dereference Range First, Then Push Internal Pointer, Then Dereference That
 *		To Get The Memory Location TO Write A Value Into
 *
 */
int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	counter;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = malloc(sizeof(int) * length);
	if (!*range)
		return (-1);
	counter = 0;
	while (counter < length)
	{
		*((*range) + counter) = (min + counter);
		++counter;
	}
	return (length);
}

/*
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int* range1;
	int range1len = ft_ultimate_range(&range1, 2, 5);
	int* range2;
	int range2len = ft_ultimate_range(&range2, -1, 3);
	int* range3;
	int range3len = ft_ultimate_range(&range3, 0, 10);

	int counter = 0;
	while(counter < range1len)
	{
		printf("Array1[%d] - %d\n", counter, *(range1 + counter));
		++counter;
	}

	counter = 0;
	while(counter < range2len)
	{
		printf("Array1[%d] - %d\n", counter, *(range2 + counter));
		++counter;
	}

	counter = 0;
	while(counter < range3len)
	{
		printf("Array1[%d] - %d\n", counter, *(range3 + counter));
		++counter;
	}
	return 0;
}*/
