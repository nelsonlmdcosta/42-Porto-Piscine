/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:56:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 21:44:01 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * 	Print out the ascending list of a range, allocates the space for all the
 * 		values Cannot be ascending (max < min)
 */
int	*ft_range(int min, int max)
{
	int	length;
	int	*buffer;
	int	i;

	if (min >= max)
		return (0);
	length = max - min;
	buffer = malloc(sizeof(int) * length);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(buffer + i) = (min + i);
		++i;
	}
	return (buffer);
}

/*
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int* range1 = ft_range(2, 5);
	int range1len = 5 - 2;
	int* range2 = ft_range(-1, 3);
	int range2len = 3 - -1;
	int* range3 = ft_range(0, 10);
	int range3len = 10 - 0;

	int counter = 0;
	while(counter < range1len)
	{
		printf("Array1[%d] - %d\n", counter, *(range1 + counter));
		++counter;
	}

	counter = 0;
	while(counter < range2len)
	{
		printf("Array2[%d] - %d\n", counter, *(range2 + counter));
		++counter;
	}

	counter = 0;
	while(counter < range3len)
	{
		printf("Array3[%d] - %d\n", counter, *(range3 + counter));
		++counter;
	}
	return 0;
}*/
