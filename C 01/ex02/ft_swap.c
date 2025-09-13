/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:52:03 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:51:54 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Swaps the value of the integer of two given pointers
 */
void	ft_swap(int *a, int *b)
{
	int	tempvalue;

	tempvalue = *a;
	*a = *b;
	*b = tempvalue;
}

/*
#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;

	printf("A: %d\n", a);
	printf("B: %d\n", b);

	ft_swap(&a, &b);

	printf("A: %d\n", a);
	printf("B: %d\n", b);

	return 0;
}*/